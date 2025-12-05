#include <bits/stdc++.h>
using namespace std;

int total;

void fun(int a, int b, int n){
    if(n == 1){
        cout << a << ' ' << b << '\n';
        return;
    }
    fun(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    fun(6 - a - b, b, n - 1);
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    cout << (1 << N) - 1 << '\n';
    fun(1, 3, N);
}