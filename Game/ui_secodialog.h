/********************************************************************************
** Form generated from reading UI file 'secodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECODIALOG_H
#define UI_SECODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SecoDialog
{
public:

    void setupUi(QDialog *SecoDialog)
    {
        if (SecoDialog->objectName().isEmpty())
            SecoDialog->setObjectName(QStringLiteral("SecoDialog"));
        SecoDialog->resize(400, 300);

        retranslateUi(SecoDialog);

        QMetaObject::connectSlotsByName(SecoDialog);
    } // setupUi

    void retranslateUi(QDialog *SecoDialog)
    {
        SecoDialog->setWindowTitle(QApplication::translate("SecoDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class SecoDialog: public Ui_SecoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECODIALOG_H
