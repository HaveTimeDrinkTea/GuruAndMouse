//
//  Items.hpp
//  GuruAndMouse
//
//  Created by Pei Siong WANG on 24/03/2024.
//

#ifndef Items_hpp
#define Items_hpp
#include <string>
#include <stdio.h>

class Items{
public:
    Items(const std::string name, const std::string desc);
    std::string getName();
    std::string getDesc();
    
    // setters
    void setName(std::string newName);
    void setDesc(std::string newDesc);
    
private:
    std::string _name;
    std::string _desc;
};

#endif /* Items_hpp */
