#include<iostream>
//#include <terminal_ctrl/terminal_ctrl.h>
#include<array>
#include "Board.hpp"
#include "Player.hpp"

bool end_game(std::array<char,9> const& valeurs)
{
    if (((valeurs[0]==valeurs[4] && valeurs[4]==valeurs[8])||(valeurs[2]==valeurs[4] && valeurs[4]==valeurs[6])) && valeurs[4]!='.')
    {
        return true;
    }
    for (int i{0}; i<3; i++)
    {
        if ((valeurs[i]==valeurs[i+3] && valeurs[i+3]==valeurs[i+6] && valeurs[i]!='.')||(valeurs[3*i]==valeurs[3*i+1] && valeurs[3*i+1]==valeurs[3*i+2] && valeurs[3*i]!='.'))
        {
            return true;
        }
    }
    return false;
}

bool no_end(std::array<char,9> const& valeurs)
{
    if (valeurs[0]!='.' && valeurs[1]!='.' && valeurs[2]!='.' && valeurs[3]!='.' && valeurs[4]!='.' && valeurs[5]!='.' && valeurs[6]!='.' && valeurs[7]!='.' && valeurs[8]!='.')
    {
        return true;
    }
    return false;
}

int draw_game_board(std::array<char,9> const& valeurs)
{
    // terminal_ctrl::clear_terminal();
    // terminal_ctrl::move_cursor(1, 3);
    std::cout << std::endl;
    for (int i{0}; i<3; i++)
    {
        
        std::cout << "|" << valeurs[3*i + 0] << "|" << valeurs[3*i + 1] << "|" << valeurs[3*i + 2] << "|" << std::endl;
    }
    std::cout <<"_________________________________________________"<< std::endl;
    std::cout << std::endl;
    return 0;
}

Deroulement Round_JxJ (Deroulement& avancement)
{
    avancement.nb_tour += 1;
    Player sauvegarde {avancement.tour_de};
    avancement.tour_de = avancement.prochain;
    avancement.prochain = sauvegarde;
    std::cout << avancement.tour_de.name << " (" << avancement.tour_de.symbole << ") joue : ";
    int coup {};
    std::cin >> coup;
    coup-=1;
    if (avancement.board[coup]!='.')
    {
        std::cout << "Erreur : la case est deja utilisee ! Reessayez : ";
        std::cin >> coup;
        coup-=1;
    }
    avancement.board[coup]=avancement.tour_de.symbole;
    return avancement;
}

Deroulement Round_JxAI (Deroulement& avancement)
{
    if (avancement.tour_de.name == "AI")
    {
        return Round_JxJ(avancement);
    }
    avancement.nb_tour += 1;
    Player sauvegarde {avancement.tour_de};
    avancement.tour_de = avancement.prochain;
    avancement.prochain = sauvegarde;
    int coup {};
    coup= std::rand() % 9;
    while (avancement.board[coup]!='.')
    {
        coup= std::rand() % 9;
    }
    avancement.board[coup]=avancement.tour_de.symbole;
    return avancement;
}

int Partie_JxJ()
{
    Player joueur1 {create_player()};
    Player joueur2 {create_player()};
    std::array<char, 9> board {};
    board.fill('.');
    Deroulement avancement {joueur2,joueur1,board,0};
    draw_game_board(board);
    while (!end_game(avancement.board) && !no_end(avancement.board))
    {
        avancement = Round_JxJ(avancement);
        draw_game_board(avancement.board);
    }
    if (end_game(avancement.board))
    {
        std::cout << "Felicitation : " << avancement.tour_de.name << " a gagne !";
    }
    else if (no_end(avancement.board))
    {
        std::cout << "Aucun joueur n'a gagne ...";
    }
    return 0;
}

int Partie_JxAI()
{
    Player joueur {create_player()};
    Player AI {create_AI(joueur.symbole)};
    std::array<char, 9> board {};
    board.fill('.');
    Deroulement avancement {AI,joueur,board,0};
    draw_game_board(board);
    while (!end_game(avancement.board) && !no_end(avancement.board))
    {
        avancement = Round_JxAI(avancement);
        draw_game_board(avancement.board);
    }
    if (end_game(avancement.board))
    {
        if (avancement.tour_de.name!="AI")
        {
            std::cout << "Felicitation : " << avancement.tour_de.name << " a gagne !";
        }
        else
        {
            std::cout << "Dommage, vous avez perdu.";
        }
    }
    else if (no_end(avancement.board))
    {
        std::cout << "Aucun joueur n'a gagne ...";
    }
    return 0;
}
