#include <iostream>
#include <memory>                               

class Carro {
    public:
    int vel_max;
    int potencia;
    const char* nome;
// Se eu utilizar o this, poderei deixar os parametro com os mesmos nomes que os atributos
// desta forma os atributos receberão os parametros mesmo eles tendo o mesmo nome
    Carro(const char* n, int p): nome(n), potencia(p) {  // Lista de inicialização
        if (p < 100) {
            this->vel_max = 120;
        } else if (p < 200) {
            this->vel_max = 220;
        } else {
            this ->vel_max = 350;
        }
    }
};

using namespace std;

int main() {
    system("clear");

    unique_ptr<Carro> c1(new Carro{"Astra", 899});
    // Seta usa-se quando tem o new, quando não tem usa o ponto
    cout << c1->nome << " - " << c1->potencia << " - " << c1->vel_max << endl;

    Carro c2{"Ventania", 300};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.vel_max << endl;

}