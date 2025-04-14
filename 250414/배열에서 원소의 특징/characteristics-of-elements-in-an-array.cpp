#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        if(n % 3 == 0){
            cout << v[v.size() - 1];
            break;
        }
        v.push_back(n);
    }
}