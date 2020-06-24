#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qpushbutton.h>
#include <QInputDialog>
#include "QLineEdit"
#include <QMessageBox>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bool ok;
    QString nome = QInputDialog::getText(this,"JOGA DA FORCA","Digite o nome",
                                     QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
    j = new Jogo(nome.toStdString());
    QString str_nome,nome_jogador,palavra_velada, msg = "";
    if (ok && nome != "") {
            msg = "O JOGO COMEÇOU!";
            ui->nome->setText("JOGADOR: " + QString::fromStdString(j->get_nome_jogador()));
            palavra_velada = QString::fromStdString(j->get_palavra_velada());
            ui->palavra_velada->setText(palavra_velada);
            desabilitar(false);
    }
    else {
        msg = "É PRECISO\nINFORMAR O \nNOME DO JOGADOR!";
        nome_jogador = "";
        desabilitar(true);
    }
    QMessageBox::information(this,"",msg);

}

MainWindow::~MainWindow() {delete ui;}

void MainWindow::desabilitar(bool c)
{
    ui->btn_a->setDisabled(c);
    ui->btn_b->setDisabled(c);
    ui->btn_c->setDisabled(c);
    ui->btn_d->setDisabled(c);
    ui->btn_e->setDisabled(c);
    ui->btn_f->setDisabled(c);
    ui->btn_g->setDisabled(c);
    ui->btn_h->setDisabled(c);
    ui->btn_i->setDisabled(c);
    ui->btn_j->setDisabled(c);
    ui->btn_k->setDisabled(c);
    ui->btn_l->setDisabled(c);
    ui->btn_m->setDisabled(c);
    ui->btn_n->setDisabled(c);
    ui->btn_o->setDisabled(c);
    ui->btn_p->setDisabled(c);
    ui->btn_q->setDisabled(c);
    ui->btn_r->setDisabled(c);
    ui->btn_s->setDisabled(c);
    ui->btn_t->setDisabled(c);
    ui->btn_u->setDisabled(c);
    ui->btn_v->setDisabled(c);
    ui->btn_x->setDisabled(c);
    ui->btn_w->setDisabled(c);
    ui->btn_y->setDisabled(c);
    ui->btn_z->setDisabled(c);
    ui->btn_chutar->setDisabled(c);
}
void MainWindow::on_btn_a_clicked()
{
    ui->btn_a->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('a')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                    j->record();
                }
                else {
                    r.set_resultado(false);
                }
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
        j->record();
    }
}

void MainWindow::on_btn_b_clicked()
{
    ui->btn_b->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('b')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_c_clicked()
{
    ui->btn_c->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('c')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_d_clicked()
{
    ui->btn_d->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('d')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_e_clicked()
{
    ui->btn_e->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('e')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_f_clicked()
{
    ui->btn_f->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('f')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_g_clicked()
{
    ui->btn_g->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('g')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_h_clicked()
{
    ui->btn_h->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('h')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_i_clicked()
{
    ui->btn_i->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('i')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_j_clicked()
{
    ui->btn_j->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('j')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_k_clicked()
{
    ui->btn_k->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('k')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_l_clicked()
{
    ui->btn_l->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('l')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_m_clicked()
{
    ui->btn_m->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('m')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_n_clicked()
{
    ui->btn_n->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('n')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_o_clicked()
{
    ui->btn_o->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('o')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_p_clicked()
{
    ui->btn_p->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('p')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_q_clicked()
{
    ui->btn_q->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('q')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_r_clicked()
{
    ui->btn_r->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('r')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_s_clicked()
{
    ui->btn_s->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('s')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_t_clicked()
{
    ui->btn_t->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('t')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_u_clicked()
{
    ui->btn_u->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('u')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_v_clicked()
{
    ui->btn_v->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('v')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_x_clicked()
{
    ui->btn_x->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('x')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_w_clicked()
{
    ui->btn_w->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('w')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}
void MainWindow::on_btn_y_clicked()
{
    ui->btn_y->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('y')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                }
                else {
                    r.set_resultado(false);
                }
                j->record();
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);
    }
}

void MainWindow::on_btn_z_clicked()
{
    ui->btn_z->setDisabled(true);
    Resultado r;
    if (j->advinhou() == false) {
        if (j->get_tentativas()) {
            if (j->acertou('z')) {
                QMessageBox::information(this,"RESPOSTA","CERTA RESTOSTA!");
            }
            else {
                QMessageBox::information(this,"RESPOSTA","ERRADO!");
            }
        }
        else {
            bool ok;
            QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                                 QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
            if (ok) {
                if (j->acertou(chute.toStdString())) {
                    r.set_resultado(true);
                    j->record();
                }
                else {
                    r.set_resultado(false);
                }
            }
            else {
               r.set_resultado(false);
            }
            r.exec();
            desabilitar(true);
        }
        ui->palavra_velada->setText(QString::fromStdString(j->get_palavra_velada()));
    }
    else {
        r.set_resultado(true);

    }
}

void MainWindow::on_btn_chutar_clicked()
{
    bool ok;
    QString chute = QInputDialog::getText(this,"JOGA DA FORCA","ESCREVA A PALAVRA",
                                         QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
    Resultado r;
    if (ok) {
        if (j->acertou(chute.toStdString())) {
            r.set_resultado(true);
        }
        else {
            r.set_resultado(false);
        }
        j->record();
    }
    else {
       r.set_resultado(false);
    }
    ui->palavra_velada->setText(QString::fromStdString(j->get_palavra()));
    r.exec();
    desabilitar(true);
}

void MainWindow::on_btn_novo_clicked()
{

    if (j) {
        delete j;
    }
    bool ok;
    QString nome = QInputDialog::getText(this,"JOGA DA FORCA","Digite o nome",
                                         QLineEdit::Normal,"",&ok,Qt::WindowTitleHint);
    j = new Jogo(nome.toStdString());
    QString str_nome,nome_jogador,palavra_velada, msg = "";
    if (ok && nome != "") {
            msg = "O JOGO COMEÇOU!";
            ui->nome->setText("JOGADOR: " + QString::fromStdString(j->get_nome_jogador()));
            palavra_velada = QString::fromStdString(j->get_palavra_velada());
            ui->palavra_velada->setText(palavra_velada);
            desabilitar(false);
    }
    else {
        msg = "É PRECISO\nINFORMAR O \nNOME DO JOGADOR!";
        nome_jogador = "";
        desabilitar(true);
    }
    QMessageBox::information(this,"",msg);
}

void MainWindow::on_actionRECORD_triggered()
{
    QMessageBox::information(this,"RECORDISTAS",
                             QString::fromStdString(j->get_recordistas()));
}
