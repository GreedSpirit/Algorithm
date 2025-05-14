#include <iostream>
using namespace std;

bool palindrome(string s){
    string tmp = s;
    int idx = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        tmp[idx++] = s[i];
    }
    return tmp == s;
}

int main() {
    string s;
    cin >> s;

    cout << (palindrome(s) ? "Yes" : "No");
}