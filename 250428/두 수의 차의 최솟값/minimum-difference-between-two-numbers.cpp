#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 100;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    for(int i = 1; i < n; i++){
        ans = min(ans, v[i] - v[i - 1]);
    }
    cout << ans;
}