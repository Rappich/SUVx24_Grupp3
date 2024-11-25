#include "Card.hpp"
#include <string>
#include <algorithm> // for std::shuffle
#include <random>    // for random_device and mt19937

    

    bool Card::operator==(const Card& other) 
    {
        return name == other.name && type == other.type && value == other.value;
    }