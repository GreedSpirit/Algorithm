#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b;
    a.push_back(0);
    b.push_back(0);

    int n, m;
    cin >> n >> m;

    while(n--){
        int t;
        char d;
        cin >> t >> d;

        int r = d == 'R' ? 1 : -1;
        while(t--){
            a.push_back(a[a.size() - 1] + (1 * r));
        }
    }

    while(m--){
        int t;
        char d;
        cin >> t >> d;

        int r = d == 'R' ? 1 : -1;
        while(t--){
            b.push_back(b[b.size() - 1] + (1 * r));
        }
    }

    int diff;

    if(a.size() > b.size()){
        diff = a.size() - b.size();
        for(int i = 0; i < diff; i++){
            b.push_back(b[b.size() - 1]);
        }
    }
    else{
        diff = b.size() - a.size();
        for(int i = 0; i < diff; i++){
            a.push_back(a[a.size() - 1]);
        }
    }

    int ans = 0;

    for(int i = 1; i < a.size(); i++){
        if(a[i] == b[i]){
            if(a[i - 1] != b[i - 1]){
                ans++;
            }
        }
    }
    cout << ans;
}