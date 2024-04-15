#include "Forme.hpp"

Disque::Disque(double rayon) :
    _rayon(rayon)
{}

Rectangle::Rectangle(double largeur, double hauteur) :
    _largeur(largeur), _hauteur(hauteur)
{}

double Rectangle::aireForme() const 
{
    return _largeur * _hauteur;
}

double Disque::aireForme() const 
{
    return _rayon * 2 * M_PI;
}
