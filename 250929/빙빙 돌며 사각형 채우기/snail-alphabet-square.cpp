#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int N, M;

bool IsRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < M;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    int arr[N][M] = {};

    int x = 0;
    int y = 0;
    int dir = 0;

    for(int i = 1; i <= N * M; i++){
        arr[x][y] = (i - 1) % ((int)'Z' + 1) + (int)'A';
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!IsRange(nx, ny) || arr[nx][ny] != 0){
            dir = (dir + 1) % 4;
        }

        x = x + dx[dir];
        y = y + dy[dir];

    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << (char)arr[i][j] << ' ';
        }
        cout << '\n';
    }

}