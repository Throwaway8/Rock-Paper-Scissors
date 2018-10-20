//
//  Guess.cpp
//  assn2
//
//  Created by Thomas on 2018-10-16.
//  Copyright © 2018 Thomas. All rights reserved.
//

#include "Guess.h"

// constructor to assign guess
Guess::Guess(char x)
{
    switch(x)
    {
        case 'R':
        case 'r':
            guess = 'R';
            break;
        case 'P':
        case 'p':
            guess = 'P';
            break;
        default:
            guess = 'S';
            break;
    }
}
// constructor to assign guess with an int
Guess::Guess(int a)
{
    switch(a)
    {
        case 0:
            guess = 'R';
            break;
        case 1:
            guess = 'P';
            break;
        default:
            guess = 'S';
    }
}
// compare guesses to know who to assign a point to
int Guess::compare(const Guess &other) const
{
    int a = NULL;
    if(this->guess == other.guess)
    {
        a = 0;
    }
    else if((this->guess == 'R' && other.guess == 'P') || (this->guess == 'P' && other.guess == 'S') || (this->guess == 'S' && other.guess == 'R'))
    {
        a = -1;
    }
    else if((this->guess == 'P' && other.guess == 'R') || (this->guess == 'S' && other.guess == 'P') || (this->guess == 'R' && other.guess == 'S'))
    {
        a = 1;
    }
    return a;
}

