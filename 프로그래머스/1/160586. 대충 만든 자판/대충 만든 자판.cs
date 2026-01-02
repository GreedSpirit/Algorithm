using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] keymap, string[] targets) {
        Dictionary<char, int> minArr = new Dictionary<char, int>();
        
        foreach (var key in keymap){
            for(int i = 0; i < key.Length; i++){
                char c = key[i];
                int idx = i + 1;
                
                if(minArr.ContainsKey(c)){
                    minArr[c] = Math.Min(minArr[c], idx);
                }
                else{
                    minArr.Add(c, idx);
                }
            }
        }
        
        int[] answer = new int[targets.Length];
        
        for(int i = 0; i < answer.Length; i++){
            int sum = 0;
            bool dont = true;
            
            foreach (char c in targets[i]){
                if(minArr.ContainsKey(c)){
                    sum += minArr[c];
                }
                else{
                    dont = false;
                    break;
                }
            }
            
            answer[i] = sum;
            if(!dont){
                answer[i] = -1;
            }
        }
        return answer;
    }
}