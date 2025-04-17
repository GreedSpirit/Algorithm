#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;

    while(n--){
        int i;
        cin >> i;
        v.push_back(i);
    }

    sort(v.begin(), v.end());

    cout << v[v.size() - 1] << ' ' << v[v.size() - 2];
}