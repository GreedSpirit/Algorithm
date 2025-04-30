#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int len = 0;
    while(n--){
        string s;
        cin >> s;
        len += s.length();
        if(s[0] == 'a') ans++;
    }
    cout << len << ' ' << ans;
}