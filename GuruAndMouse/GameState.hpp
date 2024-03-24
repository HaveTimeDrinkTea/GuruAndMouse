//
//  GameState.hpp
//  The_Guru_And_The_Mouse
//
//  Created by Pei Siong WANG on 23/03/2024.
//

#ifndef GameState_hpp
#define GameState_hpp

#include <stdio.h>
#include "Villages.hpp"

class GameState {
public:
    GameState();
    
    void setCurrentV(Villages* v);
    Villages* getCurrentV();

private:
    Villages* _currentV;
};
#endif /* GameState_hpp */
