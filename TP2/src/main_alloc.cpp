#include <iostream>

struct S{

  int x;
  int y;

};

int main(){

  S* a = nullptr;
  a = new S;

  std::cout << "Valeur de a :" << *a << std::endl;
  std::cout << "Adresse de a :" << &a << std::endl;  

  delete a;

  return 0;
}
