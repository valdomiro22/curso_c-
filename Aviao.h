#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao {

    public:
        int vel = 0;
        int vel_max;
        std::string tipo;

        // Construtor
        Aviao(int tp_aviao);

        // Metodo
        void imprimir();

    private:
};


// Construtor
Aviao::Aviao(int tp_aviao) {
    if (tp_aviao == 1) {
        tipo = "Jato";
        vel_max = 800;
    } else if (tp_aviao == 2) {
        tipo = "Monomotor";
        vel_max = 350;
    } else if (tp_aviao == 3) {
        tipo = "Planador";
        vel_max = 180;
    }
}


// Metodo
void Aviao::imprimir() {
    std::cout << "Tipo..............:" << tipo << std::endl;
    std::cout << "Velocidade maxima.:" << vel_max << std::endl;
    std::cout << "Velocidade atual..:" << vel << std::endl;
    std::cout << std::endl;
}

#endif
