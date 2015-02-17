/********************************************************************************
** Form generated from reading UI file 'trighelper.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIGHELPER_H
#define UI_TRIGHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrigHelper
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
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
    QPushButton *calculate_button;

    void setupUi(QWidget *TrigHelper)
    {
        if (TrigHelper->objectName().isEmpty())
            TrigHelper->setObjectName(QStringLiteral("TrigHelper"));
        TrigHelper->resize(140, 314);
        layoutWidget = new QWidget(TrigHelper);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 121, 297));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        a_display = new QLineEdit(layoutWidget);
        a_display->setObjectName(QStringLiteral("a_display"));

        verticalLayout->addWidget(a_display);

        b_display = new QLineEdit(layoutWidget);
        b_display->setObjectName(QStringLiteral("b_display"));

        verticalLayout->addWidget(b_display);

        c_display = new QLineEdit(layoutWidget);
        c_display->setObjectName(QStringLiteral("c_display"));

        verticalLayout->addWidget(c_display);

        a1_display = new QLineEdit(layoutWidget);
        a1_display->setObjectName(QStringLiteral("a1_display"));

        verticalLayout->addWidget(a1_display);

        b1_display = new QLineEdit(layoutWidget);
        b1_display->setObjectName(QStringLiteral("b1_display"));

        verticalLayout->addWidget(b1_display);

        h_display = new QLineEdit(layoutWidget);
        h_display->setObjectName(QStringLiteral("h_display"));

        verticalLayout->addWidget(h_display);

        alpha_display = new QLineEdit(layoutWidget);
        alpha_display->setObjectName(QStringLiteral("alpha_display"));

        verticalLayout->addWidget(alpha_display);

        beta_display = new QLineEdit(layoutWidget);
        beta_display->setObjectName(QStringLiteral("beta_display"));

        verticalLayout->addWidget(beta_display);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        calculate_button = new QPushButton(layoutWidget);
        calculate_button->setObjectName(QStringLiteral("calculate_button"));

        verticalLayout_3->addWidget(calculate_button);


        retranslateUi(TrigHelper);

        QMetaObject::connectSlotsByName(TrigHelper);
    } // setupUi

    void retranslateUi(QWidget *TrigHelper)
    {
        TrigHelper->setWindowTitle(QApplication::translate("TrigHelper", "TrigHelper", 0));
        label->setText(QApplication::translate("TrigHelper", "a:", 0));
        label_2->setText(QApplication::translate("TrigHelper", "b:", 0));
        label_3->setText(QApplication::translate("TrigHelper", "c:", 0));
        label_4->setText(QApplication::translate("TrigHelper", "a1:", 0));
        label_5->setText(QApplication::translate("TrigHelper", "b1:", 0));
        label_6->setText(QApplication::translate("TrigHelper", "h:", 0));
        label_7->setText(QApplication::translate("TrigHelper", "alpha:", 0));
        label_8->setText(QApplication::translate("TrigHelper", "beta:", 0));
        calculate_button->setText(QApplication::translate("TrigHelper", "Calculate", 0));
    } // retranslateUi

};

namespace Ui {
    class TrigHelper: public Ui_TrigHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIGHELPER_H
