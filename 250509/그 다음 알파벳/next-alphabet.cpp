#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if(c == 'z') cout << 'a';
    else{
        cout << (char)((int)c + 1);
    }
}