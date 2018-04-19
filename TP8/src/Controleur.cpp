#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
  //chargerInventaire();
  _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
  _vues.push_back(std::make_unique<VueConsole>(*this));
   
								       
}

void Controleur::run() {
    for (auto & v : _vues)
        v->run();
}

void Controleur::actualiser(){
  std::cout << "test" << std::endl;
    for (auto & v : _vues)
        v->actualiser();


}

std::string Controleur::getTexte(){

  std::ostringstream str;
  str << _inventaire;
  return str.str();

}

void Controleur::chargerInventaire(const std::string & nomFichier){

  _inventaire._bouteilles.push_back(Bouteille{"La Chouffe", "2016-11-08", 0.75});
  actualiser();


}
