/********************************************************************************
** Form generated from reading UI file 'resultado.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADO_H
#define UI_RESULTADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Resultado
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Resultado)
    {
        if (Resultado->objectName().isEmpty())
            Resultado->setObjectName(QString::fromUtf8("Resultado"));
        Resultado->resize(351, 525);
        label = new QLabel(Resultado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 331, 411));
        label->setScaledContents(true);
        label_2 = new QLabel(Resultado);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 430, 371, 81));

        retranslateUi(Resultado);

        QMetaObject::connectSlotsByName(Resultado);
    } // setupUi

    void retranslateUi(QDialog *Resultado)
    {
        Resultado->setWindowTitle(QCoreApplication::translate("Resultado", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Resultado: public Ui_Resultado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADO_H
