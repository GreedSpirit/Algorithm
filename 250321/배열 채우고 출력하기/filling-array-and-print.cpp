#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    char a[10];

    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }

    for(int i = 9; i >= 0; i--){
        cout << a[i];
    }
}