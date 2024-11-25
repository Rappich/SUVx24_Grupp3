#include "Game.hpp"

int main ()

{
    Game Munchkin;
    

    std::cout << "Enter player name: " << std::endl;
    std::string inputName;
    std::cin >> inputName;
    Player player1 = {inputName};
    std::cout << "Enter player2's name: " << std::endl;
    std::cin >> inputName;
    Player player2 = inputName; //Create logic to decide amount of players
    Munchkin.AddPlayer(player1);
    Munchkin.AddPlayer(player2);

    Munchkin.startGame();
    for (Player& player : Munchkin.GetPlayerList())
    {
        Munchkin.playerTurn(player);
        if (!Munchkin.doorDeck.cards.empty())
        {
           // player.addItemToInventory(doorDeck.drawCard());
        }
        else
        {
            // implement logic to draw from discard pile after shuffling
        }
    }

    return 0;
}