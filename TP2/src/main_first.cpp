#include <iostream>

int main(){

  int x = 12;
  int* y = nullptr;
  int** w = nullptr;

  y = &x;
  w = &y;

  std::cout << "Valeur de x : " << *y << std::endl;
  std::cout << "Adresse de x : " << y << std::endl;
  std::cout << "Valeur de y : " << *w << std::endl;
  std::cout << "Adresse de y : " << w << std::endl;
  std::cout << "Valeur de x : " << **w << std::endl;
  
  return 0;
  
}
