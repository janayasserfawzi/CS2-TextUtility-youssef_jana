#include "item.h"
#include "ui_item.h"

Item::Item(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Item)
{
    ui->setupUi(this);
}
Item::Item(QString n, double p, int q, QString c, QString s):Name(n),Price(p),Quantity(q),Category(c),Supplier(s){}

void Item::setName(QString n){Name=n;}
QString Item::getName(){return Name;}

void Item::setPrice(double p){Price=p;}
double Item::getPrice(){return Price;}

void Item::setQuantity(int q){Quantity=q;}
int Item::getQuantity(){return Quantity;}

void Item::setCategory(QString c){Category=c;}
QString Item::getCategory(){return Category;}

void Item::setSupplier(QString s){Supplier=s;}
QString Item::getSupplier(){return Supplier;}


Item::~Item()
{
    delete ui;
}
