#include <iostream>
#include <vector>
#include <string>

#include "Location.hpp"
#include "Magasin.hpp"
#include "Client.hpp"
#include "Produit.hpp"

int main(){

  std::string description =  "produit";
  std::string nom = "toto";

  /*Produit p(1, description);
  p.afficherProduit();

  Client c(1, nom);
  c.afficherClient();

  Location l(1, 1);
  l.afficherLocation();*/

  Magasin m;
  m.ajouterProduit("bière");
  m.afficherProduits();

}
