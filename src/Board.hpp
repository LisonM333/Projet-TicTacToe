# pragma once
#include <array>
#include "Player.hpp"

struct Deroulement
{
    Player tour_de {};
    Player prochain {};
    std::array<char,9> board {};
    int nb_tour {};
};
bool end_game(std::array<char,9> const& valeurs);
bool no_end(std::array<char,9> const& valeurs);
int draw_game_board(std::array<char,9> const& valeurs);
Deroulement Round_JxJ (Deroulement& avancement);
Deroulement Round_JxAI (Deroulement& avancement);
int Partie_JxJ();
int Partie_JxAI();

