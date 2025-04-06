#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int tmp = i * n;
        for(int j = 0; j < n; j++){
            cout << tmp << ' ';
            tmp -= i;
        }
        cout << '\n';
    }
}