#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    vector<int> v(10);
    
    while(N > 0){
        v[N%10]++;
        N = N / 10;
    }
    int sum = v[6] + v[9];
    if (sum % 2){
        v[6] = sum / 2 + 1;
        v[9] = v[6];
    }
    else{
        v[6] = sum / 2;
        v[9] = v[6];
    }
    
    int ans = 0;
    for(int i : v){
        ans = max(ans , i);
    }
    
    cout << ans;
    
    
}