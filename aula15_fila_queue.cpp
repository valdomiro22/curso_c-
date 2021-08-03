#include <iostream>
#include <queue>  // Tem que faze import desta biblioteca

using namespace std;

int main() {

    queue <string> cartas;

    cout << "Esta vazia: " << cartas.empty() << "\n";

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta: " << cartas.back() << "\n";
    cout << "Esta vazia: " << cartas.empty() << "\n";

    cartas.pop();
    cout << "Primeira carta: " << cartas.front() << "\n";
}
