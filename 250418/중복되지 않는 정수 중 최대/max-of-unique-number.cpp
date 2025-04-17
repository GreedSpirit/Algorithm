#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(1001);
    while(n--){
        int p;
        cin >> p;
        v[p]++;
    }

    int tmp = -1;

    for(int i = 1; i <= 1000; i++){
        if(v[i] == 1){
            tmp = max(tmp, i);
        }
    }

    cout << tmp;
}