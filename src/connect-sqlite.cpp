#include <iostream>
#include <sqlite3.h>

int main( int argc , char **argv ){

  sqlite3 * DB;
  bool connect = sqlite3_open("banco_de_dados.db", &DB);

  if( connect ){
    std::cerr << "Erro ao conectar ao banco de dados." << sqlite3_errmsg(DB) << '\n';
    return 1;
  }else{
    std::cout << "Conectado com SUCESSO ao Banco de Dados!" << '\n';
    sqlite3_close( DB );
  }

  return 0;
}

