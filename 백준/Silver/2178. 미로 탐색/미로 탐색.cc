#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[102];
int vis[102][102];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int N, M;


int main(void){
    ios::sync_with_stdio(0);
    
    cin >> N >> M;
    
    for(int i = 0; i <= N; i++){
        cin >> board[i];
    }
    
    queue<pair<int, int>> q;
    vis[0][0] = 1;
    q.push({0, 0});
    
    while(!q.empty()){
        auto c = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ix = c.X + dx[i];
            int iy = c.Y + dy[i];
            if(ix < 0 || ix >= N || iy < 0 || iy >= M) continue;
            if(vis[ix][iy] > 0 || board[ix][iy] != '1') continue;
            vis[ix][iy] = vis[c.X][c.Y] + 1;
            q.push({ix, iy});
        }
        
    }
    
    cout << vis[N - 1][M - 1];
    
    
    
}