#include <iostream>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
        cout << s[i];
    }
    for(int i = 0; i < t.length(); i++){
        if(t[i] == ' ') continue;
        cout << t[i];
    }
}