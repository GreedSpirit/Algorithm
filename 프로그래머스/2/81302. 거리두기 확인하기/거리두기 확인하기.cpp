#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int dgx[4] = {1, 1, -1, -1};
int dgy[4] = {1, -1, 1, -1};

bool IsRange(int x, int y){
    return x < 0 || x >= 5 || y < 0 || y >= 5;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    for(int p = 0; p < 5; p++){
        bool isCant = true;
        
        for(int i = 0; i < 5; i++){
            if(!isCant) break;
            for(int j = 0; j < 5; j++){
                if(!isCant) break;
                
                if(places[p][i][j] == 'P'){
                    for(int k = 0; k < 4; k++){
                        if(!isCant) break;
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if(IsRange(nx, ny)) continue;
                        if(places[p][nx][ny] == 'P'){ // 4방향 확인
                            answer.push_back(0);
                            isCant = false;
                            break;
                        }
                        if(places[p][nx][ny] == 'O'){
                            nx = nx + dx[k];
                            ny = ny + dy[k];
                            if(IsRange(nx, ny)) continue;
                            if(places[p][nx][ny] == 'P'){ // 1칸 떨어진 4방향 확인
                                answer.push_back(0);
                                isCant = false;
                                break;
                            }
                        }
                    }
                    
                    for(int k = 0; k < 4; k++){
                        if(!isCant) break;
                        int nx = i + dgx[k];
                        int ny = j + dgy[k];
                        if(IsRange(nx, ny)) continue;
                        if(places[p][nx][ny] == 'P'){
                            if(places[p][i][ny] == 'O' || places[p][nx][j] == 'O'){
                                answer.push_back(0);
                                isCant = false;
                                break;
                            }
                        }
                    }
                    
                    
                }
            }
        }
        if(isCant){
            answer.push_back(1);
        }
    }
    
    for(auto a : answer){
        cout << a << ' ';
    }
    
    
    
    return answer;
}