#include <iostream>
using namespace std;

int main() {
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;

    if(am > bm && ae > be) cout << 1;
    else cout << 0;
}