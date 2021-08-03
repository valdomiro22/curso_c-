#include <iostream>
#include "veiculos.h"

using namespace std;

int main() {

    Moto *v1 = new Moto();
    Carro *v2 = new Carro();
    Tanque *v3 = new Tanque();

    // cout << v1->rodas << endl;

    v1->imprimir();
    v2->imprimir();
    v3->imprimir();
}
