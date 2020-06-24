#include "resultado.h"
#include "ui_resultado.h"
Resultado::Resultado(QWidget *parent) :QDialog(parent),ui(new Ui::Resultado)
{ ui->setupUi(this); }

Resultado::~Resultado() { delete ui; }

void Resultado::set_resultado(bool r)
{
    QMovie* movie;
    if (r) {
        movie = new QMovie("feliz" +QString::number(rand() % 10 + 1) + ".gif");
        ui->label->setMovie(movie);
        movie->start();
        ui->label_2->setText("PARABENS, VC GANHOU!!");
    }
    else {
        movie = new QMovie("triste" +QString::number(rand() % 10 + 1) + ".gif");
        ui->label->setMovie(movie);
        movie->start();
        ui->label_2->setText("PARABENS, VC PERDEU!!");
    }
}
