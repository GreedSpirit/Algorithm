#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int N;

bool IsRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    int arr[N][N] = {};

    int x = N / 2;
    int y = N / 2;
    int dir = 0;
    arr[x][y] = 1;

    y = y + 1;

    for(int i = 2; i <= N * N; i++){
        arr[x][y] = i;

        int nx = x + dx[(dir + 1) % 4];
        int ny = y + dy[(dir + 1) % 4];

        if(!IsRange(nx, ny) || arr[nx][ny] == 0){
            dir = (dir + 1) % 4;
        }

        x = x + dx[dir];
        y = y + dy[dir];

    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

}