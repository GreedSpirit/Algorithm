#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char fc = s[0];
    char sc = s[1];

    for(int i = 0; i < s.length(); i++){
        if(s[i] == fc) s[i] = sc;
        else if(s[i] == sc) s[i] = fc;
    }
    cout << s;
}