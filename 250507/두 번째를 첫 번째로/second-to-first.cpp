#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char c;
    c = s[1];

    for(int i = 1; i < s.length(); i++){
        if(s[i] == c) s[i] = s[0];
    }
    cout << s;
}