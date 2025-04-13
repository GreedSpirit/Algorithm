#include <iostream>
using namespace std;

int main() {
    double total = 0;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        int p;
        cin >> p;
        if(p == 0) break;
        total += p;
        cnt++;
    }
    cout << total << ' ';

    cout << fixed;
    cout.precision(1);
    cout << total / cnt;
}