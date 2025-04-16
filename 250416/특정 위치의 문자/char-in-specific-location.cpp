#include <iostream>
using namespace std;

int main() {
    string s = "LEBROS";

    char c;
    cin >> c;
    for(int i = 0; i < 6; i++){
        if(s[i] == c){
            cout << i;
            break;
        }
        if(i == 5) cout << "None";
    }
}