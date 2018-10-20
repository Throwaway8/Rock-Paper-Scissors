//
//  main.cpp
//  assn2
//
//  Created by Thomas on 2018-10-16.
//  Copyright © 2018 Thomas. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Guess.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include <string>
#include <cmath>


using namespace std;

int main(int argc, const char * argv[]) {
    // initialize a guess type for human and cpu
    Guess a;
    Guess b;
    // string type to be used as a name for player
    string pname;
    cout << "Enter your name: ";
    cin >> pname;
    cout << endl;
    cout << "Player name: " << pname << endl;
    // construct human player
    Human plyr(pname);
    // construct cpu player
    Computer cpu;
    // get initial score objects
    int scrP = plyr.getScore();
    int scrC = cpu.getScore();
   
    // game of rock paper scissors begins
    while(scrC > 0 && scrP > 0)
    {
        // guesses are being made
        a = plyr.getGuess();
        b = cpu.getGuess();
        // compare guesses to know who won
        switch (a.compare(b))
        {
            case 1:
                scrC--;
                break;
            case -1:
                scrP--;
                break;
            default:
                break;
        }
        
        cout << "Human: " << a.getValue() << " Computer: " << b.getValue() << endl;
        cout << "Human: " << scrP << " Computer: " << scrC << endl;
        cout << "---------------------" << endl;
        // end game when someone has won
        if(scrC == 0)
        {
            cout << "Computer Wins" << endl;
        }
        else if(scrP == 0)
        {
            cout << pname << " Wins" << endl;
        }
    }
  
    return 0;
}
