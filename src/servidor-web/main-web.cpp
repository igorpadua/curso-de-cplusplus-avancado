#include <iostream>
#include <vector>
#include <cstring>

int main( int argc , char **argv ){
  std::cout << "content-type: text/html\n\n";
  std::cout << "<meta charset='utf-8'>\n\n";
  std::cout << "<h1>Variáveis de Ambiente</h1>\n";

  std::vector<std::string> v = {"DOCUMENT_ROOT", "GATEWAY_INTERFACE","HTTP_ACCEPT", "HTTP_ACCEPT_ENCODING",
                                   "HTTP_ACCEPT_LANGUAGE", "HTTP_CONNECTION","HTTP_HOST", "HTTP_USER_AGENT", "PATH","QUERY_STRING", 
                                   "REMOTE_ADDR", "REMOTE_PORT","REQUEST_METHOD", "REQUEST_URI", "SCRIPT_FILENAME","SCRIPT_NAME", 
                                   "SERVER_ADDR", "SERVER_ADMIN","SERVER_NAME","SERVER_PORT","SERVER_PROTOCOL","SERVER_SIGNATURE",
                                   "SERVER_SOFTWARE"};
  std::cout << "<table border='1'>\n";
  for( auto it = v.begin(); it != v.end(); ++it ){
    char * valor = getenv( (*it).c_str() );
    if( valor != 0 ){
      std::cout << "<tr><td><b>" << *it << "</b></td><td>" << valor << "</td></tr>\n";
    }
  }
  std::cout << "</table>\n";

  return 0;
}

