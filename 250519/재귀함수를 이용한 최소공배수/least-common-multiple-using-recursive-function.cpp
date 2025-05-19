#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int n;

int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int f(int idx){
    if(idx == 0) return v[0];
    if(idx == 1) return v[1] * v[0] / gcd(v[1] , v[0]);

    return v[idx] * f(idx - 1) / gcd(v[idx] , f(idx - 1));
}

int main() {
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << f(n - 1);
    return 0;
}