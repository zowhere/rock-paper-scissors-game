#include <iostream>
using namespace std;
#include <cstdlib> //includes random integer
#include <ctime>

// rock  beats scissor
// scissor beats paper
// paper beats rock
// everything else is a draw

#define ROCK 1
#define PAPER 2
#define SCISSOR 3

int main()

{
    // to get true randomness
    srand((unsigned int)(time(NULL)));
    int playerThrow = 0;
    int aiThrow = 0;
    bool draw = false;

    // user throw
    do
    {

        cout << "Select your throw" << endl;
        cout << "1.Rock" << endl;
        cout << "2.Paper" << endl;
        cout << "3.Scissor" << endl;
        // user select
        cout << "Select:" << endl;
        cin >> playerThrow;
        cout << endl; // next line

        // logic for ai throw
        // rand()-> 0...9999 % 3 means we want the remainder to 3 but the outcome will be between 0 and 2
        // 10/3 the remainder is 1
        // 13/3 the remainder is 1
        // 11/3 the remainder is 2
        // 12/3 the remainder is o
        // we'll add 1 so we can get 3 choices

        aiThrow = (rand() % 3) + 1;
        if (aiThrow == ROCK)
        {
            cout << "AI throws rock" << endl;
        }
        else if (aiThrow == PAPER)
        {
            cout << "AI throws paper" << endl;
        }
        else if (aiThrow == SCISSOR)
        {
            cout << "AI throws Scissor" << endl;
        }

        draw = false;
        if (playerThrow == aiThrow)

        {
            draw = true;
            // this allows game to continue
            cout << "Draw! Play again" << endl;
        }
        else if (playerThrow == ROCK && aiThrow == SCISSOR)
        {
            cout << "Rock beats Scissor! YOU WIN" << endl;
        }
        else if (playerThrow == SCISSOR && aiThrow == PAPER)
        {
            cout << "Paper beats scissor. You LOSE!" << endl;
        }
        else if (playerThrow == SCISSOR && aiThrow == ROCK)
        {
            cout << "ROCK beats SCISSORS! YOU LOSE." << endl;
        }
        else if (playerThrow == PAPER && aiThrow == ROCK)
        {
            cout << "paper beats rock! YOU win." << endl;
        }
        else if (playerThrow == PAPER && aiThrow == SCISSOR)
        {

            cout << "Scissor beats Paper! YOU LOSE." << endl;
        }

        cout << endl;
    } while (draw);

    return 0;
}
