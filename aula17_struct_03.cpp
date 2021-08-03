#include <iostream>

using namespace std;

    struct Carro {        // É como se fosse uma classe
        string nome;
        string cor; 
        int potencia;
        int velocidade_maxima;
        int vel = 0;


        void insere(string st_nome, string st_cor, int st_pot, int st_vel_max) {
            nome = st_nome;
            cor = st_cor;
            potencia = st_pot;
            velocidade_maxima = st_vel_max;
        }

        void mostrar() {
            cout << "Nome.............: " << nome << "\n";
            cout << "Cor..............: " << cor << "\n";
            cout << "Potencia.........: " << potencia << "\n";
            cout << "Velocidade atual.: " << vel << "\n";
            cout << "Velocidade maxima: " << velocidade_maxima << "\n\n";
        }

        void mudar_vel(int mv) {
            vel = mv;

            if (vel > velocidade_maxima) {
                vel = velocidade_maxima;
            }

            if (vel < 0) {
                vel = 0;
            }
        }
    };

int main() {

    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;
    
    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].insere("Tornado", "Vermelho", 450, 350);
    carros[1].insere("Luxo", "Preto", 250, 260);
    carros[2].insere("Familia", "Prata", 150, 180);
    carros[3].insere("Trabalho", "Branco", 80, 120);
    carros[4].insere("Padrão", "Cinza", 100, 150);

    for (int i=0; i<5; i++) {
        carros[i].mostrar();
    }
}
