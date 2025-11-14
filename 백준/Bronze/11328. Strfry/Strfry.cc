#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    string a, b;
    while(N--){
        int ans = 1;
        vector<int> v(100, 0);
        cin >> a >> b;
        if(a.length() != b.length()){
            ans = 0;
        }
        for(auto c : a){
            v[c - 'a']++;
        }
        for(auto c : b){
            if(--v[c - 'a'] < 0){
                ans = 0;
            }
        }
        
        if(ans){
            cout << "Possible\n";
        }
        else{
            cout << "Impossible\n";
        }
        
    }
}