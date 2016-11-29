/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFormClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidgetPacketLogList;
    QCheckBox *checkBoxLogRecvPacket;
    QCheckBox *checkBoxLogSendPacket;
    QPushButton *pushButtonSendPacket;
    QLineEdit *lineEditSendPacketText;
    QTreeWidget *treeWidgetModifyHeaderList;

    void setupUi(QMainWindow *MainFormClass)
    {
        if (MainFormClass->objectName().isEmpty())
            MainFormClass->setObjectName(QString::fromUtf8("MainFormClass"));
        MainFormClass->resize(579, 379);
        MainFormClass->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background:white;\n"
"}\n"
"\n"
"QTabWidget::pane\n"
"{\n"
"background:white;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QTabWidget#tabwMain::pane\n"
"{\n"
"background:white;\n"
"border:none;\n"
"border-top:1px solid gray;\n"
"border-bottom:1px solid gray;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"border:1px solid gray;\n"
"margin-top:5px;\n"
"}\n"
"\n"
"QGroupBox::title\n"
"{\n"
"color:blue;\n"
"top:-7px;\n"
"left:5px;\n"
"}\n"
"\n"
"QCheckBox:checked\n"
"{\n"
"color:green;\n"
"}"));
        centralWidget = new QWidget(MainFormClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidgetPacketLogList = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetPacketLogList->setHeaderItem(__qtreewidgetitem);
        treeWidgetPacketLogList->setObjectName(QString::fromUtf8("treeWidgetPacketLogList"));
        treeWidgetPacketLogList->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidgetPacketLogList->setIndentation(0);
        treeWidgetPacketLogList->setUniformRowHeights(true);
        treeWidgetPacketLogList->setHeaderHidden(true);

        gridLayout->addWidget(treeWidgetPacketLogList, 0, 0, 4, 3);

        checkBoxLogRecvPacket = new QCheckBox(centralWidget);
        checkBoxLogRecvPacket->setObjectName(QString::fromUtf8("checkBoxLogRecvPacket"));

        gridLayout->addWidget(checkBoxLogRecvPacket, 1, 3, 1, 1);

        checkBoxLogSendPacket = new QCheckBox(centralWidget);
        checkBoxLogSendPacket->setObjectName(QString::fromUtf8("checkBoxLogSendPacket"));

        gridLayout->addWidget(checkBoxLogSendPacket, 0, 3, 1, 1);

        pushButtonSendPacket = new QPushButton(centralWidget);
        pushButtonSendPacket->setObjectName(QString::fromUtf8("pushButtonSendPacket"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSendPacket->sizePolicy().hasHeightForWidth());
        pushButtonSendPacket->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonSendPacket, 4, 3, 1, 1);

        lineEditSendPacketText = new QLineEdit(centralWidget);
        lineEditSendPacketText->setObjectName(QString::fromUtf8("lineEditSendPacketText"));

        gridLayout->addWidget(lineEditSendPacketText, 4, 0, 1, 3);

        treeWidgetModifyHeaderList = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeWidgetModifyHeaderList->setHeaderItem(__qtreewidgetitem1);
        treeWidgetModifyHeaderList->setObjectName(QString::fromUtf8("treeWidgetModifyHeaderList"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidgetModifyHeaderList->sizePolicy().hasHeightForWidth());
        treeWidgetModifyHeaderList->setSizePolicy(sizePolicy1);
        treeWidgetModifyHeaderList->setMaximumSize(QSize(70, 16777215));
        treeWidgetModifyHeaderList->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidgetModifyHeaderList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidgetModifyHeaderList->setIndentation(0);
        treeWidgetModifyHeaderList->setUniformRowHeights(true);
        treeWidgetModifyHeaderList->setHeaderHidden(true);

        gridLayout->addWidget(treeWidgetModifyHeaderList, 2, 3, 2, 1);

        MainFormClass->setCentralWidget(centralWidget);

        retranslateUi(MainFormClass);
        QObject::connect(checkBoxLogSendPacket, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxLogRecvPacket, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(pushButtonSendPacket, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));

        QMetaObject::connectSlotsByName(MainFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFormClass)
    {
        MainFormClass->setWindowTitle(QApplication::translate("MainFormClass", "SimplePacketEditor", 0, QApplication::UnicodeUTF8));
        checkBoxLogRecvPacket->setText(QApplication::translate("MainFormClass", "Log Recv", 0, QApplication::UnicodeUTF8));
        checkBoxLogSendPacket->setText(QApplication::translate("MainFormClass", "Log Send", 0, QApplication::UnicodeUTF8));
        pushButtonSendPacket->setText(QApplication::translate("MainFormClass", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainFormClass: public Ui_MainFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
