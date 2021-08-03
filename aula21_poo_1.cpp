#include <iostream>

using namespace std;

class Aviao {

    public:
        int vel = 0;
        int vel_max;
        string tipo;
        void iniciar(int tp_aviao);

    private:
};


void Aviao::iniciar(int tp_aviao) {
    if (tp_aviao == 1) {
        this->vel_max = 800;
        this->tipo = "Jato";
    } else if (tp_aviao == 2) {
        this->vel_max = 350;
        this->tipo = "Monomotor";
    } else if (tp_aviao == 3) {
        this->vel_max = 180;
        this->tipo = "Planador";
    }
}


int main() {

    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();

    av1->iniciar(1);
    av2->iniciar(2);

    cout << "av1: " << av1->vel_max << endl;
    cout << "av2: " << av2->vel_max << endl;
    
}
