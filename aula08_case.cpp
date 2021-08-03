#include <iostream>

using namespace std;

int main() {

    int val;

    cout << "Selecione uma opção\n";
    cout << "[1] - Verde\n";
    cout << "[2] - Azul\n";
    cout << "[3] - Vermelho\n";

    cin >> val;

    switch (val) {
        case 1:
        case 9:
        case 6:
            cout << "Cor escolhida: Verde\n";
            break;
        case 2:
            cout << "Cor escolhida: Azul\n";
            break;
        case 3:
        case 7:
        case 4:
            cout << "Cor escolhida: Vermelho\n";
            break;
        default:
            cout << "Valor invalido\n";
    }
}