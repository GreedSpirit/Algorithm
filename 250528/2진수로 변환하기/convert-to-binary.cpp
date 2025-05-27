#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> v;

    if(n == 0){
        cout << 0;
        return 0;
    }

    while(n > 0){
        v.push_back(n % 2);
        n = n / 2;
    }

    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i];
    }
}