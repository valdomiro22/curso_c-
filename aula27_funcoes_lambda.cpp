#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("clear");

    [](){};  // Corpo basico de uma função lambda

    // auto maior = [](int n1, int n2)->int {
    //     return (n1 > n2) ? n1 : n2;
    // };

    int x1, x2, x3, x4;
    x1 = 23;
    x2 = 53;
    x3 = 83;
    x4 = 95;
    // [=] Captura todas as variaveis do escopo
    auto soma = [x1, x2, x3, x4]()->int {  
        return x1 + x2 + x3 + x4; 
    };

    cout << "Soma: " << soma() << endl;

    // auto maior = [](vector<int>n)->int {
    //     auto m = 0;
    //     for (int x:n) {
    //         m = (m > x) ? m : x;
    //     }

    //     return m;
    // };

    // cout << "Maior: " << maior({5, 8, 98, 64 ,45 ,9 ,8 , 5,87 ,6}) << endl;
    
    auto maior = [=](vector<int>n)->int {
        auto m = 0;
        for (int x:n) {
            m = (m > x) ? m : x;
        }

        return m + x1 + x2 + x3 + x4;
    };

    cout << "Maior: " << maior({5, 8, 98, 64 ,45 ,9 ,8 , 5,87 ,6}) << endl;

}
