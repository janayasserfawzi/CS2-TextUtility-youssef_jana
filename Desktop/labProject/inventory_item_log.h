#ifndef INVENTORY_ITEM_LOG_H
#define INVENTORY_ITEM_LOG_H
#include "item.h"

class inventory_item_log
{
    int dubIndex;
public:
    inventory_item_log();

    vector<item>inventory;

    item searchOfItem_name(QString); //-->file handling

    item searchOfItem_category(QString);//-->file handling

    item searchOfItem_supplier(QString);//--->file handling

    //low_alert(){  --> ui

    bool check_dublicating(const Item&);
    void add_to_origin(const Item&);  //--> if true

};

#endif // INVENTORY_ITEM_LOG_H
