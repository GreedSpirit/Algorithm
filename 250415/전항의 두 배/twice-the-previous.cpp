#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;

    vector<int> v;

    v.push_back(a);
    v.push_back(b);

    for(int i = 2; i < 10; i++){
        v.push_back(v[v.size() - 1] + 2 * v[v.size() - 2]);
    }

    for(int i = 0; i < 10; i++){
        cout << v[i] << ' ';
    }
}