#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int total = 0;

    for(int i = a; i <= b; i++){
        if(i % 6 == 0 && i % 8 != 0) total += i;
    }
    cout << total;
}