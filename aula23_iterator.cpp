#include <iostream>
#include <vector>

using namespace std;

int main() {

    // system("clear");

    vector <string> produtos = {"Mouse", "Teclado", "Monitor", "Gabinete", "Cx.Som"};

    vector <string>::iterator it;

    // it = produtos.begin();   Mostra o primeiro elemento
    // it = produtos.end()-1;   Mostra o ultimo elemento

    // it = produtos.end();   //Mostra o primeiro elemento
    // advance, next, prev

    // advance(it, 3);

    // cout << *it << endl;
    // cout << *next(it, 2) << endl;  // next anda para a direito
    // cout << *prev(it, 2) << endl;  // prev anda para a esquerda


    for (it = produtos.begin(); it != produtos.end(); it++) {
        cout << *it << endl;
    }

}
