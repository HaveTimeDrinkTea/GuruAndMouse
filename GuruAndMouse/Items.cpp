//
//  Items.cpp
//  GuruAndMouse
//
//  Created by Pei Siong WANG on 24/03/2024.
//

#include "Items.hpp"

Items::Items(const std::string name, const std::string desc) {
    _name = name;
    _desc = desc;
}

std::string Items::getName() {
    return _name;
}

std::string Items::getDesc() {
    return _desc;
}


void Items::setName(std::string newName) {
    {
        if (newName.empty()) {
            throw std::invalid_argument("Name must not be empty");
        }
            _name = newName;
    }
}

void Items::setDesc(std::string newDesc) {
    {
        if (newDesc.empty()) {
            throw std::invalid_argument("Desc must not be empty");
        }
            _desc = newDesc;
    }
}
