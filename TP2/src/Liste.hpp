#ifndef LISTE_HPP
#define LISTE_HPP
#include <iostream>

struct Noeud{

  int valeur;
  Noeud* suivant;
  Noeud(int valeur, Noeud* suivant);

};

struct Liste{

  Noeud* tete;
  Liste();
  void ajouterDevant(int valeur);
  int getTaille() const;
  int getElement(int indice) const;
  ~Liste();

};



#endif


