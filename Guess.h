//
//  Guess.hpp
//  assn2
//
//  Created by Thomas on 2018-10-16.
//  Copyright © 2018 Thomas. All rights reserved.
//

#ifndef Guess_h
#define Guess_h

#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Guess.h"
#include "Player.h"


using namespace std;

class Guess
{
private:
    char guess;
    
public:
    
    
    Guess()
    {
        // get the system time
        unsigned int seed = (unsigned)time(0);
        
        // seed the random number generator
        srand(seed);
        
        int var =  (rand() % 3) + 1;
        // assign random guesses
        switch(var)
        {
            case 1:
                guess = 'R';
                break;
            case 2:
                guess = 'P';
                break;
            case 3:
                guess = 'S';
                break;
            default:
                break;
                
        }
    }
    // constructor inputing a char
    Guess(char x);
    // contructor int input
    Guess(int a);
    // access guess value
    char getValue(){return guess;}
    // compare guesses to assign winner
    int compare(const Guess &other) const;
    
    
};

#endif /* Guess_hpp */
