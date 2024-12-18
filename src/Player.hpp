#pragma once
#include <iostream>

struct Player {
    std::string name {};
    char symbole {}; //X ou O
};

Player create_player ();
Player create_AI(char sym_joueur);


