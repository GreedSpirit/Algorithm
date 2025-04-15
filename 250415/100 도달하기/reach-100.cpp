#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    vector<int> v(30);

    v[0] = 1;
    cin >> n;
    v[1] = n;

    for(int i = 0; i < 30; i++){
        cout << v[i] << ' ';
        if(v[i] > 100) break;
        if(i > 0) v[i + 1] = v[i] + v[i - 1];
    }
}