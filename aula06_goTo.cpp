#include <iostream>

using namespace std;

int main() {

    int n1, n2, res;
    char opc;

    inicio:

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    if (res >= 60) {
        cout << "Aluno Aprovado\n";
    } else if (res >= 40) {
        cout << "Aluno em Recuperação";
    } else {
        cout << "Aluno Reprovado\n";
    }

    cout << "Digitar outras notas? [s/n]: ";
    cin >> opc;

    if (opc == 's' or opc == 'S') {  // ||   ou   'or'
        goto inicio;
    }

}