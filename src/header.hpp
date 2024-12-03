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
    int Partie_JxJ();
    int Partie_JxAI();
    Deroulement Round_JxJ (Deroulement& avancement);
    Deroulement Round_JxAI (Deroulement& avancement);
    bool end_game(std::array<char,9> const& valeurs);
    bool no_end(std::array<char,9> const& valeurs);
    int draw_game_board(std::array<char,9> const& valeurs);
}
