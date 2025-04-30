#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    
    if(s.length() > t.length()) cout << s << ' ' << s.length();
    else if(s.length() == t.length()) cout << "same";
    else cout << t << ' ' << t.length();
}