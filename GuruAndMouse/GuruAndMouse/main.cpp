//
//  main.cpp
//  The_Guru_And_The_Mouse
//
//  Created by Pei Siong WANG on 22/03/2024.
//

#include <iostream>
#include <map>
#include "References.hpp"
#include "Villages.hpp"



int main() {
    

    // Define the Villages
        Villages guruCave   = Villages("The Guru's Cave", "a very simple set up with only 1 thin straw mat for sleeping.", "");
        Villages kittyV     = Villages("The Kitty Catty", "->the Kitty Catty Village->", "");
        Villages shepherdV  = Villages("The Shepherd Town", "->the Shepherd Town ->", "You see a person");
        Villages hutV       =  Villages("The Carpenters Town", "->the Capenters Town ->","");
        
        
    // Define the Villages links
    // N 0, E 1, s 2, W 3
    
    guruCave.linkedV[Directions(2)] = &kittyV;
    guruCave.linkedV[Directions(1)] = &shepherdV;
    
    kittyV.linkedV[Directions(0)] = &kittyV;
    kittyV.linkedV[Directions(1)] = &hutV;
    
    shepherdV.linkedV[Directions(2)] = &hutV;
    shepherdV.linkedV[Directions(3)] = &guruCave;
    
    hutV.linkedV[Directions(0)] = &shepherdV;
    hutV.linkedV[Directions(3)] = &kittyV;

    Villages* current = &guruCave;
    
    int command = 0;
    int action = 6;
    int cur_command = 0;

    std::cout << "Looking around " + current->getName() + " you see " + current->getDesc() + "\n";
    
    std::cout << "What do you think the guru should do?\n\n";
    
    do {
//        system("clear");
        
        for (int i = 0; i < 4; i++)
        {
            if (i == cur_command) {
                continue;
            }
                std::cout << "[" << i << "]" << " Go " << DirArr[i] << "\n";
        };
        std::cout << "[9] Quit! I'm bored!\n";
        
        std::cout << "\nWhat is your choice? >>>> ";
        std::cin >> command;
        
        cur_command = command;
        
        if(current->linkedV.find(command) != current->linkedV.end()) {
            current = (current->linkedV[command]);
        };
        
        std::cout << "command is: " << command << "\n";
        std::cout << "cur_comman is: " << cur_command << "\n";
        
        switch (command) {
            case 1:
                
                std::cout << "you are in the east \n";
                std::cout << "Looking around " + current->getName() + " you see " + current->getDesc() + "\n";
                std::cout << "You see this Person : " + current->getPerson() + "\n";
                std::cout << "\n";
                wwtgd();

                do
                {
                    std::cout << "[5] Ask for a cow\n";
                    std::cout << "[6] Ask for a cat\n";
                    std::cout << "[7] Ask for boy\n";
                    std::cout << "[8] Leave! There is nothing in " + current->getName() + " for me!\n";
                    wiyc();
                    std::cin >> action;
                    
                    if (action == 8) {
                        std::cout << "\nYou are at the exit of " + current->getName() +  ".\n\n";
                    }
                }
                while (action != 8);

                
                std::cout << "What do you think the guru should do?\n\n";
                
                break;
        }

    }
    while (command != 9);

    
    return 0;
}
