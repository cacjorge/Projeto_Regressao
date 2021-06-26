#include "regressao.h"
#include "ui_regressao.h"

Regressao::Regressao(QWidget *parent):QMainWindow(parent), ui(new Ui::Regressao)
{
    ui->setupUi(this);
    ui->statusBar->showMessage(tr("Bem-vindo ao programa do Flávio Mamede!!!!"));
    itensTabelaEntradaX.clear();
    itensTabelaEntradaY.clear();
    ui->tabelaEntrada->verticalHeader()->hide();
    ui->tabelaEntrada->horizontalHeader()->adjustSize();

    ui->tabelaResultados->hide();
    criaConexoes();
}

Regressao::~Regressao()
{
    delete ui;
}

void Regressao::abrirArquivo()
{
    itensTabelaEntradaX.clear();
    itensTabelaEntradaY.clear();
    nomeArquivo = QFileDialog::getOpenFileName(this,tr("Abrir Arquivo"), "", tr("Arquivo de entrada (*.regent)"));
    ifstream arquivo(nomeArquivo.toStdString().c_str());
    if (!arquivo.is_open()) return;

    while(!arquivo.eof())
    {
        string x,y;
        arquivo >> x >> y;
        QString auxX(x.c_str());
        QString auxY(y.c_str());
        QTableWidgetItem tempX,tempY;
        tempX.setText(auxX);
        tempY.setText(auxY);
        itensTabelaEntradaX.push_back(tempX);
        itensTabelaEntradaY.push_back(tempY);
    }
    ui->tabelaEntrada->setRowCount(itensTabelaEntradaX.size()-1);
    for(unsigned int pos=0;pos<itensTabelaEntradaX.size();pos++)
    {
        ui->tabelaEntrada->setItem(pos,0,&itensTabelaEntradaX[pos]);
    }
    for(unsigned int pos=0;pos<itensTabelaEntradaY.size();pos++)
    {
        ui->tabelaEntrada->setItem(pos,1,&itensTabelaEntradaY[pos]);
    }


}


void Regressao::criaConexoes()
{
    connect(ui->actionCarregar_arquivo, SIGNAL(triggered()), this, SLOT(abrirArquivo()));
    connect(ui->actionSair, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->botaoExecuta,SIGNAL(clicked()),this,SLOT(executaCalculos()));
    connect(ui->checkLinear,SIGNAL(clicked(bool)),ui->tabLinear,SLOT(setDisabled(bool)));
}

void Regressao::executaCalculos()
{

    if(nomeArquivo.isEmpty())
    {
        ui->statusBar->showMessage("Voce deve abrir um arquivo antes de proceder...");
        return;
    }
    ui->tabelaResultados->show();
    QString mostra;
    if(ui->checkHillSuav->isChecked())
    {
        ui->statusBar->showMessage(nomeArquivo);
        HillSuavizado obj(nomeArquivo.toStdString());
        obj.executa();
        mostra.setNum((double)obj.resultadoFinal()[0]);
        ui->valorHSA->setText(mostra);
        mostra.setNum((double)obj.resultadoFinal()[1]);
        ui->valorHSB->setText(mostra);
        mostra.setNum((double)obj.resultadoFinal()[2]);
        ui->valorHSC->setText(mostra);
    }

}
