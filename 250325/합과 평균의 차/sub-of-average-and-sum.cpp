#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    double sum, avg;
    cin >> a >> b >> c;

    sum = a + b + c;
    cout << sum;
    cout << '\n';
    cout << sum / 3;
    cout << '\n';
    cout << sum - sum / 3;
}