#include <iostream>

using namespace std;

int main() {

    int *p;
    int vetor[10];

    p = &vetor[0];  // == p = vetor
    cout << "\n" << p << "\n";
    
    *p = 10;
    cout << "\n" << vetor[0] << "\n";

    *(p += 1);
    *p = 32;
    cout << "\n" << vetor[1] << "\n";
    

}
