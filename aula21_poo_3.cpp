#include <iostream>
#include "classes.h"

using namespace std;

int main() {

    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    v1->setLigado(1);
    v2->setLigado(0);
    v3->setLigado(1);

    cout << v1->getVelmax() << endl;
    cout << v2->getVelmax() << endl;
    cout << v3->getVelmax() << endl;

    if (v1->getLigado()) {
        cout << "\nVeiculo 1 esta ligado" << endl;
    } else {
        cout << "Veiculo 1 eata desligado" << endl;
    }

    if (v2->getLigado()) {
        cout << "Veiculo 2 esta ligado" << endl;
    } else {
        cout << "Veiculo 2 eata desligado" << endl;
    }

    if (v3->getLigado()) {
        cout << "Veiculo 3 esta ligado" << endl;
    } else {
        cout << "Veiculo 3 eata desligado" << endl;
    }
}
