#include <iostream>
#include "Player.hpp"

struct player {
    std::string name {};
    char symbole {}; //X ou O
};

player create_player()
{
    player Joueur{};
    std::cout << "Quels est le nom du joueur ? ";
    std::cin >> Joueur.name;
    std::cout << "Choisissez un symbole (de préférence entre X et O) : ";
    std::cin >> Joueur.symbole;
    return Joueur;
}

player create_AI(char sym_joueur)
{
    player AI{};
    AI.name = "AI";
    if (sym_joueur!='O' && sym_joueur!='0' && sym_joueur!='o')
    {
        AI.symbole = 'O';
    }
    else
    {
        AI.symbole = 'X';
    }
    return AI;
}