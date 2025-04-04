#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "*";
        for(int j = 0; j < n * 2; j++){
            cout << " *";
        }
        cout << '\n';
        cout << "*";
        for(int j = 0; j < n; j++){
            cout << "   *";
        }
        cout << '\n';

    }
    cout << "*";
    for(int j = 0; j < n * 2; j++){
        cout << " *";
    }
}