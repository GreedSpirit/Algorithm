#include <bits/stdc++.h>
using namespace std;

int N;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

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
    if((K - 1) / N == 0){
        dir = 0;
    }
    else if ((K - 1) / N == 1){
        dir = 3;
    }
    else if((K - 1) / N == 2){
        dir = 2;
    }
    else{
        dir = 1;
    }

    int x, y;

    if(dir == 0){
        x = 0;
        y = K - 1;
    }
    else if(dir == 3){
        y = N - 1;
        x = (K - 1) - N;
    }
    else if(dir == 2){
        x = N - 1;
        y = 3 * N - K;
    }
    else{
        y = 0;
        x = 4 * N - K;
    }

    int ans = 0;

    while(true){
        if(arr[x][y] == '\\'){
            if(dir == 0 || dir == 3){
                ans++;
                dir = (dir + 1) % 4;
            }
            else{
                ans++;
                dir = (dir + 3) % 4;
            }
            
        }
        else if(arr[x][y] == '/'){
            if(dir == 0 || dir == 1){
                ans++;
                dir = (dir + 3) % 4;
            }
            else{
                ans++;
                dir = (dir + 1) % 4;
            }
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