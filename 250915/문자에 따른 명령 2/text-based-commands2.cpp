#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir = 0;

    int curX = 0;
    int curY = 0;

    string s;
    cin >> s;

    for(auto a : s){
        if(a == 'L'){
            dir = (dir + 3) % 4;
        }
        else if(a == 'R'){
            dir = (dir + 1) % 4;
        }
        else{
            curX += dx[dir];
            curY += dy[dir];
        }
    }

    cout << curX << ' ' << curY;    
}