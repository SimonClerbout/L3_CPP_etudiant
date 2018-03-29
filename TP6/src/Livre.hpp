#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
#include <iostream>

class Livre {

private :
  std::string _titre;
  std::string _auteur;
  int _annee;

public :
  Livre();
  Livre(const std::string& titre, const std::string& auteur, int annee);
  const std::string& getTitre() const;
  const std::string& getAuteur() const;
  int getAnnee() const;
  virtual bool operator<(const Livre& x) const;
  friend bool operator==(const Livre& a, const Livre& b);
  friend std::ostream& operator<<(std::ostream& o, const Livre& l);
  friend std::istream& operator>>(std::istream& i, Livre& l);
  
};

bool operator==(const Livre& a, const Livre& b);
std::ostream& operator<<(std::ostream& o, const Livre& l);
std::istream& operator>>(std::istream& i, Livre& l);

#endif
