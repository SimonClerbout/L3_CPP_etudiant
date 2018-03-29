#include "Livre.hpp"
#include <string>

Livre::Livre() :   _titre(""), _auteur(""), _annee(){}

Livre::Livre(const std::string& titre, const std::string& auteur, int annee) : _titre(titre), _auteur(auteur), _annee(annee) {

  try{

    if((titre.find(";")!=std::string::npos) || (auteur.find(";")!=std::string::npos)){

      throw std::string("Point virgule détecté");
      
    }

     if((titre.find("\n")!=std::string::npos) || (auteur.find("\n")!=std::string::npos)){

      throw std::string("Retour chariot détecté");
      
    }

  }catch(std::string const& erreur){

    std::cerr << erreur << std::endl;

  }

}

const std::string& Livre::getTitre() const{

  return _titre;

}

const std::string& Livre::getAuteur() const{

  return _auteur;

}

int Livre::getAnnee() const{

  return _annee;

}

bool Livre::operator<(const Livre& x) const{

  if(_auteur < x._auteur){

    return true;

  }
  else if((_auteur == x._auteur) && (_titre < x._titre)){

      return true;

  }

  return false;

}

bool operator==(const Livre& a, const Livre& b){

  return((a._titre==b._titre) and (a._auteur==b._auteur) and (a._annee==b._annee));
  
}

std::ostream& operator<<(std::ostream& o, const Livre& l){

  o << l.getTitre() << ";" << l.getAuteur() << ";" << l.getAnnee();

  return o;
  
}

std::istream& operator>>(std::istream& i, Livre& l){

  std::string annee;
  
  std::getline(i, l._titre);
  std::getline(i, l._auteur);
  std::getline(i, annee);
  l._annee = atoi(annee.c_str());
  return i;

}





