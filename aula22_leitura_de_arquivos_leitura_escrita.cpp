#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

  /*
    ofstream: a informação sai do sistema e entra no arquivo
    ifstream: a informação sai do arquivo e entra no cistema
    fstream: pode se entrado ou saida
  */


  fstream arquivo;
  char opc = 's';
  string nome, linha;

  // Escreita
  // arquivo.open("arquivo2.txt", ios::out|ios::app);
  arquivo.open("arquivo2.txt", ios::out | ios::app);
  // arquivo.open("arquivo2.txt", ios::out);

  while(opc == 's' or opc == 'S') {
    cout << "Digite un nome: ";
    cin >> nome;
    arquivo << nome << "\n";

    cout << "Digitar um novo nome [s/n]: ";
    cin >> opc;
  }

  arquivo.close();

  // system("clear");

  // Leitura
  // arquivo.open("arquivo2.txt", ios::in);

  cout << "Nomes Digitados " << endl;

  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      cout << linha << endl;
    }
  } else {
    cout << "Não foi possivel abrir o arquivo" << endl;
  }


  arquivo.close();
}
