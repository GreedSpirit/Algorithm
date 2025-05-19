#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i % 2 == 0){
            sort(v.begin(), v.begin() + i + 1);
            cout << v[(i + 1) / 2] << ' ';
        }
    }

}