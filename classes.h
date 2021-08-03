#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {
    
    public:
        int vel;
        int tipo;

        Veiculo(int tp);

        int getVelmax();
        bool getLigado();
        void setLigado(int lig);

    private:
        std::string nome;
        int vel_max;
        bool ligado;

        void setVelMax(int vm);
};


bool Veiculo::getLigado() {
    return ligado;
}


void Veiculo::setLigado(int lig) {
    if (lig == 1) {
        ligado = true;
    } else if (lig == 0) {
        ligado = false;
    }
}


int Veiculo::getVelmax() {
    return vel_max;
}


void Veiculo::setVelMax(int vm) {
    vel_max = vm;
}


Veiculo::Veiculo(int tp) {
    tipo = tp;
    if (tipo == 1) {
        nome = "Carro";
        setVelMax(200);
    } else if (tipo == 2) {
        nome = "Avião";
        setVelMax(800);
        // vel_max = 800;
    } else if (tipo == 3) {
        nome = "Navio";
        setVelMax(120);
        // vel_max = 120;
    }

    setLigado(0);
}

#endif  // AVIAO_H_INCLUDED
