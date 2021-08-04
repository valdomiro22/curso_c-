#include <iostream>
#include <fstream>

using namespace std;

int main() {

  /*
    ofstream: a informação sai do sistema e entra no arquivo
    ifstream: a informação sai do arquivo e entra no cistema
    fstream: pode se entrado ou saida
  */


  ifstream arquivo;

  string linha;

  arquivo.open("cfbcursos.txt");

  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      cout << linha << endl;
    }
  } else {
    cout << "Não foi possivel abrir um";
  }

  arquivo.close();

}
