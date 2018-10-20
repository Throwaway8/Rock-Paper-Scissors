//
//  Player.hpp
//  assn2
//
//  Created by Thomas on 2018-10-16.
//  Copyright © 2018 Thomas. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <stdio.h>

class Player
{
private:
    int score;
public:
    // default constructor
    Player(){}
    // constructor initialize a score
    Player(int x){score = x;}
    // access score
    const int getScore(){return score;}
    // decrement a player types score variable
    Player& operator--()
    {
        score--;
        return *this;
    }
    
  
    
};

#endif /* Player_hpp */
