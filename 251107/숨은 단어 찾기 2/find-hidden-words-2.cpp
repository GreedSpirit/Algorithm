#include <bits/stdc++.h>
using namespace std;

int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, 1, -1};

int N, M;
string arr[50];

bool IsRange(int x, int y){
    return x >= 0 && x < N && y >= 0 && y < M;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int ans = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(arr[i][j] == 'L'){
                for(int dir = 0; dir < 8; dir++){
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];
                    if(!IsRange(nx, ny)) continue;
                    if(arr[nx][ny] == 'E'){
                        nx = nx + dx[dir];
                        ny = ny + dy[dir];
                        if(!IsRange(nx, ny)) continue;
                        if(arr[nx][ny] == 'E') ans++;                        
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}