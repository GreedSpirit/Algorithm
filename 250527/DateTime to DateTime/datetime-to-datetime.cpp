#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a == 11){
        if(b == 11){
            if(c < 11){
                cout << -1;
                return 0;
            }
        }
        else if(b < 11){
            cout << -1;
            return 0;
        }
    }

    cout << (a - 11) * 60 * 24 + b * 60 - 11 * 60 + c - 11;
}