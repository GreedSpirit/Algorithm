#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.length();

    bool ee = false;
    bool ab = false;

    for(int i = 0; i < l - 1; i++){
        if(s.substr(i, 2) == "ee") ee = true;
        if(s.substr(i, 2) == "ab") ab = true;
    }
    if(ee) cout << "Yes";
    else cout << "No";
    cout << ' ';
    if(ab) cout << "Yes";
    else cout << "No";
}