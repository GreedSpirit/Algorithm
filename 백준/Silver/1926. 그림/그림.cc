#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int board[502][502];  // 크기 502로 설정
    int vis[502][502];
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int n, m;
    cin >> n >> m;
    
    int sum = 0;
    int ans = 0;
    
    // 보드 입력 받기
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int k;
            cin >> k;
            board[i][j] = k;
        }
    }
    
    // BFS로 연결된 영역 탐색
    memset(vis, 0, sizeof(vis));  // vis 배열 초기화
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == 0 && board[i][j] == 1){
                queue<pair<int, int>> Q;
                int size = 0;
                sum++;
                Q.push({i, j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    size++;
                    auto cur = Q.front(); Q.pop();
                    for(int k = 0; k < 4; k++){
                        int nx = cur.X + dx[k];
                        int ny = cur.Y + dy[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;  // 경계 체크
                        if(vis[nx][ny] == 1 || board[nx][ny] == 0) continue;  // 이미 방문한 곳이나 0인 곳은 패스
                        Q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }
                ans = max(ans, size);  // 최대 덩어리 크기 갱신
            }
        }
    }
    
    cout << sum << '\n' << ans;  // 총 덩어리 수, 가장 큰 덩어리의 크기 출력
}
