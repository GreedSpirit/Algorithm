using System;

public class Solution {
    public long solution(long n) {
        long answer = 0;
        int[] arr = new int[10];
        
        while(n > 0){
            arr[n%10]++;
            n = n / 10;
        }
        
        long tenmulti = 1;
        for(int i = 0; i < 10; i++){
            if(arr[i] == 0) continue;
            for(int j = 0; j < arr[i]; j++){
                int tmp = i;
                answer = answer + (tmp * tenmulti);
                tenmulti *= 10;
            }
        }
        return answer;
    }
}