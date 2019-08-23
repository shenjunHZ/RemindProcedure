#include "RemindProcedure.hpp"
#include "commonControl.hpp"
#include "Tools/Dir.h"
#include "Tools/File.h"
#include "MessageNotify/MessageNotify.h"
#include <QtWidgets/QApplication>
#include <QtGui/QScreen>
#include <QtCore/QFile>
#include <QtCore/QCoreApplication>
#include <QtCore/QDir>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // app
    QString strAppName = "Remind Procedure";
    app.setOrganizationName(strAppName);
    app.setApplicationName(strAppName);
    app.setWindowIcon(QIcon("./beetle.ico"));
    QFont font("Arial Black");
    QScreen* screen = app.primaryScreen();
    qreal dpi = screen->logicalDotsPerInch() / 96;
    font.setPixelSize(14 * dpi);
    app.setFont(font);

    // path
    QString strCurrPath = QCoreApplication::applicationDirPath();
    QDir::setCurrent(strCurrPath);
    DSGUI::DSDir::SetCurrentPath(strCurrPath);

    // notify
    QString strNotifyQmPath = QCoreApplication::applicationDirPath().append("/Language/Language_en/DSMessageNotify_en.qm");
    QString strLang("English");
    DSGUI::DSMessageNotify::Instance().SetParam(QStringList() << strNotifyQmPath, QStringList() << "DustyBlue", strLang);
    DSGUI::DSMessageNotify::Instance().StartMessageProcess();
    DSGUI::DSMessageNotify::Instance().SetMessageNotifyTitle(QObject::tr("Notify"));

    // style
    QString strStyle = "";
    QFile fpStyle(commonSpace::GetSkinPath("public", "style.qss"));
    if(fpStyle.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        strStyle = fpStyle.readAll();
        fpStyle.close();
    }
    QString strCSSFilePath = commonSpace::GetSkinPath("") + QString("/DSGUI/CSS/");
    QStringList strList;
    strList.push_back("*.CSS");
    QStringList strFileList = QDir(strCSSFilePath).entryList(strList, QDir::Files);
    qApp->setStyleSheet(strStyle + DSGUI::DSFile::ReadAll(strFileList, strCSSFilePath));

    RemindProcedure w;
    if (w.isRunning())
    {
        DSGUI::DSMessageNotify::Instance().AddTextNotification(QObject::tr("Application is running!"));
        return 0;
    }
    w.exec();
    return app.exec();
}
