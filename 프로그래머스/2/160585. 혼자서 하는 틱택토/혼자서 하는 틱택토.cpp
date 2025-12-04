#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> board) {
    int answer = 1;
    int no = 0;
    int nx = 0;
    
    for(string str : board){
        for(char c : str){
            if(c == 'O') no++;
            else if(c == 'X') nx++;
        }
    }
    if(nx > no){
        answer = 0;
        return answer;
    }
    if(no - nx >= 2){
        answer = 0;
        return answer;
    }
    
    bool tto = false;
    bool ttx = false;
    
    for(int i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            if(board[i][0] == 'O'){
                tto = true;
            }
            else if(board[i][0] == 'X'){
                ttx = true;
            }
        }
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            if(board[0][i] == 'O'){
                tto = true;
            }
            else if(board[0][i] == 'X'){
                ttx = true;
            }
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        if(board[0][0] == 'O'){
                tto = true;
            }
            else if(board[0][0] == 'X'){
                ttx = true;
            }
    }
    if(board[2][0] == board[1][1] && board[1][1] == board[0][2]){
        if(board[1][1] == 'O'){
                tto = true;
            }
            else if(board[1][1] == 'X'){
                ttx = true;
            }
    }
    
    if(tto){
        if(no - nx != 1){
            answer = 0;
            return answer;
        }
    }
    if(ttx){
        if(no != nx){
            answer = 0;
            return answer;
        }
    }
    
    
    
    
    
    return answer;
}