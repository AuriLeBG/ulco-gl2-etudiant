#pragma once

#include "Forme.hpp"

#include <iostream>
#include <memory>
#include <vector>

class Canevas {
    private:
        std::vector<std::unique_ptr<Forme>> _formes;

    public:
        void ajouterDisque(int rayon);
        void ajouterRectangle(int largeur, int hauteur);
        double aireTotale() const;
        std::vector<Description> resume() const;
        std::vector<Description> descriptions() const;
};

