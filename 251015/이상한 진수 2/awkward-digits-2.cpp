#include <bits/stdc++.h>

using namespace std;

string a;

int main() {
    cin >> a;

    bool iszero = false;
    for(int i = 1; i < a.length(); i++){
        if(a[i] == '0') iszero = true;
    }

    for(int i = 1; i < a.length(); i++){
        if(a[i] == '0'){
            a[i] = '1';
            break;
        }
    }

    int ans = 0;
    ans += (a[a.length() - 1] - '0');
    int doublemulti = 1;
    for(int i = a.length() - 2; i >= 0; i--){
        ans += (a[i] - '0') * pow(2, (a.length() - 1 - i));
    }
    if(!iszero){
        ans -= 1;
    }
    cout << ans;

    return 0;
}