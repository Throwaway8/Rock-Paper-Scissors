//
//  Computer.hpp
//  assn2
//
//  Created by Thomas on 2018-10-16.
//  Copyright © 2018 Thomas. All rights reserved.
//

#ifndef Computer_h
#define Computer_h
#include <stdio.h>
#include "Player.h"
#include "Guess.h"
#include <string>

class Computer : public Player
{

public:
    Computer():Player(5){}
    // access guess for the cpu and make it random
    Guess getGuess() const
    {
        Guess a;
        a = Guess();
        return a;
    }
    
};

#include <stdio.h>

#endif /* Computer_hpp */
