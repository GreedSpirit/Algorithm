#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> va;
    vector<int> vb;
    int apos = 0;
    int bpos = 0;

    int n, m;
    cin >> n >> m;

    char d;
    int t;
    while(n--){
        cin >> d >> t;

        int r = d == 'R' ? 1 : -1;

        while(t--){
            apos = apos + (r * 1);
            va.push_back(apos);
        }
    }

    while(m--){
        cin >> d >> t;

        int r = d == 'R' ? 1 : -1;

        while(t--){
            bpos = bpos + (r * 1);
            vb.push_back(bpos);
        }
    }

    for(int i = 0; i < va.size(); i++){
        if(va[i] == vb[i]){
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
}