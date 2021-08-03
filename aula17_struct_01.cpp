#include <iostream>

using namespace std;

    struct Carro {        // É como se fosse uma classe
        string nome;
        string cor; 
        int potencia;
        int velocidade_maxima;
    };

int main() {

    Carro car1;
    Carro car2;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.potencia = 450;;
    car1.velocidade_maxima = 350;
    
    car2.nome = "Luxo";
    car2.cor = "Preto";
    car2.potencia = 250;;
    car2.velocidade_maxima = 260;

    cout << "Carro 1 Nome.............: " << car1.nome << "\n";
    cout << "Carro 1 Cor..............: " << car1.cor << "\n";
    cout << "Carro 1 Potencia.........: " << car1.potencia << "\n";
    cout << "Carro 1 Velocidade maxima: " << car1.velocidade_maxima << "\n\n";
    
    cout << "Carro 2 Nome.............: " << car2.nome << "\n";
    cout << "Carro 2 Cor..............: " << car2.cor << "\n";
    cout << "Carro 2 Potencia.........: " << car2.potencia << "\n";
    cout << "Carro 2 Velocidade maxima: " << car2.velocidade_maxima << "\n";
}
