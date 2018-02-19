#include <iostream>
#include "Liste.hpp"

Noeud::Noeud(int valeur, Noeud* suivant){
  this->valeur = valeur;
  this->suivant = suivant;

}

Liste::Liste(){

  tete = nullptr;

};


void Liste::ajouterDevant(int valeur){
  
  Noeud* n = new Noeud(valeur, tete);
  tete = n;
}

int Liste::getTaille() const{

  int cmp = 0;
  Noeud* n = tete;
  while(n != nullptr){
    
    cmp = cmp + 1;
    n = n->suivant;
    
  }

  return cmp;

}

int Liste::getElement(int indice) const{

  int cmp = 0;
  Noeud* n = tete;
  while(n != nullptr && cmp != indice){
    cmp++;
    n = n->suivant; 
  }

  return n->valeur;

}

Liste::~Liste(){
  Noeud* cmp;
  Noeud* n = tete;
  while(n != nullptr){
    cmp = n->suivant;
    delete n;
    n = cmp; 
  }
}


