#include <iostream>
#include "Board.hpp"
#include "Player.hpp"

int main ()
{
    std::cout << "Bienvenue dans le jeu du TicTacToe"<<std::endl;
    std::cout << "Veuillez choisir un mode de jeu :"<<std::endl;
    std::cout << "1. Deux joueurs"<<std::endl;
    std::cout << "2. Un joueur contre l'IA"<<std::endl;
    int mode_de_jeu{};
    std::cin >> mode_de_jeu;
    switch (mode_de_jeu)
    {
        case 1 :
            Partie_JxJ();
            break;
        case 2 :
            Partie_JxAI();
            break;
        default :
            break;
    }
    return 0;
}