#ifndef BIBLI_HPP
#define BIBLI_HPP

#include "Livre.hpp"
#include <vector>

class Bibliotheque : public std::vector<Livre> {
  
public:
  void afficher() const;
  void trierParAuteurEtTitre();
  void trierParAnnee();
  virtual bool operator()(const Livre& x, const Livre& y) const;
  void lireFichier(const std::string& nomFichier);
  void ecrireFichier(const std::string& nomFichier) const;

};


#endif

