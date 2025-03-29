#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;

    for(int i = 1; i <= 100; i++){
        total += i;
        if(total >= n) {
            cout << i;
            break;
        }
    }
}