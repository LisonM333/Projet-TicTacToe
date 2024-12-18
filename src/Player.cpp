#include <iostream>
#include "Player.hpp"

Player create_player()
{
    Player Joueur{};
    std::cout << "Quels est le nom du joueur ? ";
    std::cin >> Joueur.name;
    std::cout << "Choisissez un symbole (de preference entre X et O) : ";
    std::cin >> Joueur.symbole;
    return Joueur;
}

Player create_AI(char sym_joueur)
{
    Player AI{};
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