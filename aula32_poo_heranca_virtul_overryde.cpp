#include <iostream>

using namespace std;

class Veiculo {
    private:
        const char* nome;
        const char* cor;

    public:
        int vel_max;
        int rodas;

        void setNome(const char* no) {
            nome = no;
        }

        const char* getNome() {
            return nome;
        }

        void setCor(const char* co) {
            cor = co;
        }

        const char* getCor() {
            return cor;
        }


        virtual void imprimir() {  // Este metodo poderá ser sobrescrito por alguma classe que
            cout << "Nome:.......: " << nome << endl;  // herdar esta classe
            cout << "Cro.........: " << cor << endl;
            cout << "Rodad.......: " << rodas << endl;
            cout << "Vel. Max....: " << vel_max << endl << endl;
        }
};



class Carro:public Veiculo {
	public:
		Carro() {
			vel_max = 160;
			rodas = 4;
			setNome("Carro");
			setCor("Branco");
		}
};


class Moto:public Veiculo {
	public:
		Moto() {
			vel_max = 200;
			rodas = 2;
			setNome("Moto");
			setCor("Preta");
		}
};


class Militar:public Veiculo {
    public:
        int municao;
        bool armamento;

        Militar(bool arma, int mo):armamento(arma), municao(mo) {
            vel_max = 150;
            rodas = 6;
            setNome("Tanque");
            setCor("Verde");

            if (arma) {
                municao = mo;
            } else {
                municao = 0;
            }
        }

        void imprimir() override {  // override sobrescreve onde esta escrito virtual
            cout << "Nome:.......:" << getNome() << endl;  // Como nome e cor são private
            cout << "Cro.........: " << getCor() << endl;  // Tenho que colocar o get
            cout << "Rodad.......: " << rodas << endl;
            cout << "Vel. Max....: " << vel_max << endl;
            cout << "Armamento...: " << armamento << endl;
            cout << "Munição.....: " << municao << endl << endl;
        }
};


int main() {
    system("clear");

    Carro v1;
    v1.imprimir();

    Moto v2;
    v2.imprimir();

    Militar v3{false, 200};
    v3.imprimir();

    Militar v4{true, 235};
    v4.imprimir();
}
