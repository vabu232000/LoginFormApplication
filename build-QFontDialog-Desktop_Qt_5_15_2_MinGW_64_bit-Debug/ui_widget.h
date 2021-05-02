/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *TextColorpushButton;
    QPushButton *BgColorpushButton;
    QPushButton *FontpushButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 120, 401, 191));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TextColorpushButton = new QPushButton(widget);
        TextColorpushButton->setObjectName(QString::fromUtf8("TextColorpushButton"));

        verticalLayout->addWidget(TextColorpushButton);

        BgColorpushButton = new QPushButton(widget);
        BgColorpushButton->setObjectName(QString::fromUtf8("BgColorpushButton"));

        verticalLayout->addWidget(BgColorpushButton);

        FontpushButton = new QPushButton(widget);
        FontpushButton->setObjectName(QString::fromUtf8("FontpushButton"));

        verticalLayout->addWidget(FontpushButton);


        horizontalLayout->addLayout(verticalLayout);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        TextColorpushButton->setText(QCoreApplication::translate("Widget", "Text Color", nullptr));
        BgColorpushButton->setText(QCoreApplication::translate("Widget", "Background color", nullptr));
        FontpushButton->setText(QCoreApplication::translate("Widget", "Change Font", nullptr));
        label->setText(QCoreApplication::translate("Widget", "    This is Vabhoosha T M", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
