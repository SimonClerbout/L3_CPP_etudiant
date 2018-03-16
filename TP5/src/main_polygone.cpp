#include <iostream>

#include "PolygoneRegulier.hpp"
#include "FigureGeometrique.hpp"
#include "Ligne.hpp"
#include "Couleur.hpp"
#include "Point.hpp"

int main(){
  

  Couleur c{255, 255, 255};
  Point p1{1,0};
  Point p2{0,0};
  Ligne l(c, p1, p2);

  l.afficher();

  PolygoneRegulier popol(c, p1, 3, 5);

  popol.afficher();

}
