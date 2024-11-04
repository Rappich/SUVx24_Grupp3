#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

const int TOTAL_ROUNDS = 15;          // Yahtzee has 13 rounds in a single game
const int TOTAL_DICE = 5;             // 5 dice are used
const int MAX_ROLLS = 3;              // Maximum rolls allowed per turn
int currentRound = 0;                // Tracks the current round

vector<int> dice[5];


void rollDice(vector<int> (&dice)[5]) 
{
    vector<int> rolls; 
    for (int i = 0; i < 5; ++i) 
    {
        dice[i] = {rand() % 6 + 1}; 
    }
    
}
int main ()

{
    /* Initialize game for Player
        Play all rounds for the current player

Function play_round(player):
    Initialize round state:
        dice = array of TOTAL_DICE                // Array to hold dice values
        rolls_left = MAX_ROLLS                    // Track rolls per round

    While rolls_left && playerInput = yes > 0:
        roll_dice(dice)                           // Roll all dice (or selected dice)
        Display current dice values
        Ask player if they want to:
            - Keep current roll
            - Re-roll specific dice (choose which dice to re-roll)
        If player chooses to keep current roll:
            Break out of the roll loop
        Decrement rolls_left by 1

    Display dice after final roll */

    return 0;
}