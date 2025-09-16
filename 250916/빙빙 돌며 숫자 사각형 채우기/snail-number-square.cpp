#include <bits/stdc++.h>
using namespace std;

int N, M;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < M;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    int arr[N][M] = {};
    arr[0][0] = 1;

    int x = 0;
    int y = 0;
    int dir = 0;

    for(int i = 2; i <= N * M; i++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(!InRange(nx, ny) || arr[nx][ny] != 0){
            dir = (dir + 1) % 4;
        }
        x = x + dx[dir];
        y = y + dy[dir];
        arr[x][y] = i;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}