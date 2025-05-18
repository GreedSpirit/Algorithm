#include <iostream>

using namespace std;

int a, b, c;

int f(int x){
    if(x <= 0) return 0;

    return f(x / 10) + x % 10;
}

int main() {
    cin >> a >> b >> c;

    cout << (f(a * b * c));

    return 0;
}