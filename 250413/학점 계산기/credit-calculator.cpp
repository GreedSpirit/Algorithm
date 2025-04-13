#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double total = 0;

    for(int i = 0; i < n; i++){
        double a;
        cin >> a;
        total += a;
    }

    total /= n;

    cout << fixed;
    cout.precision(1);
    cout << total << '\n';

    if(total >= 4) cout << "Perfect";
    else if(total >= 3) cout << "Good";
    else cout << "Poor";
}