#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main() {
    system("clear");

    // int vetor[] = {6, 8, 4, 14, 25, 36, 24};
    // int *p;

    // size_t tamanho = sizeof vetor / 4;
    // p = find(vetor, vetor + tamanho, 6);
    // if (p != vetor + tamanho) {
    //     cout << "Numeral econtrado: " << *p << endl;
    // } else {
    //     cout << "Numeral não econtrado: " << endl;
    // }
    
    
    // vector<int> numeros = {6, 8, 4, 14, 25, 36, 24};

    // auto it = find(numeros.begin(), numeros.end(), 14);

    // if (it != numeros.end()) {
    //     cout << "Numeral econtrado: " << *it << endl;
    // } else {
    //     cout << "Numeral não econtrado: " << endl;
    // }
    
    
    // list<int> numeros = {6, 8, 4, 14, 25, 36, 24};

    // auto it = find(numeros.begin(), numeros.end(), 14);

    // if (it != numeros.end()) {
    //     cout << "Numeral econtrado: " << *it << endl;
    // } else {
    //     cout << "Numeral não econtrado: " << endl;
    // }
    
    vector<int> numeros;
    vector<int>:: iterator it;

    int num, qt = 10;

    while (qt > 0) {
        cout << "Digite um numero: ";
        cin >> num;

        it = find(numeros.begin(), numeros.end(), num);

        if(it != numeros.end()) {
            cout << "number alredy exists on the vector" << endl;
        } else {
            numeros.push_back(num);
            qt--;
        }
    }

    for (int i:numeros) {
        cout << i << endl;
    }
}
