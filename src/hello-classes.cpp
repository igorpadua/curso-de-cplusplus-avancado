#include <iostream>

class Hello{
  public:
    void helloworld(){
      std::cout << "Olá, Mundo!" << '\n';
    }
};

int main( int argc , char **argv ){
  Hello hello;
  hello.helloworld();
  return 0;
}

