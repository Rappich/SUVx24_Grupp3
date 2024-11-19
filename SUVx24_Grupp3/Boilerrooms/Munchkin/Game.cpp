#include "Game.hpp"

Game::Game()
{
    doorDeck.SetdeckType(DeckType::DoorDeck);
    doorDeck.PopulateDeck(DeckType::DoorDeck);
    treasureDeck.SetdeckType(DeckType::TreasureDeck);
    treasureDeck.PopulateDeck(DeckType::TreasureDeck);
}

void Game::run() // our custom main
{
    std::cout << "Enter player name: " << std::endl;
    std::string inputName;
    std::cin >> inputName;
    Player player1 = {inputName};
    std::cout << "Enter player2's name: " << std::endl;
    std::cin >> inputName;
    Player player2 = inputName;
    AddPlayer(player1);
    AddPlayer(player2);

    startGame();
    for (Player player : GetPlayerList())
    {
        playerTurn(player);
        if (!doorDeck.cards.empty())
        {
           // player.addItemToInventory(doorDeck.drawCard());
        }
        else
        {
            // implement logic to draw from discard pile after shuffling
        }
    }
}

void Game::playerTurn(Player &player)
{
    std::cout << "It's " << player.getName() << "'s turn!" << std::endl;
    std::cout << "Player recieves 3 levels!" << std::endl;
    player.levelUp();
    player.levelUp();
    player.levelUp();


    // Step 1: Action Phase - Ask if the player wants to do something with their hand (equip item, use potion, etc.)
    bool actionTaken = false;
    while (!actionTaken)
    {
        std::cout << "\nDo you want to take an action with your cards in hand? (y/n): ";
        char actionChoice;
        std::cin >> actionChoice;

        if (actionChoice == 'y' || actionChoice == 'Y')
        {
            // Display player's cards in hand and prompt for action
            std::cout << "\nYour current hand: " << std::endl;
            std::vector<Card> hand = player.getInventory();
            for (size_t i = 0; i < hand.size(); ++i)
            {
                std::cout << i + 1 << ". " << hand[i].name << " (" << hand[i].type << ")" << std::endl;
            }

            std::cout << "\nWhat would you like to do? (1-Equip, 2-Use Item, 3-Do Nothing): ";
            int choice;
            std::cin >> choice;

            if (choice == 1)
            {
                // Equip an item
                std::cout << "Enter the number of the item you want to equip: ";
                int itemIndex;
                std::cin >> itemIndex;
                if (itemIndex > 0 && itemIndex <= hand.size())
                {
                    player.equipItem(hand[itemIndex - 1]); // Equip the selected item
                    actionTaken = true;
                }
                else
                {
                    std::cout << "Invalid item number." << std::endl;
                }
            }
            else if (choice == 2)
            {
                // Use an item (e.g., potion, etc.)
                std::cout << "Enter the number of the item you want to use: ";
                int itemIndex;
                std::cin >> itemIndex;
                if (itemIndex > 0 && itemIndex <= hand.size())
                {
                    // For simplicity, assume all items in the inventory are usable potions or consumables
                    std::cout << "You used " << hand[itemIndex - 1].name << "!" << std::endl;
                    player.removeItemFromInventory(hand[itemIndex - 1]); // Remove item after use
                    actionTaken = true;
                }
                else
                {
                    std::cout << "Invalid item number." << std::endl;
                }
            }
            else if (choice == 3)
            {
                // Do nothing
                std::cout << "You chose to do nothing and move on." << std::endl;
                actionTaken = true;
            }
            else
            {
                std::cout << "Invalid choice. Please choose again." << std::endl;
            }
        }
        else if (actionChoice == 'n' || actionChoice == 'N')
        {
            // Player decides not to take any action
            std::cout << "You decided not to take any action this turn." << std::endl;
            actionTaken = true;
        }
        else
        {
            std::cout << "Invalid choice. Please choose 'y' or 'n'." << std::endl;
        }
    }

    // Step 2: Draw a door card
    Card drawnDoorCard = doorDeck.drawCard(); // Assume drawDoorCard is defined elsewhere
    std::cout << "You drew a door card: " << drawnDoorCard.name << std::endl;

    // Step 3: Handle the drawn Door card (Monster, Curse, Class/Race, or other)
    if (drawnDoorCard.type == "Monster")
    {
        // Handle combat with the drawn monster
        std::cout << "A monster has appeared! Prepare for combat!" << std::endl;
        // combat(player, drawnDoorCard);  // Assume combat function is defined elsewhere
    }
    else if (drawnDoorCard.type == "Curse")
    {
        // Apply the curse
        // applyCurse(player, drawnDoorCard);  // Assume applyCurse function is defined elsewhere
    }
    else if (drawnDoorCard.type == "Class" || drawnDoorCard.type == "Race")
    {
        // Ask if the player wants to apply class or race change
        std::cout << "You are now a " << drawnDoorCard.name << "!" << std::endl; // CHANGEEEE
        if (drawnDoorCard.type == "Class")
        {
            player.addItemToInventory(drawnDoorCard); // Treat classes as items to be added
        }
        else
        {
            player.addItemToInventory(drawnDoorCard); // Treat races as items to be added
        }
    }
    else
    {
        // Handle other card types (e.g., Action cards, etc.)
        std::cout << "Card action not recognized: " << drawnDoorCard.name << std::endl;
    }

    // Step 4: Treasure Phase - If monster defeated, draw treasure
    // If the player fought a monster and won, they draw treasure cards
    if (drawnDoorCard.type == "Monster" && player.getLevel() > 1)
    { // Assume player wins if their level is > 1 for simplicity
        std::cout << "Congratulations! You defeated the monster!" << std::endl;

        //drawTreasureForVictory(player); // Assume drawTreasureForVictory function is defined elsewhere
        player.addItemToInventory(treasureDeck.drawCard());
    }
    else
    {
        std::cout << "No treasure drawn." << std::endl;
    }

    // Step 5: End of turn
    std::cout << player.getName() << "'s turn has ended." << std::endl;
}

void Game::startGame()
{
    // Game starts with player drawing 4 cards
    for (Player player : GetPlayerList())
    {
        if (!doorDeck.cards.empty())
        {
            for (int i = 0; i < 4; i++)
            {
                player.addItemToInventory(doorDeck.drawCard());
            }
        }
        else
        {
            // implement logic to draw from discard pile after shuffling
        }
        if (!treasureDeck.cards.empty())
        {
            for (int i = 0; i < 4; i++)
            {
                player.addItemToInventory(treasureDeck.drawCard());
            }
        }
        else
        {
            // implement logic to draw from discard pile after shuffling
        }
        player.displayStatus();
    }
}

bool Game::checkVictory()
{
    return false;
}
void Game::AddPlayer(Player newPlayer)
{
    players.push_back(newPlayer);
}
int main()
{
    Game Munchkin;
    Munchkin.run();

    /*// Draw from Door Deck
    Card doorCard = drawDoorCard();
    std::cout << "You drew a Door card: " << doorCard.name << " (" << doorCard.type << ")\n";

    // Draw from Treasure Deck
    Card treasureCard = drawTreasureCard();
    std::cout << "You drew a Treasure card: " << treasureCard.name << " (" << treasureCard.type << ")\n";*/

    return 0;
}
