#include <iostream>

inline int p_mais_dois( int * x ){
  *x = *x + 2;
  return *x;
}

inline int mais_dois( int x ){
  x = x + 2;
  return x;
}

int main( int argc , char **argv ){
  int x = 9;
  std::cout << "O valor de x ANTES é: " << x << '\n';
  std::cout << "O valor de 9 mais 2 é: " << mais_dois( x ) << '\n';
  std::cout << "O valor de x DEPOIS é: " << x << '\n';
  return 0;
}

