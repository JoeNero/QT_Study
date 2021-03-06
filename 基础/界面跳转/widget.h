#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "form.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
signals:

public slots:
    void subSlot();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    Form f1;
};

#endif // WIDGET_H
