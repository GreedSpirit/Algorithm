using System;

public class Solution
{
    public int solution(int[] array)
    {
        int[] count = new int[1001];
        
        for (int i = 0; i < array.Length; i++)
        {
            count[array[i]]++;
        }

        int maxCount = 0;
        int mode = -1;
        bool isDuplicate = false;

        for (int i = 0; i < count.Length; i++)
        {
            if (count[i] > maxCount)
            {
                maxCount = count[i];
                mode = i;
                isDuplicate = false;
            }
            else if (count[i] == maxCount && maxCount != 0)
            {
                isDuplicate = true;
            }
        }

        return isDuplicate ? -1 : mode;
    }
}