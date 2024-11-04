#include <iostream>
#include <string>
#include <vector>

const int TOTAL_ROUNDS = 15;          // Yahtzee has 13 rounds in a single game
const int TOTAL_DICE = 5;             // 5 dice are used
const int MAX_ROLLS = 3;              // Maximum rolls allowed per turn
int currentRound = 0;                // Tracks the current round

using namespace std;

class playerManagement 
{
    public:
    vector<string> playerNames;
     
    void addPlayer(string& name) 
    {
        playerNames.push_back(name);
    }

    void initializePlayers() 
    {
    int numPlayers;
    cout << "Enter the number of players: ";
    cin >> numPlayers;

        for (int i = 0; i < numPlayers; ++i) 
        {
            string name;
            cout << "Enter name for player " << (i + 1) << ": ";
            getline(cin, name);
            addPlayer(name);
        }
    }

    //When players turn is over. Kanske ska ligga som if-sats
    void nextPlayer(int numPlayers)
    {   
        if (numPlayers > 1)
        {
            cout << "your turn is over, next players turn." << endl;
        }

    }
};

int main ()

{

playerManagement pm;

pm.initializePlayers();


    /*Initialize game for Player
        Play all rounds for the current player

Function play_round(player):
    Initialize round state:
        dice = array of TOTAL_DICE                // Vector to hold dice values
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

<<<<<<< HEAD
    Display dice after final roll
    for (int i = 0; name <  ; i++)
    cout << "Player 2s turn is over\n player1s turn"<<;

    cout << "Player 1s turn is over\n player2s turn"<<;
=======
    Display dice after final */
>>>>>>> e5922f2c20b071963cbdb60ab61c616369079329


    return 0;
}