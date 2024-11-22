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
    return 0;
}
