#include <iostream>

class Carro {
    private:
        int vel_max;
        const char* nome;
    public:
        int potencia;

        int getVel_max() {
            return vel_max;
        }

        const char* gatNome() {
            return nome;
        }


        // Sobrecarga de método
        Carro() {
            vel_max = 120;
            potencia = 85;
            nome = "Popular";
        }

        Carro(int pt, const char* no): potencia(pt), nome(no) {
            if (pt < 100) {
                vel_max = 120;
            } else if(pt < 200) {
                vel_max = 240;
            } else {
                vel_max = 360;
            }
        }

        // Fim sobrecarga de método
};

using namespace std;

int main() {
    system("clear");

    Carro c1;
    cout << c1.gatNome() << " - " << c1.potencia << " - " << c1.getVel_max() << endl;

    Carro c2{300, "Esportivo"};
    cout << c2.gatNome() << " - " << c2.potencia << " - " << c2.getVel_max() << endl;
    
    Carro c3{180, "Luxo"};
    cout << c3.gatNome() << " - " << c3.potencia << " - " << c3.getVel_max() << endl;
}
