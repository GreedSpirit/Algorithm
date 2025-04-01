#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = 0; k < n - i; k++){
                cout << '*';
            }
            cout << ' ';
        }
        cout << '\n';
    }
}