#include <iostream>
#include "header.hpp"
#include "Player.hpp"

int main ()
{
    std::cout << "Bienvenue dans le jeu du TicTacToe";
    std::cout << "Veuillez choisir un mode de jeu :";
    std::cout << "1. Deux joueurs";
    std::cout << "2. Un joueur contre l'IA";
    int mode_de_jeu{};
    std::cin >> mode_de_jeu;
    switch (mode_de_jeu)
    {
        case 1 :
            Board::Partie_JxJ();
            break;
        case 2 :
            Board::Partie_JxAI();
            break;
        default :
            break;
    }
    return 0;
}