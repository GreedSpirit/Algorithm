#include <iostream>
using namespace std;

int main() {
    double total = 0;

    for(int i = 0; i < 8; i++){
        double n;
        cin >> n;
        total += n;
    }
    total /= 8;

    cout << fixed;
    cout.precision(1);
    cout << total;
}