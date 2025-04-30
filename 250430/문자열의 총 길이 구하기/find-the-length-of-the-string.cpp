#include <iostream>
using namespace std;

int main() {
    int ans = 0;

    string s;

    for(int i = 0; i < 10; i++){
        cin >> s;
        ans += s.length();
    }
    cout << ans;
}