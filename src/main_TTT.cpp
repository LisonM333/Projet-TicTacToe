#include<iostream>
#include<array>
#include "Player.hpp"

struct Deroulement
{
    Player::player tour_de {};
    Player::player prochain {};
    std::array<char,9> board {};
    int nb_tour {};
};

int Partie()
{
    Player::player joueur1 {Player::create_player()};
    Player::player joueur2 {Player::create_player()};



    return 0;
}

Deroulement Round (Deroulement tourprecedent)
{
    Deroulement avancement {};
    if (tourprecedent.nb_tour == 0)
    {
        avancement.board.fill('.');
        avancement.tour_de = tourprecedent.tour_de;
        avancement.prochain = tourprecedent.prochain;
    }
}


bool end_game(std::array<char,9> valeurs)
{
    if (((valeurs[0]==valeurs[4]==valeurs[8])||(valeurs[2]==valeurs[4]==valeurs[6])) && valeurs[4]!='.')
    {
        return true;
    }
    for (int i{0}; i<3; i++)
    {
        if ((valeurs[i]==valeurs[i+3]==valeurs[i+6] && valeurs[i]!='.')||(valeurs[3*i]==valeurs[3*i+1]==valeurs[3*i+2] && valeurs[3*i]!='.'))
        {
            return true;
        }
    }
    return false;
}

int draw_game_board(std::array<char,9> valeurs)
{
    for (int i{0}; i<3; i++)
    {
        for (int y{0}; y<3; y++)
        {
            std::cout << "|" << valeurs[3*i + y] << "|" << valeurs[3*i + y] << "|" << valeurs[3*i + y] << "|" << std::endl;
        }
    }

    return 0;
}

