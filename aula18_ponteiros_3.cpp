#include <iostream>

void somar(float *var, float valor);


using namespace std;

int main() {

    float numero = 0;

    somar (&numero, 15);

    cout << numero << "\n";
}


void somar(float *var, float valor) {
    *var += valor;
}