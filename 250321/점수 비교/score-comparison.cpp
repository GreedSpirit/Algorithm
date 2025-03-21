#include <iostream>
using namespace std;

int main() {
    int AM, AE;
    int BM, BE;

    cin >> AM >> AE;
    cin >> BM >> BE;

    if(AM > BM && AE > BE) cout << 1;
    else cout << 0;
}