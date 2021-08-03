#ifndef VEICULOS_H_INCLUDED
#define VEICULOS_H_INCLUDED

class Veiculo {
    public:
        int vel;
        int blindagem;
        int qt_rodas;

        // Gethers e seters
        void setTipo(int tp);
        void setVelMax(int vm);
        void setArma(bool ar);

        void imprimir();

    private:
        int tipo;
        int vel_max;
        bool arma;
};


void Veiculo::imprimir() {
    std::cout << "Tipo de veiculo.....: " << tipo << std::endl;
    std::cout << "Velocidade maxima...: " << vel_max << std::endl;
    std::cout << "Quantidade de rodas.: " << qt_rodas << std::endl;
    std::cout << "Blindagem...........: " << blindagem << std::endl;
    std::cout << "Armamento...........: " << arma << std::endl;
    std::cout << std::endl;
}


void Veiculo::setTipo(int tp) {
    tipo = tp;
}

void Veiculo::setVelMax(int vm) {
    vel_max = vm;
}

void Veiculo::setArma(bool ar) {
    arma = ar;
}


class Moto:public Veiculo {  // A classe moto herda todos os elementos da classe veiculo
    public:
        Moto();
};


Moto::Moto() {
    vel = 0;
    blindagem = 0;
    qt_rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}


class Carro:public Veiculo {  // Carro usa tudo de Veiculo
    public:
        Carro();
};

Carro::Carro() {
    vel = 0;
    blindagem = 0;
    qt_rodas = 4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}


class Tanque:public Veiculo {  // Carro usa tudo de Veiculo
    public:
        Tanque();
};

Tanque::Tanque() {
    vel = 68;
    blindagem = 8;
    qt_rodas = 4;
    setTipo(4);
    setVelMax(200);
    setArma(true);
}

#endif