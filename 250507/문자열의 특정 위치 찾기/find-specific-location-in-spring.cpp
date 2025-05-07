#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c;
    cin >> c;

    int char_idx = -1;

    if(s.find(c) != string::npos){
        char_idx = s.find(c);
    }

    if(char_idx == -1){
        cout << "No";
    }
    else{
        cout << char_idx;
    }
}