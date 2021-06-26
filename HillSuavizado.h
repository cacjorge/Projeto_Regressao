/*
 * HillSuavizado.h
 *
 *  Created on: 14/01/2010
 *      Author: Carlos Antonio
 */

#ifndef HillSuavizado_H_
#define HillSuavizado_H_


#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <sys/time.h>
#include "Gauss.h"
#include "Matriz.h"

#define DIFFA(x,a,b,c) ( -(pow(x,c)/pow(a+b*pow(x,c),2)) )
#define DIFFB(x,a,b,c) ( -(pow(x,2*c)/pow(a+b*pow(x,c),2)) )
#define DIFFC(x,a,b,c) ( a*pow(x,c)*log(x)/pow(a+b*pow(x,c),2) )
#define F(x,a,b,c) 	  ( pow(x,c)/(a+b*pow(x,c)) )

using namespace std;
typedef vector<long double> VetorDados;

class HillSuavizado {
private:
	string nomeArquivo;

	VetorDados dadosX;
	VetorDados dadosY;
	VetorDados diffA;
	VetorDados diffB;
	VetorDados diffC;
	VetorDados dadosF;
	VetorDados erro;
	VetorDados final;
	VetorDados yfinal;

	long double ymax;
	long double ymin;
	long double a;
	long double b;
	long double c;
	static const long double E=0.00001;

public:
	HillSuavizado(string);
	bool lerDadosDeArquivo();
        VetorDados resultadoFinal(){ return final; }
	void geracaoDeDerivadasParciais(VetorDados x,long double a,long double b, long double c);
	void geracaoDeDadosPorFuncao(VetorDados x,long double a,long double b, long double c);
	void geracaoDeDadosFinal();
	VetorDados geracaoDeErro(VetorDados x,VetorDados y);
	Matriz *montaZ() throw(int);
	void executa();
	double Tempo_Execucao(void(HillSuavizado::*function)(void));

	virtual ~HillSuavizado(){};

};

#endif /* HillSuavizado_H_ */
