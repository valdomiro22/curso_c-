#include <iostream>
#include <stack>  // Tem que importar esta biblioteca

using namespace std;

int main() {

    stack <string> cartas;

    cout << cartas.empty() << "\n";

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Elemento que esta no topo (ultimo a ser inserido): " << cartas.top() << "\n";
    cartas.pop();  // Retira o elemento do topo
    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << cartas.empty() << "\n";
}
