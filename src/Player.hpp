#pragma once
#include <iostream>

namespace Player
{
    struct player {
        std::string name {};
        char symbole {}; //X ou O
    };

    player create_player ();
    player create_AI(char sym_joueur);
}

