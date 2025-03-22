#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);


    string a;
    cin >> a;

    a[a.length() - 2] = 'a';
    a[1] = 'a';

    cout << a;
}