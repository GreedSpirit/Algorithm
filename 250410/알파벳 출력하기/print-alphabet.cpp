#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if((char)('A' + cnt) == '[') cnt = 0;
            cout << (char)('A' + cnt++);
        }
        cout << '\n';
    }
}