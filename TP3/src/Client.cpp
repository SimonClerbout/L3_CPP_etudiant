#include <iostream>
#include "Client.hpp"

int Client::getId() const{

  return _id;

}

const std::string& Client::getNom() const{

  return _nom;

}

void Client::afficherClient() const{

  std::cout << "Client(" << _id << ", " << _nom << ")" << std::endl;
  
}
