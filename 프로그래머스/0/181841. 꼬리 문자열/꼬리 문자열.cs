using System;
using System.Text;

public class Solution {
    public string solution(string[] str_list, string ex) {
        StringBuilder sb = new StringBuilder();
        
        foreach(string s in str_list){
            if(!s.Contains(ex)){
                sb.Append(s);
            }
        }
        
        return sb.ToString();
    }
}