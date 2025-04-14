#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    int ans = 0;

    while(true){
        int n;
        cin >> n;
        if(n == 0){
            ans += v[v.size() - 1];
            ans += v[v.size() - 2];
            ans += v[v.size() - 3];
            break;
        }
        v.push_back(n);

    }
    cout << ans;
}