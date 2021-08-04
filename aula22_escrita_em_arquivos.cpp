#include <iostream>
#include <fstream>

using namespace std;

int main() {

  /*
    ofstream: a informação sai do sistema e entra no arquivo
    ifstream: a informação sai do arquivo e entra no cistema
    fstream: pode se entrado ou saida
  */


  ofstream arquivo;

  arquivo.open("cfbcursos.txt", ios::app);

  arquivo << "c++ com interface grafica\nEsta sendo maneiro";

  arquivo.close();

}
