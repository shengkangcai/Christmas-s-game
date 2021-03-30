/********************************************************************************
** Form generated from reading UI file 'udp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP_H
#define UI_UDP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_udp
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButtonTalk;
    QLabel *label_3;
    QPushButton *pushButtonTalk_2;
    QLabel *label;
    QLineEdit *lineEditIp;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QLabel *label_6;
    QPushButton *pushButtonCMysql;
    QWidget *page_2;
    QTextEdit *textEdit_2;
    QListWidget *listWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButtonAdd;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButtonZi;
    QPushButton *pushButtonColor;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QWidget *page_3;
    QLineEdit *lineEditIpName;
    QPushButton *pushButtonSure;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButtonBack2;
    QLabel *label_7;

    void setupUi(QWidget *udp)
    {
        if (udp->objectName().isEmpty())
            udp->setObjectName(QString::fromUtf8("udp"));
        udp->resize(780, 543);
        stackedWidget = new QStackedWidget(udp);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 781, 541));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 217, 255);"));
        pushButtonTalk = new QPushButton(page);
        pushButtonTalk->setObjectName(QString::fromUtf8("pushButtonTalk"));
        pushButtonTalk->setGeometry(QRect(260, 280, 81, 31));
        pushButtonTalk->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(52, 153, 24, 207));\n"
"\n"
""));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 140, 1111, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 12pt \"Arial Black\";\n"
"color: rgb(85, 85, 255);"));
        pushButtonTalk_2 = new QPushButton(page);
        pushButtonTalk_2->setObjectName(QString::fromUtf8("pushButtonTalk_2"));
        pushButtonTalk_2->setGeometry(QRect(370, 280, 81, 31));
        pushButtonTalk_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(52, 153, 24, 207));\n"
""));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(261, 200, 52, 22));
        label->setStyleSheet(QString::fromUtf8("font: 87 11pt \"Arial Black\";"));
        lineEditIp = new QLineEdit(page);
        lineEditIp->setObjectName(QString::fromUtf8("lineEditIp"));
        lineEditIp->setGeometry(QRect(319, 201, 133, 20));
        lineEditIp->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 180, 255);"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 230, 54, 23));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 12pt \"Arial Black\";"));
        lineEditPort = new QLineEdit(page);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setGeometry(QRect(320, 231, 133, 20));
        lineEditPort->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 180, 255);"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(700, 520, 121, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 9pt \"Arial\";"));
        pushButtonCMysql = new QPushButton(page);
        pushButtonCMysql->setObjectName(QString::fromUtf8("pushButtonCMysql"));
        pushButtonCMysql->setGeometry(QRect(260, 340, 191, 31));
        pushButtonCMysql->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(52, 153, 24, 207));\n"
"\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        textEdit_2 = new QTextEdit(page_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(240, 390, 541, 161));
        textEdit_2->setUndoRedoEnabled(true);
        listWidget = new QListWidget(page_2);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(126, 123, 185, 255));
        brush1.setStyle(Qt::SolidPattern);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 241, 551));
        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(240, 0, 541, 371));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        textEdit->setFont(font1);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setTabStopDistance(80.000000000000000);
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 500, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 68, 139);\n"
"color: rgb(255, 255, 255);"));
        pushButtonAdd = new QPushButton(page_2);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(150, 510, 75, 23));
        pushButtonAdd->setStyleSheet(QString::fromUtf8("font: 87 11pt \"Arial Black\";\n"
"color: rgb(0, 85, 127);\n"
"font: 87 11pt \"Arial\";\n"
"color: rgb(0, 85, 127);"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 479, 75, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 87 11pt \"Arial Black\";\n"
"color: rgb(0, 85, 127);\n"
"font: 87 11pt \"Arial\";\n"
"color: rgb(0, 85, 127);\n"
""));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 370, 541, 21));
        pushButtonZi = new QPushButton(page_2);
        pushButtonZi->setObjectName(QString::fromUtf8("pushButtonZi"));
        pushButtonZi->setGeometry(QRect(240, 370, 31, 21));
        pushButtonZi->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial\";\n"
"text-decoration: underline;\n"
"font: 87 9pt \"Arial\";"));
        pushButtonColor = new QPushButton(page_2);
        pushButtonColor->setObjectName(QString::fromUtf8("pushButtonColor"));
        pushButtonColor->setGeometry(QRect(280, 370, 41, 21));
        pushButtonColor->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial\";\n"
"font: 9pt \"Arial\";\n"
"text-decoration: underline;"));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 480, 77, 56));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 219, 255);"));
        lineEditIpName = new QLineEdit(page_3);
        lineEditIpName->setObjectName(QString::fromUtf8("lineEditIpName"));
        lineEditIpName->setGeometry(QRect(319, 191, 133, 20));
        lineEditIpName->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 180, 255);"));
        pushButtonSure = new QPushButton(page_3);
        pushButtonSure->setObjectName(QString::fromUtf8("pushButtonSure"));
        pushButtonSure->setGeometry(QRect(260, 240, 71, 31));
        pushButtonSure->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(52, 153, 24, 207));\n"
""));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(261, 190, 52, 22));
        label_4->setStyleSheet(QString::fromUtf8("font: 87 11pt \"Arial Black\";"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 130, 191, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 87 12pt \"Arial Black\";\n"
"color: rgb(85, 85, 255);"));
        pushButtonBack2 = new QPushButton(page_3);
        pushButtonBack2->setObjectName(QString::fromUtf8("pushButtonBack2"));
        pushButtonBack2->setGeometry(QRect(380, 240, 71, 31));
        pushButtonBack2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(52, 153, 24, 207));\n"
""));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(700, 520, 121, 21));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 9pt \"Arial\";"));
        stackedWidget->addWidget(page_3);

        retranslateUi(udp);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(udp);
    } // setupUi

    void retranslateUi(QWidget *udp)
    {
        udp->setWindowTitle(QApplication::translate("udp", "udp", nullptr));
        pushButtonTalk->setText(QApplication::translate("udp", "\345\217\221\346\266\210\346\201\257", nullptr));
        label_3->setText(QApplication::translate("udp", "\350\257\267\350\276\223\345\205\245\345\245\275\345\217\213\347\232\204Ip/Port", nullptr));
        pushButtonTalk_2->setText(QApplication::translate("udp", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("udp", "IP\357\274\232    ", nullptr));
        label_2->setText(QApplication::translate("udp", "Port\357\274\232", nullptr));
        label_6->setText(QApplication::translate("udp", "\345\210\233\344\275\234\357\274\232\350\224\241\350\203\234\345\272\267", nullptr));
        pushButtonCMysql->setText(QApplication::translate("udp", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223(\345\202\250\345\255\230\346\225\260\346\215\256)", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("udp", "\350\201\212\345\244\251\345\210\227\350\241\250", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        textEdit->setHtml(QApplication::translate("udp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("udp", "\345\217\221\351\200\201", nullptr));
        pushButtonAdd->setText(QApplication::translate("udp", "\346\267\273\345\212\240\350\201\212\345\244\251", nullptr));
        pushButton_2->setText(QApplication::translate("udp", "\345\245\275\345\217\213\345\244\207\346\263\250", nullptr));
        pushButtonZi->setText(QApplication::translate("udp", "A", nullptr));
        pushButtonColor->setText(QApplication::translate("udp", "Color", nullptr));
        pushButtonSure->setText(QApplication::translate("udp", "\347\241\256\345\256\232", nullptr));
        label_4->setText(QApplication::translate("udp", "\345\244\207\346\263\250\357\274\232    ", nullptr));
        label_5->setText(QApplication::translate("udp", "\350\257\267\350\276\223\345\205\245\345\245\275\345\217\213\345\244\207\346\263\250", nullptr));
        pushButtonBack2->setText(QApplication::translate("udp", "\350\277\224\345\233\236", nullptr));
        label_7->setText(QApplication::translate("udp", "\345\210\233\344\275\234\357\274\232\350\224\241\350\203\234\345\272\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class udp: public Ui_udp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_H
