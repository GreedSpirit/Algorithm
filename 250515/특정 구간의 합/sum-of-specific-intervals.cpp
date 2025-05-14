#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, m;

int f(int a, int b){
    int sum = 0;
    for(int i = a - 1; i <= b - 1; i++){
        sum += v[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;
    v.resize(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    while(m--){
        int a, b;
        cin >> a >> b;
        cout << f(a, b) << '\n';
    }
}