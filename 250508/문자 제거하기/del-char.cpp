#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    while(s.length() != 1){
        int n;
        cin >> n;

        if(n >= s.length()) n = s.length() - 1;
        cout << s.erase(n, 1) << '\n';
    }

}