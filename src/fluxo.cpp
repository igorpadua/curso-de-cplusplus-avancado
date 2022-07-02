#include <iostream>
using std::cout;
using std::endl;
using std::string;

void qtd_char( string & );

int main( int argc , char **argv ){

  string str1 = "Minha corda legal";
  string str2 = "Minha corda beleza";
  //int result = str1.compare( 0, 5, str2, 0, 5 );

  //cout << ( str1 == str2 ? "Método que conhecemos: SIM, são iguais!" : "Método que conhecemos: NÃO, é diferente." ) << endl;
  //cout << ( result == 0 ? "compare(): SIM, são iguais!" : "compare(): NÃO, é diferente." ) << endl;

  //str1.swap( str2 );
  //cout << "O conteúdo de str1 é: " << str1 << endl;
  qtd_char( str1 );

  return 0;
}

void qtd_char( string &str ){
    cout << "capacity: " << str.capacity() << endl;
    cout << "size: " << str.size() << endl;
    cout << "length: " << str.length() << endl;
    cout << "empty: " << str.empty() << endl;
    str.resize( str.length() + 10 );
    cout << "size: " << str.size() << endl;
    str += "abcde";
    cout << "size: " << str.size() << endl;
    cout << "capacity: " << str.capacity() << endl;
    cout << "length: " << str.length() << endl;
}
