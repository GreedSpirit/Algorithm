using System.Linq;

public class Solution {
    public string solution(string s) {
        var sortedChars = s.OrderByDescending(c => c);
        
        return new string(sortedChars.ToArray());
    }
}