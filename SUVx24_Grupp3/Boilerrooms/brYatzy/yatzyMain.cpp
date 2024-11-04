#include <iostream>
#include <vector>

const int TOTAL_ROUNDS = 15;          // Yahtzee has 13 rounds in a single game
const int TOTAL_DICE = 5;             // 5 dice are used
const int MAX_ROLLS = 3;              // Maximum rolls allowed per turn
int currentRound = 0;                // Tracks the current round
using namespace std;

int displayDice(int dice);
void RollDice(vector<int> dice,int index);

int main ()

{
   /*Initialize game for Player
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

    ///////////Dice display implementation
    // roll dice

    displayDice(dice.at(0));
    displayDice(dice.at(1));
    displayDice(dice.at(2));
    displayDice(dice.at(3));
    displayDice(dice.at(4));

    int inputReroll;
    cout << "How many dice do you want to reroll?";
    cin >> inputReroll;
    vector<int> indexReroll;
    for (int i = 0; i < inputReroll; i++)
    {
        int x;
        cin >> x;
        indexReroll.push_back(x);
    }
    for (int i = 0; i < inputReroll; i++)
    {
        rollDice(dice,indecreroll[i]);
    }
    reroll++
    
    

    return 0;
}
int displayDice(int dice)
{
    cout << dice << endl;
}
void RollDice(vector<int> dice,int index)
{
    dice.at(index) = rand() % 6 + 1;
}