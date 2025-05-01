#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if(s.length() % 2){
        for(int i = s.length() - 2; i >= 0; i -= 2){
            cout << s[i];
        }
    }
    else{
        for(int i = s.length() - 1; i >= 0; i -= 2){
            cout << s[i];
        }
    }
}