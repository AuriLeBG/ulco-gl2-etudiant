#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <array>
#include <iostream>

enum class Status { Egalite, RougeGagne, VertGagne, RougeJoue, VertJoue };

enum class Cell { Vide, Rouge, Vert };

// Moteur de jeu de tictactoe.
class Jeu {
    private:
        std::array<std::array<Cell, 3>, 3> _plateau;
        Status _currentStatus;
    private:

        //Update de la status de la partie
        void changeStatus();

        //Retourne la coulour qui joue
        Cell getColorToPlay();

        //Set une cellule de la grille 
        // i ligne choisie (0, 1 ou 2)
        // j colonne choisie (0, 1 ou 2)
        // cell couleur a set  
        void SetCell(int i, int j, const Cell& cell);


        //Regarde si la partie est gagnée pour une couleur
        // cell Couleur pour laquelle on regarde si la partie est gagnée
        // Renvoie true si la partie est gagnée, false sinon
        bool CheckVictoire(Cell cell);

        bool CheckEgalite();

    public:
        // Constructeur à utiliser.
        Jeu();
        
        // Retourne le status du jeu courant (Egalite, RougeGagne, VertGagne, RougeJoue, VertJoue).
        Status getStatus() const;

        // Retourne l'état d'une case du plateau
        Cell getCell(int i, int j) const;

        // Joue un coup pour le joueur courant.
        // 
        // i ligne choisie (0, 1 ou 2)
        // j colonne choisie (0, 1 ou 2)
        // 
        // Si le coup est invalide, retourne false. Si le coup est valide,
        // joue le coup et retourne true.
        bool jouer(int i, int j);

        // Réinitialise le jeu.
        void raz();
};

std::ostream & operator<<(std::ostream & os, const Jeu & jeu);

#endif

