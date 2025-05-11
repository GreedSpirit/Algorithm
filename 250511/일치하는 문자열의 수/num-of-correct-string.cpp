#include <iostream>
using namespace std;

int main() {
    int n;
    string a;
    cin >> n >> a;

    int ans = 0;

    while(n--){
        string t;
        cin >> t;
        if(t == a) ans++;    
    }
    cout << ans;
}