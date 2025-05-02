#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";

    while(n--){
        string s;
        cin >> s;
        ans += s;
    }
    cout << ans;
}