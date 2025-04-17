#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int cnt = 1;
    while(v[0] == v[cnt]){
        cnt++;
    }
    cout << v[0] << ' ' << cnt;
}