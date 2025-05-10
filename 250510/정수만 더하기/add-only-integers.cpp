#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for(auto a : s){
        if(isdigit(a)){
            ans += (int)(a - '0');
        }
    }
    cout << ans;
}