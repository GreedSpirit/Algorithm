#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v(2);

    cin >> v[0] >> v[1];
    cout << v[0] << ' ' << v[1] << ' ';

    for(int i = 2; i < 10; i++){
        v[i] = (v[i - 1] + v[i - 2]) % 10;
        cout << v[i] << ' ';
    }

}