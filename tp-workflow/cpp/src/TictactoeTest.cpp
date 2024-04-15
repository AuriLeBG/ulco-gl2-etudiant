#include "Tictactoe.hpp"
#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE("Test initialisation")
{ 
    REQUIRE( true );
    Jeu jeu;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            REQUIRE(jeu.getCell(i, j) == Cell::Vide);
        }
    }

}


    // TODO


