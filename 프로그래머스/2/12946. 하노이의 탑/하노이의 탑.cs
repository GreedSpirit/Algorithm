using System;
using System.Collections.Generic;

public class Solution {
    public int[,] solution(int n) {
        List<int[]> path = new List<int[]>();
        Move(n, 1, 3, 2, path);

        int[,] answer = new int[path.Count, 2];
        for (int i = 0; i < path.Count; i++)
        {
            answer[i, 0] = path[i][0];
            answer[i, 1] = path[i][1];
        }

        return answer;
    }

    private void Move(int n, int start, int end, int via, List<int[]> path) {
        if (n == 1)
        {
            path.Add(new int[] { start, end });
            return;
        }

        Move(n - 1, start, via, end, path);
        path.Add(new int[] { start, end });
        Move(n - 1, via, end, start, path);
    }
}