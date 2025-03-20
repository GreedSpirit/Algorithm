#include <iostream>
using namespace std;

int main() {
    double a = 13;
    double b = 0.165;

    cout << a << " * ";

    cout << fixed;
    cout.precision(6);
    cout  << b << " = " << a * b;
}