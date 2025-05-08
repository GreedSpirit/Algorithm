#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'e'){
            cout << s.erase(i, 1);
            break;
        }
    }
}