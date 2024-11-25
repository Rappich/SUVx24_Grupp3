#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>
#include <vector>
#include <string>

class Card
{
public:
    std::string name;
    std::string type; // "Monster", "Curse", "Item", etc.
    int value;        // Combat strength, treasure value, etc.

    //Add logic to handle unique Cardfunctionality eg. Bad stuff from monster

    Card(std::string n, std::string t, int v) : name(n), type(t), value(v) {}

     bool operator==(const Card& other);
};

#endif
