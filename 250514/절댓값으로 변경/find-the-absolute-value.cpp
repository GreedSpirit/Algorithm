#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        v[i] = abs(v[i]);
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    fun(v);

    for(auto a : v){
        cout << a << ' ';
    }
}