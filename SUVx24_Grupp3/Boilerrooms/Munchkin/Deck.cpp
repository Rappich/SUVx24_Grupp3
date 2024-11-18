#include "Deck.hpp"

Deck::Deck(DeckType deckType)
{
    this->deckType = deckType;
    switch(this->deckType)
    {
        case DeckType::DoorDeck:

            break;
        
    }
}

void Deck::PopulateDeck(DeckType deckType)
{

    // Populate Door Deck
    cards.push_back(Card("Level 1 Skeleton", "Monster", 1));
    cards.push_back(Card("Curse! Lose 1 Level", "Curse", 0));
    cards.push_back(Card("Magic Key", "Item", 2));
    shuffleDeck();
    // Populate Treasure Deck
    // treasureDeck.push_back(Card("Boots of Butt-Kicking", "Item", 2));
    // treasureDeck.push_back(Card("Potion of Heroism", "Item", 5));
    // treasureDeck.push_back(Card("Bag of Gold", "Treasure", 100));
    // shuffleDeck(treasureDeck);
}

void Deck::shuffleDeck()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::drawCard()
{
    Card drawnCard = cards.back(); // Draw the top card
    cards.pop_back();              // Remove it from the deck
    return drawnCard;
}