#include "Tictactoe.hpp"
#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE("Test initialisation")
{ 
    Jeu jeu;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            REQUIRE(jeu.getCell(i, j) == Cell::Vide);
        }
    }
}

TEST_CASE("Test setCase")
{
    Jeu jeu;
    REQUIRE(jeu.jouer(2, 2));
    REQUIRE(jeu.jouer(2, 1));
    REQUIRE(jeu.jouer(1, 1));
    REQUIRE_FALSE(jeu.jouer(1, 1));

    REQUIRE(jeu.getCell(2, 2) == Cell::Rouge);
    REQUIRE(jeu.getCell(2, 1) == Cell::Vert);
    REQUIRE(jeu.getCell(1, 1) == Cell::Rouge);
    REQUIRE(jeu.getCell(0, 0) == Cell::Vide);

    std::cout << jeu;



}


    // TODO


