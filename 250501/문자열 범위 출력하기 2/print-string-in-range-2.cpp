#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    int cnt = 0;

    for(int i = s.length() - 1; i >= 0; i--){
        if(cnt++ == n) break;
        cout << s[i];
    }
}