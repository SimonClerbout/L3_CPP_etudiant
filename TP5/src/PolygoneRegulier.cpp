#include "PolygoneRegulier.hpp"
#include <iostream>
#include <cmath>

PolygoneRegulier::PolygoneRegulier(const Couleur& couleur, const Point& centre, int rayon, int nbCotes):FigureGeometrique(couleur) {

  _nbPoints = nbCotes;
  _points = new Point[nbCotes];

  for(int i = 0; i < _nbPoints; i++){

    _points[i]._x = centre._x + rayon*std::cos(3.14/_nbPoints*i);
    _points[i]._y = centre._y + rayon*std::sin(3.14/_nbPoints*i);

  }

}

void PolygoneRegulier::afficher(const Cairo::RefPtr<Cairo::Context>& context) const{

  context->set_source_rgb(1.0, 0.0, 0.0);
  context->set_line_width(100.0);
  // dessine une diagonale
  context->move_to(_points[0]._x, _points[0]._y);


  std::cout << "Polygone Regulier " << getCouleur()._r << "_" << getCouleur()._g << "_" << getCouleur()._b << " ";
  for(int i = 1; i < _nbPoints; i++){

    std::cout << _points[i]._x << "_" << _points[i]._y << " ";
    context->line_to(_points[i]._x, _points[i]._y);
    
  }
  context->line_to(_points[0]._x, _points[0]._y);
  std::cout << std::endl; 

}

int PolygoneRegulier::getNbPoints()const {

  return _nbPoints;

}


const Point& PolygoneRegulier::getPoint(int indice) const {

  return _points[indice];

}
