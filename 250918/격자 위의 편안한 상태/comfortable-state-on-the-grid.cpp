#include <bits/stdc++.h>
using namespace std;

int N, M;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool IsRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main() {
    cin >> N >> M;

    int arr[N][N] = {};

    while(M--){
        int r, c;
        cin >> r >> c;
        r--;
        c--;

        arr[r][c] = 1;

        int cnt = 0;
        for(int i = 0; i < 4; i++){
            int nx = r + dx[i];
            int ny = c + dy[i];
            if(IsRange(nx, ny) && arr[nx][ny] == 1){
                cnt++;
            }
        }
        if(cnt == 3){
            cout << 1;
        }
        else{
            cout << 0;
        }
        cout << '\n';
    }
}