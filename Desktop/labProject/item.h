#ifndef ITEM_H
#define ITEM_H

#include <QMainWindow>

#include <iostream>
#include <QString>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class Item;
}
QT_END_NAMESPACE




class Item : public QMainWindow
{
    Q_OBJECT

public:
    Item(QWidget *parent = nullptr);
    ~Item();


private:
    Ui::Item *ui;



    QString Name;
    double Price;
    int Quantity;
    QString Category;
    QString Supplier;


public:
    Item(QString ,double ,int ,QString ,QString);

    void setName(QString);
    QString getName();

    void setPrice(double);
    double getPrice();

    void setQuantity(int);
    int getQuantity();

    void setCategory(QString);
    QString getCategory();

    void setSupplier(QString);
    QString getSupplier();
};

#endif // ITEM_H
