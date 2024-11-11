#include <vector>
#include "Card.hpp"

class Deck
{
private:
    std::vector<Card> cards;


public:
    void shuffle();
    Card drawCard();
    
};