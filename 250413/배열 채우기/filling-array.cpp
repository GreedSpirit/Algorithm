#include <iostream>
using namespace std;

int main() {
    int n[10];
    int p;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        cin >> p;
        if(p == 0) break;
        cnt++;
        n[i] = p;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << n[i] << ' ';
    }
}