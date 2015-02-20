/********************************************************************************
** Form generated from reading UI file 'trighelper.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIGHELPER_H
#define UI_TRIGHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrigHelper
{
public:
    QPushButton *calculate_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QLineEdit *a_display;
    QLineEdit *b_display;
    QLineEdit *c_display;
    QLineEdit *a1_display;
    QLineEdit *b1_display;
    QLineEdit *h_display;
    QLineEdit *alpha_display;
    QLineEdit *beta_display;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *S_display;
    QLineEdit *P_display;

    void setupUi(QWidget *TrigHelper)
    {
        if (TrigHelper->objectName().isEmpty())
            TrigHelper->setObjectName(QString::fromUtf8("TrigHelper"));
        TrigHelper->resize(282, 321);
        calculate_button = new QPushButton(TrigHelper);
        calculate_button->setObjectName(QString::fromUtf8("calculate_button"));
        calculate_button->setGeometry(QRect(11, 283, 261, 27));
        widget = new QWidget(TrigHelper);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 11, 131, 261));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        a_display = new QLineEdit(widget);
        a_display->setObjectName(QString::fromUtf8("a_display"));

        verticalLayout->addWidget(a_display);

        b_display = new QLineEdit(widget);
        b_display->setObjectName(QString::fromUtf8("b_display"));

        verticalLayout->addWidget(b_display);

        c_display = new QLineEdit(widget);
        c_display->setObjectName(QString::fromUtf8("c_display"));

        verticalLayout->addWidget(c_display);

        a1_display = new QLineEdit(widget);
        a1_display->setObjectName(QString::fromUtf8("a1_display"));

        verticalLayout->addWidget(a1_display);

        b1_display = new QLineEdit(widget);
        b1_display->setObjectName(QString::fromUtf8("b1_display"));

        verticalLayout->addWidget(b1_display);

        h_display = new QLineEdit(widget);
        h_display->setObjectName(QString::fromUtf8("h_display"));

        verticalLayout->addWidget(h_display);

        alpha_display = new QLineEdit(widget);
        alpha_display->setObjectName(QString::fromUtf8("alpha_display"));

        verticalLayout->addWidget(alpha_display);

        beta_display = new QLineEdit(widget);
        beta_display->setObjectName(QString::fromUtf8("beta_display"));

        verticalLayout->addWidget(beta_display);


        horizontalLayout->addLayout(verticalLayout);

        widget1 = new QWidget(TrigHelper);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(150, 10, 121, 61));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        S_display = new QLineEdit(widget1);
        S_display->setObjectName(QString::fromUtf8("S_display"));

        verticalLayout_4->addWidget(S_display);

        P_display = new QLineEdit(widget1);
        P_display->setObjectName(QString::fromUtf8("P_display"));

        verticalLayout_4->addWidget(P_display);


        horizontalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(TrigHelper);

        QMetaObject::connectSlotsByName(TrigHelper);
    } // setupUi

    void retranslateUi(QWidget *TrigHelper)
    {
        TrigHelper->setWindowTitle(QApplication::translate("TrigHelper", "TrigHelper", 0, QApplication::UnicodeUTF8));
        calculate_button->setText(QApplication::translate("TrigHelper", "Calculate", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TrigHelper", "a:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TrigHelper", "b:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TrigHelper", "c:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TrigHelper", "a1:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TrigHelper", "b1:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TrigHelper", "h:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TrigHelper", "alpha:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TrigHelper", "beta:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TrigHelper", "S:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TrigHelper", "P:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TrigHelper: public Ui_TrigHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIGHELPER_H
