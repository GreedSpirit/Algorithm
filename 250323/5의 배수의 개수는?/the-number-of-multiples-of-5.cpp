#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    for(int i = 0; i < 16; i++){
        cin >> n;
        if(n % 5 == 0) total++;
    }
    cout << total;
}