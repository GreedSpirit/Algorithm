#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v;

    int i;

    while(n--){
        cin >> i;
        v.push_back(i);
    }

    while(q--){
        cin >> i;
        if(i == 1){
            int a;
            cin >> a;
            cout << v[a - 1];
        }
        else if(i == 2){
            int b;
            cin >> b;
            for(int k = 0; k < v.size(); k++){
                if(v[k] == b){
                    cout << k + 1;
                    break;
                }
                if(k == v.size() - 1) cout << 0;
            }
        }
        else{
            int s, e;
            cin >> s >> e;

            for(int j = s - 1; j <= e - 1; j++){
                cout << v[j] << ' ';
            }
        }
        cout << '\n';
    }

}