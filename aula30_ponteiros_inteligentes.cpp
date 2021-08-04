#include <iostream>
#include <memory>

using namespace std;

int main() {
    system("clear");

    // int *pnum;
    // int numero;

    // numero = 10;
    // pnum = &numero;

    // cout << *pnum << " - " << pnum << endl;

    // delete pnum;
    
    
    // int *pnum = new int();
    // *pnum = 10;


    // cout << *pnum << " - " << pnum << endl;

    // delete pnum;


    unique_ptr<int> pnum(new int);

    *pnum = 10;

    cout << *pnum << " - " << &pnum << endl;
}
