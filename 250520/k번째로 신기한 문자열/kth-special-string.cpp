#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string t;
    cin >> n >> k >> t;

    vector<string> v;

    while(n--){
        string s;
        cin >> s;

        bool isMatch = true;
        for(int i = 0; i < t.length(); i++){
            if(s[i] != t[i]){
                isMatch = false;
            }
        }

        if(isMatch){
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end());
    cout << v[k - 1];
}