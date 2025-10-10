#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int N, T;

bool IsRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> T;
    string s;
    cin >> s;

    int arr[N][N] = {};
    int x = N / 2;
    int y = N / 2;
    int dir = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    int ans = arr[x][y];

    for(auto c : s){
        if(c == 'L'){
            dir = (dir + 3) % 4;
        }
        else if(c == 'R'){
            dir = (dir + 1) % 4;
        }
        else{
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(!IsRange(nx, ny)) continue;
            x = nx;
            y = ny;
            ans += arr[x][y];
        }
    }

    cout << ans;
}