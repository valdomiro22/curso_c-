#include <iostream>
#include <vector>  // Tem que importar esta biblioteca

using namespace std;

int main() {

    // Verctor é um array mais moderno
    // Não é preciso espcificar tamanho, mas se queiser póde -> nome(tamanho);

    vector <int> numero;
    vector <int> numero1;

    int tamanho, i;

    numero.push_back(23);
    numero.push_back(17);
    numero.push_back(74);
    numero.push_back(91);

    numero.insert(numero.begin()+1, 88);  // Irá inserir o valor 88 na posição 1
    numero.insert(numero.end(), 495);  // Irá inserir o valor 495 no final
    numero.insert(numero.end()-1, 357);  // Irá inserir o valor 357 na penultima posição
    numero.erase(numero.end()-1);  // Apaga a penultima posição
    numero.pop_back();  // Retira o ultimo elemento


    numero1.push_back(52);
    numero1.push_back(42);
    numero1.push_back(11);
    numero1.push_back(28);

    // Troca os valores de numero pelos de numero1
    // numero.swap(numero1);  

    tamanho = numero.size();

    cout << "\nPrimeiro elemento de numero (primeiro vector): " << numero.front() << endl;
    cout << "Ultimo elemento de numero1 (primeiro vector).: " << numero.back() << "\n";
    cout << "Elemento do meio do numero1 (segundo vector).: " << numero.at(tamanho/2) << "\n\n";  // Posso indicar a posição exata que eu quero tambêm



    cout << "Tamanho do vector: " << tamanho << "\n";

    for (i = 0; i < numero.size(); i++) {
        cout << numero[i] << " ";
    }

    cout << endl;

    for (i = 0; i < numero1.size(); i++) {
        cout << numero1[i] << " ";
    }

    cout << endl;

}
