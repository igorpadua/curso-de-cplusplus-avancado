#include <iostream>

enum class Cores {
  color_blue,
  color_purple
};

enum class Frutas {
  laranja,
  pessego
};

int main( int argc , char **argv ){

  Cores cores;
  Frutas frutas;

  std::cout << "O número de cores é: " << cores << '\n';

  return 0;
}

