#include "inventory_item_log.h"

inventory_item_log::inventory_item_log() {}

Item inventory_item_log::searchOfItem_name(QString n){
    for(int i=0;i<inventory.size();i++){
        if(inventory[i].getName()==n){
            return inventory[i];
        }
        else
            continue;
    }
}


Item inventory_item_log::searchOfItem_category(QString c){
    for(int i=0;i<inventory.size();i++){
        if(inventory[i].getCategory()==c){
            return inventory[i];
        }
        else
            continue;
    }
}

Item inventory_item_log::searchOfItem_supplier(QString s){
    for(int i=0;i<inventory.size();i++){
        if(inventory[i].getSupplier()==s){
            return inventory[i];
        }
        else
            continue;
    }
}

bool inventory_item_log::check_dublicating(const Item& obj){
    for(int i=0;i<inventory.size();i++){
        if(inventory[i].getName()==obj.getName() && inventory[i].getSupplier()==obj.getSupplier()){
            dubIndex=i;
            return true;
        }
    }
    return false;
}

void inventory_item_log::add_to_origin(const Item& obj){
    inventory[dubIndex].setQuantity(inventory[dubIndex].getQuantity()+obj.getQuantity());
}


