#include "Bibliotheque.hpp"
#include <algorithm>
#include <fstream>


void Bibliotheque::afficher() const {

  for(int i = 0; i < size(); i++){

    std::cout << operator[](i) << std::endl;

  }

}

void Bibliotheque::trierParAuteurEtTitre(){

  std::sort(begin(), end(), *this);

}

void Bibliotheque::trierParAnnee(){

  auto fct=[](const Livre& l1, const Livre& l2){

    return l1.getAnnee() < l2.getAnnee();
    
  };

  std::sort(begin(), end(), fct);

}

bool Bibliotheque::operator()(const Livre& x, const Livre& y) const{

  return x < y;

}

void Bibliotheque::lireFichier(const std::string& nomFichier){

  std::ifstream fi (nomFichier);

  while(not fi.eof()){

    Livre l;
    fi >> l;
    push_back(l);

  }

}

void Bibliotheque::ecrireFichier(const std::string& nomFichier) const{

  std::ofstream f (nomFichier);

  for(int i; i < size(); i++){

    f << operator[](i) << std::endl;
    
  }
  
}   
