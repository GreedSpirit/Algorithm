#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(auto a : v){
        cout << a << ' ';
    }

    sort(v.begin(), v.end(), greater<int>());
    cout << '\n';

    for(auto a : v){
        cout << a << ' ';
    }

}