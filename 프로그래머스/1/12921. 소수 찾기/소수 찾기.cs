using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        int[] arr = new int[n + 1];
        
        for(int i = 0; i <= n; i++){
            arr[i] = 0;
        }
        
        for(int i = 2; i <= Math.Sqrt(n); i++){
            if(arr[i] == 0){
                for(int j = 2; j * i <= n; j++){
                    arr[j * i] = 1;
                }
            }
        }
        
        for(int i = 2; i <= n; i++){
            if(arr[i] == 0){
                answer++;
            }
        }
        
        return answer;
    }
}