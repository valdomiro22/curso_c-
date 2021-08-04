#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    system("clear");

    vector<int> n{503, 12, 32, 352, 234, 552, 662, 797, 86, 609,};

    // for(auto it:n) {
    //     cout << it << endl;
    // }
    

    for_each(n.begin(), n.end(), [](int num) {
        num += 1000;    
        cout << num << endl;
    });

    cout << endl;

    for_each(n.begin(), n.end(), [](int num) {
        cout << num << endl;
    });
}
