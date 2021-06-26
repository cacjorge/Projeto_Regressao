#ifndef REGRESSAO_H
#define REGRESSAO_H

#include <QtGui>
#include <QAction>
#include <QFile>
#include <QtOpenGL>
#include <fstream>

#include "HillSuavizado.h"

namespace Ui
{
    class Regressao;
}

class Regressao : public QMainWindow
{
    Q_OBJECT

public:
    Regressao(QWidget *parent = 0);
    ~Regressao();
    void criaConexoes();

public slots:
    void abrirArquivo();
    void executaCalculos();

private:
    Ui::Regressao *ui;
    QString nomeArquivo;
    vector<QTableWidgetItem> itensTabelaEntradaX;
    vector<QTableWidgetItem> itensTabelaEntradaY;
};

#endif // REGRESSAO_H
