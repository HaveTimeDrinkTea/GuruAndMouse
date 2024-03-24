//
//  References.hpp
//  The_Guru_And_The_Mouse
//
//  Created by Pei Siong WANG on 23/03/2024.
//

#ifndef References_hpp
#define References_hpp
#include <iostream>
#include <stdio.h>

enum Directions {
    North = 0,
    East,
    South,
    West
};

enum DirGuruCave {
    SouthkittyV
    , EastShepherdV
};

enum DirShepherdV {
    WestGuruCave
    , SouthHutV
};

enum DirHutV {
    NorthShepherdV
    , WestkittyV
};

const std::string DirArr[4] = {"North", "East", "South", "West"};

enum UIState {
    MainUI
    , MoveUI
    , ExploreUI
};

void wwtgd();

void wiyc();


#endif /* References_hpp */

