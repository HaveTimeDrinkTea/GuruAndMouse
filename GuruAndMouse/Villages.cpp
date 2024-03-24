//
//  Villages.cpp
//  The_Guru_And_The_Mouse
//
//  Created by Pei Siong WANG on 23/03/2024.
//

#include "Villages.hpp"


Villages::Villages(const std::string name, const std::string desc, const std::string person) {
    _name = name;
    _desc = desc;
    _person = person;
}


std::string Villages::getName() {
    return _name;
}

std::string Villages::getDesc() {
    return _desc;
}

std::string Villages::getPerson() {
    return _person;
}

void Villages::setName(std::string newName) {
    {
        if (newName.empty()) {
            throw std::invalid_argument("Name must not be empty");
        }
            _name = newName;
    }
}

void Villages::setDesc(std::string newDesc) {
    {
        if (newDesc.empty()) {
            throw std::invalid_argument("Desc must not be empty");
        }
            _desc = newDesc;
    }
}

void Villages::setPerson(std::string newPerson) {
    {
        if (newPerson.empty()) {
            throw std::invalid_argument("Person must not be empty");
        }
            _desc = newPerson;
    }
}

