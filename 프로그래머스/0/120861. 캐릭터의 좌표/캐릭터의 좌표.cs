using System;

public class Solution {    
    public int[] solution(string[] keyinput, int[] board) {
        int[] answer = new int[2];
        
        int x = 0;
        int y = 0;
        
        foreach(string str in keyinput){
            switch(str){
                case "up":
                    y = y + 1 > board[1] / 2 ? y : y + 1;
                    break;
                case "down":
                    y = y - 1 < ((board[1] / 2) * (-1)) ? y : y - 1;
                    break;
                case "left":
                    x = x - 1 < ((board[0] / 2) * (-1)) ? x : x - 1;
                    break;
                case "right":
                    x = x + 1 > board[0] / 2 ? x : x + 1;
                    break;
            }
        }
        answer[0] = x;
        answer[1] = y;
        return answer;
    }
}