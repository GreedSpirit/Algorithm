#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cout << v[k - 1];
}