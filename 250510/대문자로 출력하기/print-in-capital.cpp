#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            cout << (char)toupper(s[i]);
        }
    }
}