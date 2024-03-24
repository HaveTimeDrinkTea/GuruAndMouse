//
//  Inventory.hpp
//  GuruAndMouse
//
//  Created by Pei Siong WANG on 24/03/2024.
//

#ifndef Inventory_hpp
#define Inventory_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Items.hpp"

class Inventory {
    
public:
    Inventory();
    
// check if inventory is full
    bool isFull();
    
// check of inventory is empty
    bool isEmpty();
    
// display inventory content
    void getInventory();
    
// find an itm in inventory
    bool findInventory(Items *itemPtr);
    
// add item to inventory
    void addItem(Items *itemPtr);
    
// remove item from inventory
    void removeItem(Items *itemPtr);
    
private:
    
    std::vector<Items *> _container = {};
    
    int _capacity = 6;
    
    int _itemPosn = 0;

};

#endif /* Inventory_hpp */
