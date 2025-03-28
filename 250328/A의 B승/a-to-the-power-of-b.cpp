#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int total = 1;

    for(int i = 0; i < b; i++){
        total *= a;
    }
    cout << total;
}