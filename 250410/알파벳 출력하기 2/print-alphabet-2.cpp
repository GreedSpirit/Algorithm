#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < i; k++){
            cout << "  ";
        }
        for(int j = n; j > i; j--){
            if((char)('A' + cnt) == '[') cnt = 0;
            cout << (char)('A' + cnt++) << ' ';
        }
        cout << '\n';
    }
}