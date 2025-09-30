using System;

public class Solution {
    public int[] solution(int num, int total) {
        int[] answer = new int[num];
        int mid = total / num;
        int n = num / 2;
        
        if(num % 2 == 0){
            for(int i = 0; i < num; i++){
                answer[i] = mid - n + i + 1;
            }
        }
        else{
            for(int i = 0; i < num; i++){
                answer[i] = mid - n + i;
            }
        }
        
        return answer;
    }
}