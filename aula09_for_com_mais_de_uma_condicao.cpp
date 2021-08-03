#include <iostream>

using namespace std;

int main() {

    int x, y, z;

    for (x=0, y=1, z=0; x<=10 && z <= 6; x++, y+=2, z+=2) {
        cout << "x=";
        cout << x << " - y=";
        cout << y << " - z=";
        cout << z << "\n";
    }
}