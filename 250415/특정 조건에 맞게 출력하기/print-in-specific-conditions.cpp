#include <iostream>
using namespace std;

int main() {
    int n;

    while(true){
        cin >> n;

        if(n == 0) break;
        else if(n % 2) cout << n + 3 << ' ';
        else cout << n / 2 << ' ';
    }
}