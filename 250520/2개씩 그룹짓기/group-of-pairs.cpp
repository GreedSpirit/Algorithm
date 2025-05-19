#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(2 * n);

    for(int i = 0; i < 2 * n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<int> V(n);

    for(int i = 0; i < n; i++){
        V[i] = v[i] + v[2 * n - 1 - i];
    }

    sort(V.begin(), V.end(), greater<int>());
    cout << V[0];
}