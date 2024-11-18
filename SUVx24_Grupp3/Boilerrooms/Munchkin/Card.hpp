#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>
#include <vector>
#include <algorithm> // for std::shuffle
#include <random>    // for random_device and mt19937
#include <string>

struct Card {
    std::string name;
    std::string type; // "Monster", "Curse", "Item", etc.
    int value;        // Combat strength, treasure value, etc.

    Card(std::string n, std::string t, int v) : name(n), type(t), value(v) {}
};

#endif

// Deck doorDeck;
// std::vector<Card> treasureDeck;

// // Discard piles for reshuffling later
// std::vector<Card> doorDiscardPile;
// std::vector<Card> treasureDiscardPile;


// Card drawDoorCard() {
//     return drawCard(doorDeck, doorDiscardPile);
// }

// Card drawTreasureCard() {
//     return drawCard(treasureDeck, treasureDiscardPile);
// }
