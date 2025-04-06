#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p = 11;

    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < n; j++){
            cout << p + s << ' ';
            s += 2;
        }
        p += 2;
        cout << '\n';
    }
}