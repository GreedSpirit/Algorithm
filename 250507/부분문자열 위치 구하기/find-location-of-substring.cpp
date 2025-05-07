#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string m;
    cin >> m;

    if(s.find(m) != string::npos) cout << s.find(m);
    else cout << -1;
}