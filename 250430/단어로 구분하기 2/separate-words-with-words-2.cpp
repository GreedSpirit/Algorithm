#include <iostream>
using namespace std;

int main() {
    string s;
    for(int i = 0; i < 10; i++){
        cin >> s;
        if(i % 2) continue;
        cout << s << '\n';
    }
}