#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i <= s.length(); i++){
        cout << s.substr(s.length() - i, i) << s.substr(0, s.length() - i);
        cout << '\n';
    }
}