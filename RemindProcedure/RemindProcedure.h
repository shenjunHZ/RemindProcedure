#pragma once

#include <QtWidgets/QWidget>
#include <QtCore/QSharedMemory>
#include "ui_RemindProcedure.h"

#include "Dialog/Dialog.h"

class RemindProcedure : public DSGUI::DSDialog
{
    Q_OBJECT

public:
    RemindProcedure(QWidget *parent = Q_NULLPTR);

    bool isRunning();

private:
    void initModule();

private:
    Ui::RemindProcedureClass ui;
    QSharedMemory* m_pSharedMemory;
};
