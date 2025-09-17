#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int x = 0;
    int y = 0;
    int ans = 0;

    while(N--){
        char c;
        int t;
        cin >> c >> t;
        switch(c){
            case 'W':
            while(t--){
                x--;
                ans++;
                if(x == 0 && y == 0){
                    cout << ans;
                    return 0;
                }
            }
            break;
            case 'S':
            while(t--){
                y--;
                ans++;
                if(x == 0 && y == 0){
                    cout << ans;
                    return 0;
                }
            }
            break;
            case 'N':
            while(t--){
                y++;
                ans++;
                if(x == 0 && y == 0){
                    cout << ans;
                    return 0;
                }
            }
            break;
            case 'E':
            while(t--){
                x++;
                ans++;
                if(x == 0 && y == 0){
                    cout << ans;
                    return 0;
                }
            }
            break;
        }
    }
    cout << -1;


    return 0;
}