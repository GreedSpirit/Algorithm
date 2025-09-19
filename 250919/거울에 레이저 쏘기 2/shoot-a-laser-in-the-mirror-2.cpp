#include <bits/stdc++.h>
using namespace std;

int N;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool IsRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    char arr[N][N] = {};

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        int j = 0;
        for(auto a : s){
            arr[i][j++] = a;
        }
    }

    int K;
    cin >> K;

    int dir;
    dir = (K - 1) / N;

    int x, y;

    if(dir == 0){
        x = 0;
        y = K - 1;
    }
    else if(dir == 1){
        y = N - 1;
        x = (K - 1) - N;
    }
    else if(dir == 2){
        x = N - 1;
        y = abs(3 * N - K);
    }
    else{
        y = 0;
        x = abs(4 * N - K);
    }

    int ans = 0;

    while(true){
        if(arr[x][y] == '\\'){
            ans++;
            dir = (dir + 1) % 4;
        }
        else if(arr[x][y] == '/'){
            ans++;
            dir = (dir + 3) % 4;
        }

        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(!IsRange(nx, ny)){
            cout << ans;
            return 0;
        }
        x = nx;
        y = ny;

    }
    
}