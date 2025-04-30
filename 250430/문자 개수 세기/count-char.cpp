#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char c;
    cin >> c;

    int cnt = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == c) cnt++;
    }
    cout << cnt;
}