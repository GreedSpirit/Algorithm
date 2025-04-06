#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 1; i <= a; i++){
        int cnt = 1;
        for(int j = 0; j < b; j++){
            cout << i * cnt++ << ' ';
        }
        cout << '\n';
    }
}