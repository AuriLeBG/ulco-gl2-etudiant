#include "Canevas.hpp"


#include <cmath>
#include <numeric>

void Canevas::ajouterDisque(int rayon) {
    _formes.push_back(std::make_unique<Disque>(rayon));
}

void Canevas::ajouterRectangle(int largeur, int hauteur) {
    _formes.push_back(std::make_unique<Rectangle>(largeur, hauteur));
}

double Canevas::aireTotale() const {
    double res = 0.0;
    for (const auto & f : _formes)
        res += f.get()->aireForme();
    return res;
}


