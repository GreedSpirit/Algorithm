#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int tmp, n;
    tmp = -1;
    cin >> n;
    int cnt = 1;

    while(n--){
        int x;
        cin >> x;
        if(tmp != x){
            ans = max(ans, cnt);
            cnt = 1;
        }
        else{
            cnt++;
        }
        tmp = x;
    }
    ans = max(ans, cnt);
    cout << ans;

}