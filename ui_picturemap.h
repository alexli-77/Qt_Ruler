/********************************************************************************
** Form generated from reading UI file 'picturemap.ui'
**
** Created: Thu Dec 11 10:21:04 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREMAP_H
#define UI_PICTUREMAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_picturemap
{
public:
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *picturemap)
    {
        if (picturemap->objectName().isEmpty())
            picturemap->setObjectName(QString::fromUtf8("picturemap"));
        picturemap->resize(640, 480);
        label_5 = new QLabel(picturemap);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 170, 66, 17));
        pushButton = new QPushButton(picturemap);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(454, 291, 98, 27));
        label_6 = new QLabel(picturemap);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 240, 66, 17));
        layoutWidget = new QWidget(picturemap);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 320, 231, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        layoutWidget1 = new QWidget(picturemap);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(309, 320, 241, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_2->addWidget(lineEdit_4);


        retranslateUi(picturemap);

        QMetaObject::connectSlotsByName(picturemap);
    } // setupUi

    void retranslateUi(QWidget *picturemap)
    {
        picturemap->setWindowTitle(QApplication::translate("picturemap", "picturemap", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("picturemap", "clear", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label->setText(QApplication::translate("picturemap", "\346\210\221\347\232\204\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("picturemap", ",", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("picturemap", "\347\233\256\346\240\207\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("picturemap", ",", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class picturemap: public Ui_picturemap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREMAP_H
