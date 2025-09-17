#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int dir = 0;
    int x = 0;
    int y = 0;
    int ans = 0;


    for(auto a : s){
        switch(a){
            case 'F':
            x = x + dx[dir];
            y = y + dy[dir];
            break;
            case 'L':
            dir = (dir + 3) % 4;
            break;
            case 'R':
            dir = (dir + 1) % 4;
            break;
        }
        ans++;
        if(x == 0 && y == 0){
            cout << ans;
            return 0;
        }
    }

    cout << -1;
}