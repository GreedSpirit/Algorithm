#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        total += a;
    }

    cout << total << ' ';
    cout << fixed;
    cout.precision(1);
    cout << (double)total / n;
}