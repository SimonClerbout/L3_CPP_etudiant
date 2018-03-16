#ifndef FIGUREGEOMETRIQUE_HPP
#define FIGUREGEOMETRIQUE_HPP
#include <gtkmm.h>
#include <cairo.h>
#include "Couleur.hpp"

class FigureGeometrique {
protected:
  Couleur _couleur;

public:
  FigureGeometrique(const Couleur& couleur) : _couleur(couleur)
  {}
  const Couleur&  getCouleur() const;
  virtual void afficher(const Cairo::RefPtr<Cairo::Context>& context) const = 0;
};

#endif
  
