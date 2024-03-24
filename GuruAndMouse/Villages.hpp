//
//  Villages.hpp
//  The_Guru_And_The_Mouse
//
//  Created by Pei Siong WANG on 23/03/2024.
//

#ifndef Villages_hpp
#define Villages_hpp
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "References.hpp"
#include <stdio.h>

class Villages {
    
public:
    // constructors
    Villages(const std::string name, const std::string desc, const std::string person);
    
    // getters
    std::string getName();
    std::string getDesc();
    std::string getPerson();
    
    // setters
    void setName(std::string newName);
    void setDesc(std::string newDesc);
    void setPerson(std::string newPerson);
    
//    void displayV();
    
    // Linked Villages
//    std::map<std::string, Villages *> linkedV = {};
    std::map<int, Villages *> linkedV = {};
    
private:
    std::string _name;
    std::string _desc;
    std::string _person;

};

#endif /* Villages_hpp */
