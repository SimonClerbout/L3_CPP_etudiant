#include <iostream>
#include "Produit.hpp"


int Produit::getId() const {

  return _id;

}

const std::string& Produit::getDescription() const {

  return _description;

}

void Produit::afficherProduit() const {

 std::cout << "Produit(" << _id << ", " << _description << ")" << std::endl; 

}
