#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    s = to_string(n);

    int ans = 0;

    for(char a : s){
        ans += (int)a - '0';
    }
    cout << ans;
}