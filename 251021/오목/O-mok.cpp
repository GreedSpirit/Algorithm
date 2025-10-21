#include <iostream>

using namespace std;

int board[19][19];

int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, 1, -1};

bool IsRange(int x, int y){
    return x >= 0 && x < 19 && y >= 0 && y < 19;
}

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    for (int i = 0; i < 19; i++){
        for (int j = 0; j < 19; j++){
            if(board[i][j] == 1 || board[i][j] == 2){
                int target = board[i][j];
                for(int dir = 0; dir < 8; dir++){
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];
                    if(!IsRange(nx, ny)) continue;
                    if(board[nx][ny] == target){
                        int bb = 0;
                        for(bb = 0; bb < 3; bb++){
                            nx = nx + dx[dir];
                            ny = ny + dy[dir];
                            if(!IsRange(nx, ny)) break;
                            if(board[nx][ny] != target) break;
                        }
                        if(bb == 3){
                            cout << target << '\n';
                            cout << nx - dx[dir] - dx[dir] + 1;
                            cout << ' ' << ny - dy[dir] - dy[dir] + 1;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << 0;

    return 0;
}