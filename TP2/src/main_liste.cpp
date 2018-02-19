#include <iostream>
#include "Liste.hpp"


int main(){

  Liste l;
  //Noeud* n = new Noeud();
  
  l.ajouterDevant(13);
  l.ajouterDevant(37);
  std::cout << l.getTaille() << std::endl;
  for(int i = 0; i < l.getTaille(); i++){

    std::cout << l.getElement(i) << std::endl;

  }
  
  return 0;

}
