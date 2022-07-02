#include <iostream>

class Primeira {
  public:
    Primeira(){
      std::cout << "Iniciando a primeira ..." << '\n';
    }

    ~Primeira(){
      std::cout << "Terminando a primeira ... " << '\n';
    }

    void fmembro1(){
      std::cout << "fmembro da primeira" << '\n';
    }

};

class Segunda {
  public:

    Segunda(){
      std::cout << "Iniciando a segunda ..." << '\n';
    }

    virtual void f_membro_n_pode_ser_inst() = 0;

    ~Segunda(){
      std::cout << "Terminando a segunda ... " << '\n';
    }

    void fmembro2(){
      std::cout << "fmembro da segunda" << '\n';
    }

};

class Terceira : public Primeira, public Segunda {
  public:

    Terceira(){
      std::cout << "Iniciando a terceira ..." << '\n';
    }

    virtual void f_membro_n_pode_ser_inst(){
      std::cout << "Agora eu consigo utilizar você" << '\n';
    };

    ~Terceira(){
      std::cout << "Terminando a terceira ... " << '\n';
    }

    void fmembro3(){
      std::cout << "fmembro da terceira" << '\n';
    }

};

int main( int argc , char **argv ){
  Terceira terceira;
  terceira.fmembro2();
  terceira.f_membro_n_pode_ser_inst();
  return 0;
}

