/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRECORD;
    QWidget *jogo;
    QGridLayout *gridLayout;
    QVBoxLayout *device;
    QVBoxLayout *display;
    QHBoxLayout *jogador;
    QVBoxLayout *dados;
    QHBoxLayout *jogador_dados;
    QLabel *nome;
    QLabel *nome_jogador;
    QHBoxLayout *jogo_dados;
    QLabel *lbl_palavra;
    QLabel *palavra_velada;
    QPushButton *btn_chutar;
    QPushButton *btn_novo;
    QHBoxLayout *ae;
    QPushButton *btn_a;
    QPushButton *btn_b;
    QPushButton *btn_c;
    QPushButton *btn_d;
    QPushButton *btn_e;
    QVBoxLayout *teclado;
    QHBoxLayout *fj;
    QPushButton *btn_f;
    QPushButton *btn_g;
    QPushButton *btn_h;
    QPushButton *btn_i;
    QPushButton *btn_j;
    QHBoxLayout *ko;
    QPushButton *btn_k;
    QPushButton *btn_l;
    QPushButton *btn_m;
    QPushButton *btn_n;
    QPushButton *btn_o;
    QHBoxLayout *pt;
    QPushButton *btn_p;
    QPushButton *btn_q;
    QPushButton *btn_r;
    QPushButton *btn_s;
    QPushButton *btn_t;
    QHBoxLayout *uz;
    QPushButton *btn_u;
    QPushButton *btn_v;
    QPushButton *btn_x;
    QPushButton *btn_w;
    QPushButton *btn_y;
    QPushButton *btn_z;
    QMenuBar *menubar;
    QMenu *menuMENU;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(673, 615);
        actionRECORD = new QAction(MainWindow);
        actionRECORD->setObjectName(QString::fromUtf8("actionRECORD"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        actionRECORD->setFont(font);
        jogo = new QWidget(MainWindow);
        jogo->setObjectName(QString::fromUtf8("jogo"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans Ultra Bold"));
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setWeight(50);
        jogo->setFont(font1);
        gridLayout = new QGridLayout(jogo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        device = new QVBoxLayout();
        device->setObjectName(QString::fromUtf8("device"));
        display = new QVBoxLayout();
        display->setObjectName(QString::fromUtf8("display"));
        jogador = new QHBoxLayout();
        jogador->setObjectName(QString::fromUtf8("jogador"));
        dados = new QVBoxLayout();
        dados->setObjectName(QString::fromUtf8("dados"));
        jogador_dados = new QHBoxLayout();
        jogador_dados->setObjectName(QString::fromUtf8("jogador_dados"));
        nome = new QLabel(jogo);
        nome->setObjectName(QString::fromUtf8("nome"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Elephant"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        nome->setFont(font2);
        nome->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        jogador_dados->addWidget(nome);

        nome_jogador = new QLabel(jogo);
        nome_jogador->setObjectName(QString::fromUtf8("nome_jogador"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Elephant"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setWeight(50);
        nome_jogador->setFont(font3);
        nome_jogador->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        jogador_dados->addWidget(nome_jogador);


        dados->addLayout(jogador_dados);

        jogo_dados = new QHBoxLayout();
        jogo_dados->setObjectName(QString::fromUtf8("jogo_dados"));
        lbl_palavra = new QLabel(jogo);
        lbl_palavra->setObjectName(QString::fromUtf8("lbl_palavra"));
        lbl_palavra->setEnabled(true);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Elephant"));
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        font4.setStrikeOut(false);
        lbl_palavra->setFont(font4);
        lbl_palavra->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        jogo_dados->addWidget(lbl_palavra);

        palavra_velada = new QLabel(jogo);
        palavra_velada->setObjectName(QString::fromUtf8("palavra_velada"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Gill Sans Ultra Bold Condensed"));
        font5.setPointSize(28);
        font5.setBold(false);
        font5.setWeight(50);
        palavra_velada->setFont(font5);
        palavra_velada->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        jogo_dados->addWidget(palavra_velada);


        dados->addLayout(jogo_dados);


        jogador->addLayout(dados);


        display->addLayout(jogador);

        btn_chutar = new QPushButton(jogo);
        btn_chutar->setObjectName(QString::fromUtf8("btn_chutar"));

        display->addWidget(btn_chutar);

        btn_novo = new QPushButton(jogo);
        btn_novo->setObjectName(QString::fromUtf8("btn_novo"));

        display->addWidget(btn_novo);

        ae = new QHBoxLayout();
        ae->setObjectName(QString::fromUtf8("ae"));
        btn_a = new QPushButton(jogo);
        btn_a->setObjectName(QString::fromUtf8("btn_a"));

        ae->addWidget(btn_a);

        btn_b = new QPushButton(jogo);
        btn_b->setObjectName(QString::fromUtf8("btn_b"));

        ae->addWidget(btn_b);

        btn_c = new QPushButton(jogo);
        btn_c->setObjectName(QString::fromUtf8("btn_c"));

        ae->addWidget(btn_c);

        btn_d = new QPushButton(jogo);
        btn_d->setObjectName(QString::fromUtf8("btn_d"));

        ae->addWidget(btn_d);

        btn_e = new QPushButton(jogo);
        btn_e->setObjectName(QString::fromUtf8("btn_e"));

        ae->addWidget(btn_e);


        display->addLayout(ae);


        device->addLayout(display);

        teclado = new QVBoxLayout();
        teclado->setObjectName(QString::fromUtf8("teclado"));
        fj = new QHBoxLayout();
        fj->setObjectName(QString::fromUtf8("fj"));
        btn_f = new QPushButton(jogo);
        btn_f->setObjectName(QString::fromUtf8("btn_f"));

        fj->addWidget(btn_f);

        btn_g = new QPushButton(jogo);
        btn_g->setObjectName(QString::fromUtf8("btn_g"));

        fj->addWidget(btn_g);

        btn_h = new QPushButton(jogo);
        btn_h->setObjectName(QString::fromUtf8("btn_h"));

        fj->addWidget(btn_h);

        btn_i = new QPushButton(jogo);
        btn_i->setObjectName(QString::fromUtf8("btn_i"));

        fj->addWidget(btn_i);

        btn_j = new QPushButton(jogo);
        btn_j->setObjectName(QString::fromUtf8("btn_j"));

        fj->addWidget(btn_j);


        teclado->addLayout(fj);

        ko = new QHBoxLayout();
        ko->setObjectName(QString::fromUtf8("ko"));
        btn_k = new QPushButton(jogo);
        btn_k->setObjectName(QString::fromUtf8("btn_k"));

        ko->addWidget(btn_k);

        btn_l = new QPushButton(jogo);
        btn_l->setObjectName(QString::fromUtf8("btn_l"));

        ko->addWidget(btn_l);

        btn_m = new QPushButton(jogo);
        btn_m->setObjectName(QString::fromUtf8("btn_m"));

        ko->addWidget(btn_m);

        btn_n = new QPushButton(jogo);
        btn_n->setObjectName(QString::fromUtf8("btn_n"));

        ko->addWidget(btn_n);

        btn_o = new QPushButton(jogo);
        btn_o->setObjectName(QString::fromUtf8("btn_o"));

        ko->addWidget(btn_o);


        teclado->addLayout(ko);

        pt = new QHBoxLayout();
        pt->setObjectName(QString::fromUtf8("pt"));
        btn_p = new QPushButton(jogo);
        btn_p->setObjectName(QString::fromUtf8("btn_p"));

        pt->addWidget(btn_p);

        btn_q = new QPushButton(jogo);
        btn_q->setObjectName(QString::fromUtf8("btn_q"));

        pt->addWidget(btn_q);

        btn_r = new QPushButton(jogo);
        btn_r->setObjectName(QString::fromUtf8("btn_r"));

        pt->addWidget(btn_r);

        btn_s = new QPushButton(jogo);
        btn_s->setObjectName(QString::fromUtf8("btn_s"));

        pt->addWidget(btn_s);

        btn_t = new QPushButton(jogo);
        btn_t->setObjectName(QString::fromUtf8("btn_t"));

        pt->addWidget(btn_t);


        teclado->addLayout(pt);

        uz = new QHBoxLayout();
        uz->setObjectName(QString::fromUtf8("uz"));
        btn_u = new QPushButton(jogo);
        btn_u->setObjectName(QString::fromUtf8("btn_u"));

        uz->addWidget(btn_u);

        btn_v = new QPushButton(jogo);
        btn_v->setObjectName(QString::fromUtf8("btn_v"));

        uz->addWidget(btn_v);

        btn_x = new QPushButton(jogo);
        btn_x->setObjectName(QString::fromUtf8("btn_x"));

        uz->addWidget(btn_x);

        btn_w = new QPushButton(jogo);
        btn_w->setObjectName(QString::fromUtf8("btn_w"));

        uz->addWidget(btn_w);

        btn_y = new QPushButton(jogo);
        btn_y->setObjectName(QString::fromUtf8("btn_y"));

        uz->addWidget(btn_y);

        btn_z = new QPushButton(jogo);
        btn_z->setObjectName(QString::fromUtf8("btn_z"));

        uz->addWidget(btn_z);


        teclado->addLayout(uz);


        device->addLayout(teclado);


        gridLayout->addLayout(device, 0, 0, 1, 1);

        MainWindow->setCentralWidget(jogo);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 20));
        menuMENU = new QMenu(menubar);
        menuMENU->setObjectName(QString::fromUtf8("menuMENU"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMENU->menuAction());
        menuMENU->addAction(actionRECORD);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRECORD->setText(QCoreApplication::translate("MainWindow", "RECORD", nullptr));
        nome->setText(QCoreApplication::translate("MainWindow", "JOGADOR:", nullptr));
        nome_jogador->setText(QString());
        lbl_palavra->setText(QCoreApplication::translate("MainWindow", "PALAVRA SECRETA:", nullptr));
        palavra_velada->setText(QString());
        btn_chutar->setText(QCoreApplication::translate("MainWindow", "CHUTAR", nullptr));
        btn_novo->setText(QCoreApplication::translate("MainWindow", "NOVO", nullptr));
        btn_a->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        btn_b->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        btn_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_d->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        btn_e->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        btn_f->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        btn_g->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        btn_h->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        btn_i->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        btn_j->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        btn_k->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        btn_l->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        btn_m->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        btn_n->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        btn_o->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        btn_p->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        btn_q->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        btn_r->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        btn_s->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        btn_t->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        btn_u->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        btn_v->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        btn_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_w->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        btn_y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        btn_z->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        menuMENU->setTitle(QCoreApplication::translate("MainWindow", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
