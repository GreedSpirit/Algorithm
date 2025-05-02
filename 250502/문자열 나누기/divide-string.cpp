#include <iostream>
using namespace std;

int main() {
    string ans = "";

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        ans += s;
    }

    int cnt = 0;
    for(auto c : ans){
        cout << c;
        cnt++;
        if(cnt % 5 == 0) cout << '\n';

    }
}