#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>


class Player
{
    private:
        int level;
        int attackPower;
        std::string name;
        std::string role;
        

    public:
        
        void playerTurn();

        void useItem(itemCard?);

        void equipItem(itemCard?);

        void playerPower();

};

#endif
