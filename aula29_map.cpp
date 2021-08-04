#include <iostream>
#include <map>

using namespace std;

int main() {
    system("clear");

    map<int, string> produto;
    map<int, string>::iterator itmap;

    // produto[0] = "Mouse";
    // produto[1] = "Teclado";
    // produto[2] = "Monitor";
    // produto[3] = "Cx. Som";

    // for (int i = 0; i < 4; i++) {
    //     cout << produto[i] << endl;
    // }

    // for (auto it = produto.begin(); it != produto.end(); it++) {
    //     cout << it->second << endl;  // first = chave, second = valor
    // }
    
    produto.insert(pair<int, string>(0, "Mouse"));
    produto.insert(pair<int, string>(1, "Teclado"));
    produto.insert(pair<int, string>(2, "Monitor"));
    produto.insert(pair<int, string>(3, "Cx. som"));
    produto.insert(pair<int, string>(4, "Microfone"));
    produto.insert(pair<int, string>(5, "Liquidificador"));
    produto.insert(pair<int, string>(6, "Celular"));
    produto.insert(pair<int, string>(7, "TV 90Pl"));

    // produto.erase(2);  // Apaga elementos com base na chave
    produto.erase(produto.begin(), produto.find(4));  // apago um intervalo de charves

    itmap = produto.find(1);  // Pesquisa chave
    if (itmap == produto.end()) {
        cout << "Produto não encontrado" << endl;
    } else {
        cout << "Produto em estoque " << endl;
        cout << "Codigo: " << itmap->first << "     Produto: " << itmap->second << endl;
    }

    for (auto i:produto) {
        cout << i.second << endl;
    }
}
