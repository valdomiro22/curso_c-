#include <iostream>

using namespace std;

int main() {

    // Serve para enumerar elementos de uma lista. Se eu pesquizar pelo elemento, retornará a posição dele na lista
    // Se eu atribuir um valor, começará a contar a partir dele

    enum armas{fuzil, revolver=6, rifle, escopeta};
    armas arsenal;
    armas arsenal2;

    arsenal = rifle;
    arsenal2 = fuzil;

    cout << arsenal << endl;
    cout << arsenal2 << endl;
}
