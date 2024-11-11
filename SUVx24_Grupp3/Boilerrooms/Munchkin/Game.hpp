#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#include "DoorCard.hpp"
#include "TreasureCard.hpp"

class Game 
{
private:
    int currentTurn;
    std::string gameState;
    std::vector<DoorCard> doorDeck;
    std::vector<TreasureCard> treasureDeck;
    Player player;
    
public:
    Game();
    void startGame();
    void endTurn();
    DoorCard drawCard();
    bool checkVictory();
};