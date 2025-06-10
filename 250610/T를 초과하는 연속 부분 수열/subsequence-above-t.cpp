#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int n, t;
    cin >> n >> t;

    vector<int> v;

    int cnt = 0;

    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int a : v){
        if(a <= t){
            ans = max(ans, cnt);
            cnt = 0;
        }
        else{
            cnt++;
        }
    }
    ans = max(ans, cnt);
    cout << ans;

}