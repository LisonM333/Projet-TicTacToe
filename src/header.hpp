# pragma once
#include <array>

namespace Board
{
    struct Deroulement
    {
        Player::player tour_de {};
        Player::player prochain {};
        std::array<char,9> board {};
        int nb_tour {};
    };
    int Partie();
    Deroulement Round (Deroulement tourprecedent);
    bool end_game(std::array<char,9> valeurs);
    int draw_game_board(std::array<char,9> valeurs);
}
