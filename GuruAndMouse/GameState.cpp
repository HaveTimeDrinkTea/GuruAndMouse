//
//  GameState.cpp
//  The_Guru_And_The_Mouse
//
//  Created by Pei Siong WANG on 23/03/2024.
//

#include "GameState.hpp"

GameState::GameState() {
    
}

void GameState::setCurrentV(Villages* v) {
    _currentV = v;
}

Villages* GameState::getCurrentV() {
    return _currentV;
}
