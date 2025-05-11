#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    while(n--){
        int a;
        cin >> a;
        ans += a;
    }

    string s;
    s = to_string(ans);

    cout << s.substr(1, s.length() - 1) + s[0];
}