#pragma once

#include <cmath>
#include <numeric>
#include "Descriptible.hpp"

class Forme : public Descriptible
{
    public:
        virtual ~Forme() = default;
        virtual double aireForme() const = 0;
};

class Disque : public Forme {
    public:
        Disque(double rayon);
        double aireForme() const override;
    private:
        double _rayon;

};

class Rectangle : public Forme {
    public:
        double aireForme() const override;
        Rectangle(double largeur, double hauteur);
    private:
        double _largeur;
        double _hauteur;
};

