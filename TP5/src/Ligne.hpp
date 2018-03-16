#ifndef LIGNE_HPP
#define LIGNE_HPP

#include "Couleur.hpp"
#include "Point.hpp"
#include "FigureGeometrique.hpp"

class Ligne : public FigureGeometrique {
private :

  Point _p0;
  Point _p1;

public :
  Ligne(const Couleur& couleur, const Point& p0, const Point& p1) : FigureGeometrique(couleur),  _p0(p0), _p1(p1)
  {}
  void afficher(const Cairo::RefPtr<Cairo::Context>& context) const;
  const Point& getP0() const;
  const Point& getP1() const;
  
};

#endif
