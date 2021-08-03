#include <iostream>
#include <list>

using namespace std;

int main() {

    list <int> aula;

    int tamanho = 10;

    list <int>:: iterator it;  // iterator


    for (int i=0; i<tamanho; i++) {
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0);  // Atribui o valor 0 na posição it = 5
    advance(it, 5+2);
    aula.erase(it);


    cout << "Tamanho da lista: " << aula.size() << "\n";

    tamanho = aula.size();

    for (int i=0; i<tamanho; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();
    }


    // Merge: mescla duas listas
}
