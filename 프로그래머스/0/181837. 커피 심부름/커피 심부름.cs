using System;

public class Solution {
    public int solution(string[] order) {
        int answer = 0;
        
        foreach(string str in order){
            if(str == "iceamericano" || str == "americanoice" || str == "hotamericano"
              || str == "americanohot" || str == "americano" || str == "anything"){
                answer += 4500;
            }
            else{
                answer += 5000;
            }
        }
        
        
        return answer;
    }
}