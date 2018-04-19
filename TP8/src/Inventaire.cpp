#include "Inventaire.hpp"

std::ostream& operator<<(std::ostream& s, const Inventaire inv){

  
  for(unsigned int i = 0; i < inv._bouteilles.size(); i++){

    s << inv._bouteilles[i];
  
  }

  return s;

}

