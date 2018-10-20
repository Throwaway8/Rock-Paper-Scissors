//
//  Human.hpp
//  assn2
//
//  Created by Thomas on 2018-10-16.
//  Copyright © 2018 Thomas. All rights reserved.
//

#ifndef Human_h
#define Human_h

#include <stdio.h>
#include "Player.h"
#include "Guess.h"
#include <string>

using namespace std;

class Human : public Player
{
private:
    string name;
    
public:
    // constructor created with name initialize player score to 3
    Human(string nm):Player(3)
    {
        name = nm;
    }
    // access name
    const string &getName() const
    {
        return name;
        cout << endl;
        
    }
    // access guess for player allow them to input a guess
    Guess getGuess() const
    {
        char x;
        cout << "Enter a guess R, P or S: ";
        cin >> x;
        Guess a;
        switch(x)
        {
            case 'R':
                a = Guess('R');
                break;
            case 'P':
                a = Guess('P');
                break;
            case 'S':
                a = Guess('S');
                break;
            default:
                break;
        }
        return a;
        cout << endl;
    }
    
};

#endif /* Human_hpp */
