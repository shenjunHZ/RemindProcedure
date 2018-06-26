/********************************************************************************
** Form generated from reading UI file 'RemindProcedure.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDPROCEDURE_H
#define UI_REMINDPROCEDURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "LineEdit/LineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_RemindProcedureClass
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    DSGUI::DSLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *RemindProcedureClass)
    {
        if (RemindProcedureClass->objectName().isEmpty())
            RemindProcedureClass->setObjectName(QStringLiteral("RemindProcedureClass"));
        RemindProcedureClass->resize(480, 200);
        RemindProcedureClass->setMinimumSize(QSize(480, 200));
        RemindProcedureClass->setMaximumSize(QSize(480, 200));
        verticalLayout = new QVBoxLayout(RemindProcedureClass);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalSpacer = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new DSGUI::DSLineEdit(RemindProcedureClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setMinimumSize(QSize(460, 80));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(RemindProcedureClass);

        QMetaObject::connectSlotsByName(RemindProcedureClass);
    } // setupUi

    void retranslateUi(QWidget *RemindProcedureClass)
    {
        RemindProcedureClass->setWindowTitle(QApplication::translate("RemindProcedureClass", "RemindProcedure", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("RemindProcedureClass", "Have a rest and drink some water!!!!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemindProcedureClass: public Ui_RemindProcedureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDPROCEDURE_H
