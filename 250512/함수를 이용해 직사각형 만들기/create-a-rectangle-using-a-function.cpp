#include <iostream>
using namespace std;

void Rect(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << 1;
        }
        cout << '\n';
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    Rect(n, m);
}