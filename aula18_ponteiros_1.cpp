#include <iostream>

using namespace std;

int main() {

    string veiculo = "Carro";
    string *pt;

    pt = &veiculo;  // Ponteiro pt recebe o endereço da variavel veiculo

    cout << "pt: " << pt << "\n\n" << &veiculo << "\n";

    *pt = "Moto";  // No endereço apontado por *pt adicione o valor "Moto"
    cout <<  " pt: " << pt << "\n\n" << &veiculo << "\n";

    cout <<  " veiculo: " << veiculo << "\n\n" << &pt << "\n";

}
