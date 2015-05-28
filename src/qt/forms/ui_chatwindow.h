/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QListView *userView;
    QPushButton *disconnect;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_2;
    QLineEdit *editPseudo;
    QLabel *label_5;
    QPushButton *buttonConnect;
    QLabel *label_10;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(904, 599);
        ChatWindowClass->setStyleSheet(QString::fromUtf8("background:transparent; color: black;\n"
""));
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        gridLayout = new QGridLayout(ChatWindowClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, -1, -1, -1);
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(0, 0, 891, 591));
        splitter->setStyleSheet(QString::fromUtf8(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(0, 0, 751, 477));
        tab->setStyleSheet(QString::fromUtf8("background:transparent;"));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab->addTab(tab_5, QString());
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 400, 571, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));
        userView = new QListView(splitter);
        userView->setObjectName(QString::fromUtf8("userView"));
        userView->setGeometry(QRect(540, 36, 181, 328));
        userView->setMinimumSize(QSize(0, 300));
        userView->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(630, 400, 71, 28));
        disconnect->setStyleSheet(QString::fromUtf8("background:transparent; color: black; border: 1px solid black;"));
        tab->raise();
        lineEdit->raise();
        userView->raise();
        disconnect->raise();
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QString::fromUtf8("hide3"));
        hide3->setGeometry(QRect(0, 0, 841, 541));
        hide3->setStyleSheet(QString::fromUtf8("font-family:Proxima Nova Rg;background:transparent; "));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 6, 731, 41));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QString::fromUtf8("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(hide3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 105, 321, 211));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent; color: black;"));
        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QString::fromUtf8("editPseudo"));
        editPseudo->setGeometry(QRect(470, 192, 151, 22));
        editPseudo->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color: rgb(0, 170, 0);"));
        label_5 = new QLabel(hide3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 193, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("color: black;background:transparent;"));
        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setGeometry(QRect(470, 236, 151, 41));
        buttonConnect->setStyleSheet(QString::fromUtf8("border-radius:40px;border:1px solid grey;background:transparent;\n"
"color:black;"));
        label_10 = new QLabel(hide3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(380, 137, 161, 21));

        gridLayout->addWidget(widget_2, 0, 0, 1, 1);


        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", 0, QApplication::UnicodeUTF8));
        disconnect->setText(QApplication::translate("ChatWindowClass", "Disconnect", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" color:#000000;\">A few IRC commands :</span></p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">/JOIN #channel  - </span><span style=\" color:#262626;\">Join a channel</span></li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">/NICK nickname  - </span><span style=\" color:#262626;\">Change nickname</span></li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">/PRIVMSG nickname message  - </span><span style=\" color:#262626;\">Send PM</span></li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-in"
                        "dent:0px;\"><span style=\" color:#000000;\">If userlist gets buggy, switch tabs to fix</span></li></ul></body></html>", 0, QApplication::UnicodeUTF8));
        editPseudo->setText(QString());
        label_5->setText(QApplication::translate("ChatWindowClass", "Nickname", 0, QApplication::UnicodeUTF8));
        buttonConnect->setText(QApplication::translate("ChatWindowClass", "Connect to IRC", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-size:12pt;\">Connect to IRC :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
