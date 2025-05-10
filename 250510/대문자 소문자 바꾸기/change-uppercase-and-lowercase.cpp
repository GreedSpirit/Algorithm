#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(auto a : s){
        if(isupper(a)){
            cout << (char)tolower(a);
        }
        else{
            cout << (char)toupper(a);
        }
    }
}