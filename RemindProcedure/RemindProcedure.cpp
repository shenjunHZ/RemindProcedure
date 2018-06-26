#include "RemindProcedure.h"
#include <QtCore/QRect>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDesktopWidget>
#include <QtCore/QSize>
#include <QtWidgets/QWidget>

RemindProcedure::RemindProcedure(QWidget *parent)
    : DSGUI::DSDialog(parent, CloseButtonHint)
    , m_pSharedMemory(nullptr)
{
    ui.setupUi(this->GetCentralWidget());
    m_pSharedMemory = new QSharedMemory("Remaind Procedure");

    initModule();
}

bool RemindProcedure::isRunning()
{
    volatile int i = 2;
    while (i--)
    {
        if (m_pSharedMemory->attach(QSharedMemory::ReadOnly))
        {
            m_pSharedMemory->detach();
        }
    }
    if (!m_pSharedMemory->create(1))
    {
        return true;
    }
    return false;
}

void RemindProcedure::initModule()
{
    this->SetCloseAnimaEnable(true);
    this->SetOpenDoubleClickTitle(false);
    this->SetTitle(QObject::tr("Remind Procedure"));

    QSize wndSize = this->size();
    QRect desktopRec = QApplication::desktop()->availableGeometry(this);
    int wDesktop = desktopRec.width();
    int hDesktop = desktopRec.height();
    int x = (wDesktop - wndSize.width()) / 2;
    int y = (hDesktop - wndSize.height()) / 2;
    this->setGeometry(QRect(QPoint(x, y), this->size()));
}
