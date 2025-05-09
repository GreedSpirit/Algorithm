#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.substr(1, s.length() - 1) << s[0];
}