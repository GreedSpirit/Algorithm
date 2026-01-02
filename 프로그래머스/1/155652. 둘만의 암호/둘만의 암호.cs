using System;
using System.Text;
using System.Linq;

public class Solution {
    public string solution(string s, string skip, int index) {
        StringBuilder sb = new StringBuilder();

        foreach (char c in s) {
            char temp = c;
            int count = 0;

            while (count < index) {
                temp++;                

                if (temp > 'z') {
                    temp = 'a';
                }
                
                if (skip.Contains(temp)) {
                    continue;
                }
                count++;
            }
            sb.Append(temp);
        }
        return sb.ToString();
    }
}