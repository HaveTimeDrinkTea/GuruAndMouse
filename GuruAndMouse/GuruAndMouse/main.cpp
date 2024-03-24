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
#include "Inventory.hpp"
#include "Items.hpp"


int main() {
    

    // Define the Villages
        Villages guruCave   = Villages("The Guru's Cave", "a very simple set up with only 1 thin straw mat for sleeping and a small little wooden tables with all his belongings: a spare set of clothes and a few apples for lunch.", "");
        Villages kittyV     = Villages("The Kitty Catty", "->the Kitty Catty Village->", "");
        Villages shepherdV  = Villages("The Shepherd's Village", "There are bays of hay and herds of cows in the field next to the village", "You see Mr. Ramsbottom, the village elder.");
        Villages hutV       =  Villages("The Carpenters Town", "->the Capenters Town ->","");
    
    // Define the items and inventory
    
        Items cat = Items("Whiskerclaw the cat"," a mighty hunter of mice");
        Items cow = Items("Mooella Cream the cow"," gives the most lucious cream milk");
        Items boy = Items("Alden Shepherdson the shepherd boy"," the best cattle herder in the village");
        Items hut = Items("Shepherd's Shelter"," a simple makeshift hut for the shepherd boy");
    
    
        
        
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
    
    std::cout << "**********************\n";
    std::cout << "The Guru And The Mouse\n";
    std::cout << "**********************\n";
    std::cout << "Long long ago, there is a Guru living in a cave deep in the mountains. The Guru lives an extremely simple life.\n";
    std::cout << "\nHis cave is to the north of 3 villages near him and he could see all of them from the entrance of his cave.";
    std::cout << "\nIn the mornings as the sun rises, he likes to observe the shepherd boys moving the herd of cows to graze in the field. At noon, he amuses himself by looking at all the cats who hang around the village to the south bathing in the warm mid-day sun. In the evening, he can see the iron mongers and the carpenters working by the fires.\n";
    std::cout << "\nHe is well respected agmonst the residents in these nearby villages and often agree to give them some blessings or words of wisdom whenever they needed some.\n";
    std::cout << "\nUnlike many of the villagers he knows, the Guru is happy and content all the time. He is glad to have the wisdom of living a simple life and be content to be in the present moment at any given moment.\n";
    std::cout << "\n";
    std::cout << "\n \n";
    std::cout << "\n \n";
    std::cout << "\n \n";
    
    std::cout << "\n";
    std::cout << "Looking around " + current->getName() + " you see " + current->getDesc() + "\n";
    std::cout << "\nOne evening, after coming back from giving a blessing, he saw a cute little mouse with a big grin on its face right by the little wooden table.\n";
    std::cout << "\nThe Guru was happy to have a little friend. However, as he preparing to change his clothes to get in bed, he realizes that the mouse had gnawed a hole in his clean clothes\n";
    std::cout << "\nThe Guru laughed out loud and said \"You cheeky little Mouse! \" \n";
    std::cout << "\nThe Guru thought to himself: perhaps he should invite a cat to the cave to live with him and keep the cheeky mouse in check.\n";
    std::cout << "\nHe thought perhaps one of the villagers would be happy to give him a cat.\n";
    std::cout << "\n\n";
    std::cout << "\nWhat do you think the guru should do?\n\n";
    
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
                
                std::cout << "The Guru is in the East Village where the shepherds live. \n";
                std::cout << "Looking around " + current->getName() + " you see " + current->getDesc() + "\n";
                std::cout << "You see this Person and you ask : " + current->getPerson() + "\n";
                std::cout << "\n";
                wwtgd();

                do
                {
                    std::cout << "[5] Ask for a cat\n";
                    std::cout << "[6] Ask for a cow\n";
                    std::cout << "[7] Ask for a shepherd boy\n";
                    std::cout << "[8] Leave! There is nothing in " + current->getName() + " for me!\n";
                    wiyc();
                    std::cin >> action;
                    
                    if (action == 5) {
                        
                        
                    } else if (action == 6) {
                        
                    } else if (action == 7) {
                        
                    } else if (action == 8)  {
                        std::cout << "\nYou are at the exit of " + current->getName() +  ".\n\n";
                    } else {
                        std::cout << "please enter a correct option.\n\n";
                        wiyc();
                        std::cin >> action;
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
