#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    system("clear");

    // Forma 1
    // pair <int, string> par(10, "Bruno");
    // cout << par.first << " -- " << par.second << endl;

    // pair <int, string> par2;
    // par2.first = 325;
    // par2.second = "CFB Cursos";
    // cout << par2.first << " -- " << par2.second << endl;
    
    
    // Forma 2
    // const int tamanho = 3;
    
    // pair <int, string> par[tamanho];
    // par[0].first = 392;
    // par[1].second = "CFB Cursos";

    // par[1].first = 958;
    // par[1].second = "Bruno";

    // par[2].first = 753;
    // par[2].second = "Curso de C++";

    // cout << par[2].first << " -- " << par[2].second << endl;


    // Forma 3
    // const int tamanho = 3;
    
    // pair <int, string> par[tamanho];
    // par[0] = make_pair(853, "Bruno");
    // par[1] = make_pair(566, "Curso de C++");
    // par[2] = make_pair(148, "CFB Cursos");

    // cout << par[2].first << " -- " << par[1].second << endl;
    
    
    // Forma 4 - pair com outro pair dentro, para capturar 3 valores -> 592 -- Teclado -- 83.21
    // const int tamanho = 3;
    
    // pair <int, pair <string, double>> par[tamanho];
    // par[0] = make_pair(592, make_pair("Mouse", 83.21));
    // par[1] = make_pair(592, make_pair("Teclado", 813.21));
    // par[2] = make_pair(592, make_pair("Monitor", 1298.65));

    // cout << par[2].first << " -- " << par[1].second.first << " -- " << par[0].second.second << endl;


    // Forma 5 - Usanto vector
    const int tamanho = 3;

    vector<pair<int, string>> produto;

    produto.push_back(make_pair(53, "Mouse"));
    produto.push_back(make_pair(46, "Teclado"));
    produto.push_back(make_pair(72, "Monitor"));

    for (auto i: produto) {
        cout << i.first << " -- " << i.second << endl;
    }

}
