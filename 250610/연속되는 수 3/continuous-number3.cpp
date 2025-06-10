#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int n;
    cin >> n;

    vector<int> v;

    int cnt = 0;

    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int tmp = v[0];

    for(int a : v){
        if(a * tmp < 0){
            ans = max(ans, cnt);
            cnt = 1;
        }
        else{
            cnt++;
        }
        tmp = a;
    }
    ans = max(ans, cnt);
    cout << ans;

}