#include <iostream>

struct Player {
    std::string name {};
    char symbole {}; //X ou O
};

Player create_player()
{
    Player Joueur{};
    std::cout << "Quels est le nom du joueur ? ";
    std::cin >> Joueur.name;
    std::cout << "Choisissez un symbole (de préférence entre X et O) : ";
    std::cin >> Joueur.symbole;
    return Joueur;
}
