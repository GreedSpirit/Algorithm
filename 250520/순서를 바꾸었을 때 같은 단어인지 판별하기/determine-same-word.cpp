#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, str;
    cin >> s >> str;

    sort(s.begin(), s.end());
    sort(str.begin(), str.end());

    if(s == str) cout << "Yes";
    else cout << "No";
}