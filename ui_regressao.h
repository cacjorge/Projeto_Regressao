/********************************************************************************
** Form generated from reading ui file 'regressao.ui'
**
** Created: Thu 4. Mar 20:26:12 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_REGRESSAO_H
#define UI_REGRESSAO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regressao
{
public:
    QAction *actionCarregar_arquivo;
    QAction *actionPlanilha_Excel;
    QAction *actionDocumento_Texto;
    QAction *actionSair;
    QAction *actionLimpar_Tela;
    QWidget *centralWidget;
    QGroupBox *boxEquacoes;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label2C;
    QVBoxLayout *Layout2Coef;
    QCheckBox *checkLinear;
    QCheckBox *checkPotencial;
    QCheckBox *checkExponencial;
    QCheckBox *checkLogaritmica;
    QCheckBox *checkHiperLinear;
    QCheckBox *checkHiperPara;
    QCheckBox *checkHill;
    QCheckBox *checkAbrams;
    QCheckBox *checkWeibull;
    QLabel *label3C;
    QVBoxLayout *Layout3Coef;
    QCheckBox *checkHillSuav;
    QCheckBox *checkAbramsSuav;
    QCheckBox *checkTalbotRichart;
    QPushButton *botaoExecuta;
    QFrame *line;
    QFrame *line_4;
    QTableWidget *tabelaEntrada;
    QLabel *labelY;
    QLabel *labelX;
    QLineEdit *campoNomeY;
    QLineEdit *campoNomeX;
    QTabWidget *tabelaResultados;
    QWidget *tabLinear;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *valorLinearA;
    QLabel *label_5;
    QLineEdit *valorLinearB;
    QWidget *tabPotencial;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *valorPotA;
    QLabel *label_8;
    QLineEdit *valorPotB;
    QWidget *tabExponencial;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLineEdit *valorExpA;
    QLabel *label_11;
    QLineEdit *valorExpB;
    QWidget *tabAbrams;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_8;
    QLabel *label_20;
    QLineEdit *valorAbramsA;
    QLabel *label_21;
    QLineEdit *valorAbramB;
    QWidget *tabLog;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QLineEdit *valorLogA;
    QLabel *label_13;
    QLineEdit *valorLogB;
    QWidget *tabHiperLinear;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QLineEdit *valorHLA;
    QLabel *label_15;
    QLineEdit *valorHLB;
    QWidget *tabHiperPara;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_6;
    QLabel *label_16;
    QLineEdit *valorHPA;
    QLabel *label_17;
    QLineEdit *valorHPB;
    QWidget *tabHill;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_7;
    QLabel *label_18;
    QLineEdit *valorHillA;
    QLabel *label_19;
    QLineEdit *valorHillB;
    QWidget *tabWeibull;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_9;
    QLabel *label_22;
    QLineEdit *valorWeibullA;
    QLabel *label_23;
    QLineEdit *valorWeibullB;
    QWidget *tabHillSuav;
    QWidget *layoutWidget_9;
    QGridLayout *gridLayout_10;
    QLabel *label_24;
    QLineEdit *valorHSA;
    QLabel *label_25;
    QLineEdit *valorHSB;
    QLabel *label_26;
    QLineEdit *valorHSC;
    QWidget *tabAbramsSuav;
    QWidget *layoutWidget_10;
    QGridLayout *gridLayout_11;
    QLabel *label_27;
    QLineEdit *valorASA;
    QLabel *label_28;
    QLineEdit *valorASB;
    QLabel *label_29;
    QLineEdit *valorASC;
    QWidget *tabTalRich;
    QWidget *layoutWidget_11;
    QGridLayout *gridLayout_12;
    QLabel *label_30;
    QLineEdit *valorTRA;
    QLabel *label_31;
    QLineEdit *valorTRB;
    QLabel *label_32;
    QLineEdit *valorTRC;
    QFrame *line_2;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Regressao)
    {
        if (Regressao->objectName().isEmpty())
            Regressao->setObjectName(QString::fromUtf8("Regressao"));
        Regressao->resize(1024, 600);
        Regressao->setMinimumSize(QSize(1024, 600));
        Regressao->setMaximumSize(QSize(1024, 600));
        actionCarregar_arquivo = new QAction(Regressao);
        actionCarregar_arquivo->setObjectName(QString::fromUtf8("actionCarregar_arquivo"));
        actionPlanilha_Excel = new QAction(Regressao);
        actionPlanilha_Excel->setObjectName(QString::fromUtf8("actionPlanilha_Excel"));
        actionDocumento_Texto = new QAction(Regressao);
        actionDocumento_Texto->setObjectName(QString::fromUtf8("actionDocumento_Texto"));
        actionSair = new QAction(Regressao);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionLimpar_Tela = new QAction(Regressao);
        actionLimpar_Tela->setObjectName(QString::fromUtf8("actionLimpar_Tela"));
        centralWidget = new QWidget(Regressao);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        boxEquacoes = new QGroupBox(centralWidget);
        boxEquacoes->setObjectName(QString::fromUtf8("boxEquacoes"));
        boxEquacoes->setEnabled(true);
        boxEquacoes->setGeometry(QRect(300, 10, 181, 421));
        boxEquacoes->setMouseTracking(true);
        boxEquacoes->setAutoFillBackground(false);
        boxEquacoes->setFlat(false);
        boxEquacoes->setCheckable(false);
        verticalLayoutWidget_3 = new QWidget(boxEquacoes);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 20, 177, 398));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setMargin(11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label2C = new QLabel(verticalLayoutWidget_3);
        label2C->setObjectName(QString::fromUtf8("label2C"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(9);
        font.setUnderline(true);
        label2C->setFont(font);

        verticalLayout_3->addWidget(label2C);

        Layout2Coef = new QVBoxLayout();
        Layout2Coef->setSpacing(6);
        Layout2Coef->setObjectName(QString::fromUtf8("Layout2Coef"));
        checkLinear = new QCheckBox(verticalLayoutWidget_3);
        checkLinear->setObjectName(QString::fromUtf8("checkLinear"));

        Layout2Coef->addWidget(checkLinear);

        checkPotencial = new QCheckBox(verticalLayoutWidget_3);
        checkPotencial->setObjectName(QString::fromUtf8("checkPotencial"));

        Layout2Coef->addWidget(checkPotencial);

        checkExponencial = new QCheckBox(verticalLayoutWidget_3);
        checkExponencial->setObjectName(QString::fromUtf8("checkExponencial"));

        Layout2Coef->addWidget(checkExponencial);

        checkLogaritmica = new QCheckBox(verticalLayoutWidget_3);
        checkLogaritmica->setObjectName(QString::fromUtf8("checkLogaritmica"));

        Layout2Coef->addWidget(checkLogaritmica);

        checkHiperLinear = new QCheckBox(verticalLayoutWidget_3);
        checkHiperLinear->setObjectName(QString::fromUtf8("checkHiperLinear"));

        Layout2Coef->addWidget(checkHiperLinear);

        checkHiperPara = new QCheckBox(verticalLayoutWidget_3);
        checkHiperPara->setObjectName(QString::fromUtf8("checkHiperPara"));

        Layout2Coef->addWidget(checkHiperPara);

        checkHill = new QCheckBox(verticalLayoutWidget_3);
        checkHill->setObjectName(QString::fromUtf8("checkHill"));

        Layout2Coef->addWidget(checkHill);

        checkAbrams = new QCheckBox(verticalLayoutWidget_3);
        checkAbrams->setObjectName(QString::fromUtf8("checkAbrams"));

        Layout2Coef->addWidget(checkAbrams);

        checkWeibull = new QCheckBox(verticalLayoutWidget_3);
        checkWeibull->setObjectName(QString::fromUtf8("checkWeibull"));

        Layout2Coef->addWidget(checkWeibull);


        verticalLayout_3->addLayout(Layout2Coef);

        label3C = new QLabel(verticalLayoutWidget_3);
        label3C->setObjectName(QString::fromUtf8("label3C"));
        label3C->setFont(font);

        verticalLayout_3->addWidget(label3C);

        Layout3Coef = new QVBoxLayout();
        Layout3Coef->setSpacing(6);
        Layout3Coef->setObjectName(QString::fromUtf8("Layout3Coef"));
        checkHillSuav = new QCheckBox(verticalLayoutWidget_3);
        checkHillSuav->setObjectName(QString::fromUtf8("checkHillSuav"));

        Layout3Coef->addWidget(checkHillSuav);

        checkAbramsSuav = new QCheckBox(verticalLayoutWidget_3);
        checkAbramsSuav->setObjectName(QString::fromUtf8("checkAbramsSuav"));

        Layout3Coef->addWidget(checkAbramsSuav);

        checkTalbotRichart = new QCheckBox(verticalLayoutWidget_3);
        checkTalbotRichart->setObjectName(QString::fromUtf8("checkTalbotRichart"));

        Layout3Coef->addWidget(checkTalbotRichart);


        verticalLayout_3->addLayout(Layout3Coef);

        botaoExecuta = new QPushButton(centralWidget);
        botaoExecuta->setObjectName(QString::fromUtf8("botaoExecuta"));
        botaoExecuta->setGeometry(QRect(340, 470, 91, 31));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 0, 20, 551));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(270, 0, 20, 551));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tabelaEntrada = new QTableWidget(centralWidget);
        if (tabelaEntrada->columnCount() < 2)
            tabelaEntrada->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelaEntrada->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelaEntrada->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabelaEntrada->setObjectName(QString::fromUtf8("tabelaEntrada"));
        tabelaEntrada->setGeometry(QRect(40, 80, 211, 461));
        labelY = new QLabel(centralWidget);
        labelY->setObjectName(QString::fromUtf8("labelY"));
        labelY->setGeometry(QRect(40, 10, 21, 18));
        labelX = new QLabel(centralWidget);
        labelX->setObjectName(QString::fromUtf8("labelX"));
        labelX->setGeometry(QRect(40, 40, 21, 18));
        campoNomeY = new QLineEdit(centralWidget);
        campoNomeY->setObjectName(QString::fromUtf8("campoNomeY"));
        campoNomeY->setGeometry(QRect(60, 10, 181, 21));
        campoNomeX = new QLineEdit(centralWidget);
        campoNomeX->setObjectName(QString::fromUtf8("campoNomeX"));
        campoNomeX->setGeometry(QRect(60, 40, 181, 21));
        tabelaResultados = new QTabWidget(centralWidget);
        tabelaResultados->setObjectName(QString::fromUtf8("tabelaResultados"));
        tabelaResultados->setGeometry(QRect(500, 0, 521, 191));
        tabelaResultados->setCursor(QCursor(Qt::PointingHandCursor));
        tabelaResultados->setMouseTracking(true);
        tabelaResultados->setTabPosition(QTabWidget::North);
        tabelaResultados->setTabShape(QTabWidget::Rounded);
        tabelaResultados->setElideMode(Qt::ElideNone);
        tabelaResultados->setUsesScrollButtons(true);
        tabelaResultados->setDocumentMode(true);
        tabelaResultados->setTabsClosable(false);
        tabelaResultados->setMovable(false);
        tabLinear = new QWidget();
        tabLinear->setObjectName(QString::fromUtf8("tabLinear"));
        layoutWidget = new QWidget(tabLinear);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 235, 60));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        valorLinearA = new QLineEdit(layoutWidget);
        valorLinearA->setObjectName(QString::fromUtf8("valorLinearA"));
        valorLinearA->setReadOnly(true);

        gridLayout->addWidget(valorLinearA, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        valorLinearB = new QLineEdit(layoutWidget);
        valorLinearB->setObjectName(QString::fromUtf8("valorLinearB"));
        valorLinearB->setReadOnly(true);

        gridLayout->addWidget(valorLinearB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabLinear, QString());
        tabPotencial = new QWidget();
        tabPotencial->setObjectName(QString::fromUtf8("tabPotencial"));
        layoutWidget1 = new QWidget(tabPotencial);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        valorPotA = new QLineEdit(layoutWidget1);
        valorPotA->setObjectName(QString::fromUtf8("valorPotA"));
        valorPotA->setReadOnly(true);

        gridLayout_2->addWidget(valorPotA, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        valorPotB = new QLineEdit(layoutWidget1);
        valorPotB->setObjectName(QString::fromUtf8("valorPotB"));
        valorPotB->setReadOnly(true);

        gridLayout_2->addWidget(valorPotB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabPotencial, QString());
        tabExponencial = new QWidget();
        tabExponencial->setObjectName(QString::fromUtf8("tabExponencial"));
        layoutWidget_2 = new QWidget(tabExponencial);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        valorExpA = new QLineEdit(layoutWidget_2);
        valorExpA->setObjectName(QString::fromUtf8("valorExpA"));
        valorExpA->setReadOnly(true);

        gridLayout_3->addWidget(valorExpA, 0, 1, 1, 1);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        valorExpB = new QLineEdit(layoutWidget_2);
        valorExpB->setObjectName(QString::fromUtf8("valorExpB"));
        valorExpB->setReadOnly(true);

        gridLayout_3->addWidget(valorExpB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabExponencial, QString());
        tabAbrams = new QWidget();
        tabAbrams->setObjectName(QString::fromUtf8("tabAbrams"));
        layoutWidget_7 = new QWidget(tabAbrams);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_8 = new QGridLayout(layoutWidget_7);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 0, 0, 1, 1);

        valorAbramsA = new QLineEdit(layoutWidget_7);
        valorAbramsA->setObjectName(QString::fromUtf8("valorAbramsA"));
        valorAbramsA->setReadOnly(true);

        gridLayout_8->addWidget(valorAbramsA, 0, 1, 1, 1);

        label_21 = new QLabel(layoutWidget_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_8->addWidget(label_21, 1, 0, 1, 1);

        valorAbramB = new QLineEdit(layoutWidget_7);
        valorAbramB->setObjectName(QString::fromUtf8("valorAbramB"));
        valorAbramB->setReadOnly(true);

        gridLayout_8->addWidget(valorAbramB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabAbrams, QString());
        tabLog = new QWidget();
        tabLog->setObjectName(QString::fromUtf8("tabLog"));
        layoutWidget_3 = new QWidget(tabLog);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        valorLogA = new QLineEdit(layoutWidget_3);
        valorLogA->setObjectName(QString::fromUtf8("valorLogA"));
        valorLogA->setReadOnly(true);

        gridLayout_4->addWidget(valorLogA, 0, 1, 1, 1);

        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        valorLogB = new QLineEdit(layoutWidget_3);
        valorLogB->setObjectName(QString::fromUtf8("valorLogB"));
        valorLogB->setReadOnly(true);

        gridLayout_4->addWidget(valorLogB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabLog, QString());
        tabHiperLinear = new QWidget();
        tabHiperLinear->setObjectName(QString::fromUtf8("tabHiperLinear"));
        layoutWidget_4 = new QWidget(tabHiperLinear);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_5 = new QGridLayout(layoutWidget_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        valorHLA = new QLineEdit(layoutWidget_4);
        valorHLA->setObjectName(QString::fromUtf8("valorHLA"));
        valorHLA->setReadOnly(true);

        gridLayout_5->addWidget(valorHLA, 0, 1, 1, 1);

        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        valorHLB = new QLineEdit(layoutWidget_4);
        valorHLB->setObjectName(QString::fromUtf8("valorHLB"));
        valorHLB->setReadOnly(true);

        gridLayout_5->addWidget(valorHLB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabHiperLinear, QString());
        tabHiperPara = new QWidget();
        tabHiperPara->setObjectName(QString::fromUtf8("tabHiperPara"));
        layoutWidget_5 = new QWidget(tabHiperPara);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_6 = new QGridLayout(layoutWidget_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_6->addWidget(label_16, 0, 0, 1, 1);

        valorHPA = new QLineEdit(layoutWidget_5);
        valorHPA->setObjectName(QString::fromUtf8("valorHPA"));
        valorHPA->setReadOnly(true);

        gridLayout_6->addWidget(valorHPA, 0, 1, 1, 1);

        label_17 = new QLabel(layoutWidget_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_6->addWidget(label_17, 1, 0, 1, 1);

        valorHPB = new QLineEdit(layoutWidget_5);
        valorHPB->setObjectName(QString::fromUtf8("valorHPB"));
        valorHPB->setReadOnly(true);

        gridLayout_6->addWidget(valorHPB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabHiperPara, QString());
        tabHill = new QWidget();
        tabHill->setObjectName(QString::fromUtf8("tabHill"));
        layoutWidget_6 = new QWidget(tabHill);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_7 = new QGridLayout(layoutWidget_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_7->addWidget(label_18, 0, 0, 1, 1);

        valorHillA = new QLineEdit(layoutWidget_6);
        valorHillA->setObjectName(QString::fromUtf8("valorHillA"));
        valorHillA->setReadOnly(true);

        gridLayout_7->addWidget(valorHillA, 0, 1, 1, 1);

        label_19 = new QLabel(layoutWidget_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_7->addWidget(label_19, 1, 0, 1, 1);

        valorHillB = new QLineEdit(layoutWidget_6);
        valorHillB->setObjectName(QString::fromUtf8("valorHillB"));
        valorHillB->setReadOnly(true);

        gridLayout_7->addWidget(valorHillB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabHill, QString());
        tabWeibull = new QWidget();
        tabWeibull->setObjectName(QString::fromUtf8("tabWeibull"));
        layoutWidget_8 = new QWidget(tabWeibull);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 100, 235, 60));
        gridLayout_9 = new QGridLayout(layoutWidget_8);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_8);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_9->addWidget(label_22, 0, 0, 1, 1);

        valorWeibullA = new QLineEdit(layoutWidget_8);
        valorWeibullA->setObjectName(QString::fromUtf8("valorWeibullA"));
        valorWeibullA->setReadOnly(true);

        gridLayout_9->addWidget(valorWeibullA, 0, 1, 1, 1);

        label_23 = new QLabel(layoutWidget_8);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_9->addWidget(label_23, 1, 0, 1, 1);

        valorWeibullB = new QLineEdit(layoutWidget_8);
        valorWeibullB->setObjectName(QString::fromUtf8("valorWeibullB"));
        valorWeibullB->setReadOnly(true);

        gridLayout_9->addWidget(valorWeibullB, 1, 1, 1, 1);

        tabelaResultados->addTab(tabWeibull, QString());
        tabHillSuav = new QWidget();
        tabHillSuav->setObjectName(QString::fromUtf8("tabHillSuav"));
        layoutWidget_9 = new QWidget(tabHillSuav);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 70, 235, 92));
        gridLayout_10 = new QGridLayout(layoutWidget_9);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget_9);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_10->addWidget(label_24, 0, 0, 1, 1);

        valorHSA = new QLineEdit(layoutWidget_9);
        valorHSA->setObjectName(QString::fromUtf8("valorHSA"));
        valorHSA->setReadOnly(true);

        gridLayout_10->addWidget(valorHSA, 0, 1, 1, 1);

        label_25 = new QLabel(layoutWidget_9);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_10->addWidget(label_25, 1, 0, 1, 1);

        valorHSB = new QLineEdit(layoutWidget_9);
        valorHSB->setObjectName(QString::fromUtf8("valorHSB"));
        valorHSB->setReadOnly(true);

        gridLayout_10->addWidget(valorHSB, 1, 1, 1, 1);

        label_26 = new QLabel(layoutWidget_9);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_10->addWidget(label_26, 2, 0, 1, 1);

        valorHSC = new QLineEdit(layoutWidget_9);
        valorHSC->setObjectName(QString::fromUtf8("valorHSC"));
        valorHSC->setReadOnly(true);

        gridLayout_10->addWidget(valorHSC, 2, 1, 1, 1);

        tabelaResultados->addTab(tabHillSuav, QString());
        tabAbramsSuav = new QWidget();
        tabAbramsSuav->setObjectName(QString::fromUtf8("tabAbramsSuav"));
        layoutWidget_10 = new QWidget(tabAbramsSuav);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 70, 235, 92));
        gridLayout_11 = new QGridLayout(layoutWidget_10);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setMargin(11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget_10);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_11->addWidget(label_27, 0, 0, 1, 1);

        valorASA = new QLineEdit(layoutWidget_10);
        valorASA->setObjectName(QString::fromUtf8("valorASA"));
        valorASA->setReadOnly(true);

        gridLayout_11->addWidget(valorASA, 0, 1, 1, 1);

        label_28 = new QLabel(layoutWidget_10);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_11->addWidget(label_28, 1, 0, 1, 1);

        valorASB = new QLineEdit(layoutWidget_10);
        valorASB->setObjectName(QString::fromUtf8("valorASB"));
        valorASB->setReadOnly(true);

        gridLayout_11->addWidget(valorASB, 1, 1, 1, 1);

        label_29 = new QLabel(layoutWidget_10);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_11->addWidget(label_29, 2, 0, 1, 1);

        valorASC = new QLineEdit(layoutWidget_10);
        valorASC->setObjectName(QString::fromUtf8("valorASC"));
        valorASC->setReadOnly(true);

        gridLayout_11->addWidget(valorASC, 2, 1, 1, 1);

        tabelaResultados->addTab(tabAbramsSuav, QString());
        tabTalRich = new QWidget();
        tabTalRich->setObjectName(QString::fromUtf8("tabTalRich"));
        layoutWidget_11 = new QWidget(tabTalRich);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(10, 70, 235, 92));
        gridLayout_12 = new QGridLayout(layoutWidget_11);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget_11);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_12->addWidget(label_30, 0, 0, 1, 1);

        valorTRA = new QLineEdit(layoutWidget_11);
        valorTRA->setObjectName(QString::fromUtf8("valorTRA"));
        valorTRA->setReadOnly(true);

        gridLayout_12->addWidget(valorTRA, 0, 1, 1, 1);

        label_31 = new QLabel(layoutWidget_11);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_12->addWidget(label_31, 1, 0, 1, 1);

        valorTRB = new QLineEdit(layoutWidget_11);
        valorTRB->setObjectName(QString::fromUtf8("valorTRB"));
        valorTRB->setReadOnly(true);

        gridLayout_12->addWidget(valorTRB, 1, 1, 1, 1);

        label_32 = new QLabel(layoutWidget_11);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_12->addWidget(label_32, 2, 0, 1, 1);

        valorTRC = new QLineEdit(layoutWidget_11);
        valorTRC->setObjectName(QString::fromUtf8("valorTRC"));
        valorTRC->setReadOnly(true);

        gridLayout_12->addWidget(valorTRC, 2, 1, 1, 1);

        tabelaResultados->addTab(tabTalRich, QString());
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(500, 190, 521, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Regressao->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Regressao);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        Regressao->setMenuBar(menuBar);
        statusBar = new QStatusBar(Regressao);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Regressao->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionCarregar_arquivo);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);

        retranslateUi(Regressao);

        tabelaResultados->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Regressao);
    } // setupUi

    void retranslateUi(QMainWindow *Regressao)
    {
        Regressao->setWindowTitle(QApplication::translate("Regressao", "Regressao", 0, QApplication::UnicodeUTF8));
        actionCarregar_arquivo->setText(QApplication::translate("Regressao", "Carregar arquivo..", 0, QApplication::UnicodeUTF8));
        actionPlanilha_Excel->setText(QApplication::translate("Regressao", "Planilha Excel", 0, QApplication::UnicodeUTF8));
        actionDocumento_Texto->setText(QApplication::translate("Regressao", "Documento Texto", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("Regressao", "Sair", 0, QApplication::UnicodeUTF8));
        actionLimpar_Tela->setText(QApplication::translate("Regressao", "Limpar Tela", 0, QApplication::UnicodeUTF8));
        boxEquacoes->setTitle(QApplication::translate("Regressao", "Equa\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        label2C->setText(QApplication::translate("Regressao", "Dois Coeficientes:", 0, QApplication::UnicodeUTF8));
        checkLinear->setText(QApplication::translate("Regressao", "Linear", 0, QApplication::UnicodeUTF8));
        checkPotencial->setText(QApplication::translate("Regressao", "Potencial", 0, QApplication::UnicodeUTF8));
        checkExponencial->setText(QApplication::translate("Regressao", "Exponencial", 0, QApplication::UnicodeUTF8));
        checkLogaritmica->setText(QApplication::translate("Regressao", "Logar\303\255tmica", 0, QApplication::UnicodeUTF8));
        checkHiperLinear->setText(QApplication::translate("Regressao", "Hiperb\303\263lico Linear", 0, QApplication::UnicodeUTF8));
        checkHiperPara->setText(QApplication::translate("Regressao", "Hiperb\303\263lico Parab\303\263lico", 0, QApplication::UnicodeUTF8));
        checkHill->setText(QApplication::translate("Regressao", "Hill", 0, QApplication::UnicodeUTF8));
        checkAbrams->setText(QApplication::translate("Regressao", "Abrams", 0, QApplication::UnicodeUTF8));
        checkWeibull->setText(QApplication::translate("Regressao", "Weibull", 0, QApplication::UnicodeUTF8));
        label3C->setText(QApplication::translate("Regressao", "Tr\303\252s Coeficientes:", 0, QApplication::UnicodeUTF8));
        checkHillSuav->setText(QApplication::translate("Regressao", "Hill Suavizado", 0, QApplication::UnicodeUTF8));
        checkAbramsSuav->setText(QApplication::translate("Regressao", "Abrams Suavizado", 0, QApplication::UnicodeUTF8));
        checkTalbotRichart->setText(QApplication::translate("Regressao", "Talbot-Richart", 0, QApplication::UnicodeUTF8));
        botaoExecuta->setText(QApplication::translate("Regressao", "Executa", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tabelaEntrada->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Regressao", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabelaEntrada->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Regressao", "Y", 0, QApplication::UnicodeUTF8));
        labelY->setText(QApplication::translate("Regressao", "y:", 0, QApplication::UnicodeUTF8));
        labelX->setText(QApplication::translate("Regressao", "x:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabLinear), QApplication::translate("Regressao", "Linear", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabPotencial), QApplication::translate("Regressao", "Potencial", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabExponencial), QApplication::translate("Regressao", "Exponencial", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabAbrams), QApplication::translate("Regressao", "Abrams", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabLog), QApplication::translate("Regressao", "Logar\303\255tmica", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabHiperLinear), QApplication::translate("Regressao", "Hiperb\303\263lico Linear", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabHiperPara), QApplication::translate("Regressao", "Hiperb\303\263lico Parab\303\263lico", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabHill), QApplication::translate("Regressao", "Hill", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabWeibull), QApplication::translate("Regressao", "Weibull", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Regressao", "Valor de \"c\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabHillSuav), QApplication::translate("Regressao", "Hill Suavizado", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("Regressao", "Valor de \"c\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabAbramsSuav), QApplication::translate("Regressao", "Abrams Suavizado", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("Regressao", "Valor de \"a\":", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("Regressao", "Valor de \"b\":", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("Regressao", "Valor de \"c\":", 0, QApplication::UnicodeUTF8));
        tabelaResultados->setTabText(tabelaResultados->indexOf(tabTalRich), QApplication::translate("Regressao", "Talbot-Richart", 0, QApplication::UnicodeUTF8));
        menuArquivo->setTitle(QApplication::translate("Regressao", "Arquivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Regressao: public Ui_Regressao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGRESSAO_H
