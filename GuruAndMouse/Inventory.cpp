//
//  Inventory.cpp
//  GuruAndMouse
//
//  Created by Pei Siong WANG on 24/03/2024.
//

#include "Inventory.hpp"


// constructor
Inventory::Inventory() {};

// check if inventory is full
bool Inventory::isFull() {
    bool full = true;
    
    if (_container.size() < _capacity) {
        full = false;
    }
    return full;
}

// check of inventory is empty
bool Inventory::isEmpty() {
    bool empty = true;
    if (_container.size() > 0) {
        empty = false;
    }
    return empty;
}

// find an item in inventory
    bool Inventory::findInventory(Items *itemPtr){
        
        bool hasItem = false;
        
        auto it = std::find(_container.begin(), _container.end(), itemPtr);
        
        if (it != _container.end())
        {
            _itemPosn = std::distance(_container.begin(), it);
            return true;
        }
        else
        {
            return false;
        }
    }

// display inventory content
void Inventory::getInventory() {
    if (Inventory::isEmpty()) {
        std::cout << "Inventory is empty.\n";
        return;
    }
    std::cout << "These are the items you have:\n";
    for (int i = 0; i < _capacity; i++) {
        if (_container[i] != nullptr) {
            std::cout << "  - " +_container[i]->getName() + "\n";
        }
    }
}




// add item to inventory
void Inventory::addItem(Items *itemPtr) {
    if (itemPtr == nullptr) {
        return;
    }
    else if (Inventory::isFull()) {
        std::cout << "Container is full.\n";
    }
    else {
        bool hasItem = Inventory::findInventory(itemPtr);
        
        if (hasItem) {
            std::cout << "Item already in inventory. There is no need to add.";
        } else {
            _container.push_back(itemPtr);
        }
    }
}
// remove item from inventory
void Inventory::removeItem(Items* itemPtr) {
    
    bool hasItem = Inventory::findInventory(itemPtr);
    
    if (hasItem){
        auto indexToRemove = _container.erase(_container.begin() + _itemPosn);
        std::cout << "Success! Item has been removed.\n";
    }
    else {
        std::cout << "Sorry! No such item so nothing to remove.";
    }
}
