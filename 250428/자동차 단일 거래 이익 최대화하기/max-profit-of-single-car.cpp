#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    int ans = 0;
    int m = v[v.size() - 1];

    for(int i = v.size() - 2; i >= 0; i--){
        if(m < v[i]) m = v[i];
        if(ans < m - v[i]) ans = m - v[i];
    }
    cout << ans;
}