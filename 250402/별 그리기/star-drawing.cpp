#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = n - i - 1; j > 0; j--){
            cout << " ";
        }
        for(int j = 0; j < i * 2 + 1; j++){
            cout << "*";
        }
        cout << '\n';
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 2 * (n - i) - 1; j > 0; j--){
            cout << "*";
        }
        cout << '\n';
    }
}
