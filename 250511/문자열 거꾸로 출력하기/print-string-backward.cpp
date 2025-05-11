#include <iostream>
using namespace std;

int main() {
    while(true){
        string s;
        cin >> s;
        if(s == "END") break;

        for(int i = 0; i < s.length(); i++){
            cout << s[s.length() - 1 - i];
        }
        cout << '\n';
    }
}