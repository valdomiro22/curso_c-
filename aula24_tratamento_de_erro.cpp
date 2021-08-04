#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double, double);

int main() {
    system("clear");

    // Exemplo 1
    // vector <int> num(5);

    // try {
    //     num.at(6) = 10;
    //     cout << num[0] << endl;    
    // } catch (exception& e) {
    //     cout << "ERRO: " << e.what() << endl;
    // }
    
    
    // Exemplo 1
    double n1, n2;

    cin >> n1 >> n2;

    try {
        cout << divide(n1, n2);
    } catch (const char* e) {
        cout << "Erro: " << e << endl;
    }
}

double divide(double n10, double n20) {
    if (n20 == 0) {
        throw "Erro de divisão por ZERO";
    }

    return n10 / n20;
}
