/*
 * HillSuavizado.cpp
 *
 *  Created on: 14/01/2010
 *      Author: Carlos Antonio
 */

#include "HillSuavizado.h"

HillSuavizado::HillSuavizado(string nomeArquivo):a(0.1),c(1.0)
{
	this->nomeArquivo=nomeArquivo;
        if(!lerDadosDeArquivo()) {
                cout<<endl<<"Erro ao ler arquivo"<<endl;
                exit(1);
            }
	ymax = *max_element(dadosY.begin(),dadosY.end());
	ymin = *min_element(dadosY.begin(),dadosY.end());
	b=1/ymax;
}

bool HillSuavizado::lerDadosDeArquivo()
{
        ifstream arquivo(nomeArquivo.c_str());
	if(!arquivo.is_open()) return false;
	else
	{
		while(!arquivo.eof())
		{
			long double x,y;
			arquivo >> x >> y;
			dadosX.push_back(x);
			dadosY.push_back(y);
		}
		return true;
	}
}

void HillSuavizado::geracaoDeDerivadasParciais(VetorDados x,long double a,long double b, long double c)
{
	diffA.clear();
	for(unsigned int pos=0;pos<x.size()-1;pos++) diffA.push_back(DIFFA(x[pos],a,b,c));
	diffB.clear();
	for(unsigned int pos=0;pos<x.size()-1;pos++) diffB.push_back(DIFFB(x[pos],a,b,c));
	diffC.clear();
	for(unsigned int pos=0;pos<x.size()-1;pos++) diffC.push_back(DIFFC(x[pos],a,b,c));
}

void HillSuavizado::geracaoDeDadosPorFuncao(VetorDados x,long double a,long double b, long double c)
{
	dadosF.clear();
	for(unsigned int pos=0;pos<x.size()-1;pos++) dadosF.push_back(F(x[pos],a,b,c));
}

void HillSuavizado::geracaoDeDadosFinal()
{
	yfinal.clear();
	for(unsigned int pos=0;pos<dadosX.size()-1;pos++) yfinal.push_back(F(dadosX[pos],this->final[0],final[1],final[2]));
}

Matriz *HillSuavizado::montaZ() throw(int)
{
		if(diffA.size()!=diffB.size() || diffB.size()!=diffC.size()) throw(5);
		static Matriz tempZ(diffA.size(),3);
		for(int l=0,pos=0; l<tempZ.tamanho_linha(); l++,pos++)
			{
			tempZ.atribuir(diffA[pos],l,0);
			tempZ.atribuir(diffB[pos],l,1);
			tempZ.atribuir(diffC[pos],l,2);
			}
		return &tempZ;
}

VetorDados HillSuavizado::geracaoDeErro(VetorDados x,VetorDados y)
{
	VetorDados temp;
	for(unsigned int pos=0; pos<x.size();pos++) temp.push_back(x[pos]-y[pos]);
	return temp;
}

void HillSuavizado::executa()
{
	VetorDados I(3,0);
	do{
		this->geracaoDeDerivadasParciais(dadosX,a,b,c);
		this->geracaoDeDadosPorFuncao(dadosX,a,b,c);
		erro = this->geracaoDeErro(dadosY,dadosF);

		Matriz A((*(montaZ()->transposta())) * montaZ());
		Matriz B((*(montaZ()->transposta())) * erro);

		Gauss sistemaDeEquacoes(3);
		sistemaDeEquacoes.Seidel(A,B);

		I = sistemaDeEquacoes.getResultado();

		this->a+=I[0];
		this->b+=I[1];
		this->c+=I[2];
	}
	while(abs(I[0])>E || abs(I[1])>E || abs(I[2])>E);

	final.clear();
	final.push_back(a);
	final.push_back(b);
	final.push_back(c);
}

double HillSuavizado::Tempo_Execucao(void(HillSuavizado::*function)(void))
	{
		double ti,tf,deltaT; // ti==tempo inicial // tf==tempo final
		ti=tf=deltaT=0;
		struct timeval tempo_inicio,tempo_fim;
		gettimeofday(&tempo_inicio,NULL);

		(this->*function)(); //aqui o metodo ser executado

		gettimeofday(&tempo_fim,NULL);
		tf=(double)tempo_fim.tv_usec+((double)tempo_fim.tv_sec*1000000);
		ti=(double)tempo_inicio.tv_usec+((double)tempo_inicio.tv_sec*1000000);
		deltaT+=(tf-ti);
		return (deltaT);
	}
