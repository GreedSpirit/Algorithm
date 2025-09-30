using System;

public class Solution
{
	bool IsRange(int x, int y)
	{
		return x >= 0 && x <= 10 && y >= 0 && y <= 10;
	}

	public int solution(string dirs)
	{
		bool[,] hVisited = new bool[11, 10];
		bool[,] vVisited = new bool[10, 11];

		int answer = 0;
		int x = 5; 
		int y = 5; 

		foreach (char dir in dirs)
		{
			int nx = x;
			int ny = y;

			switch (dir)
			{
				case 'U': ny++; break;
				case 'D': ny--; break;
				case 'R': nx++; break;
				case 'L': nx--; break;
			}
            
			if (!IsRange(nx, ny)) continue;
            
			if (nx == x)
			{
				
				int minY = Math.Min(y, ny);
				
				if (!vVisited[minY, x])
				{
					vVisited[minY, x] = true;
					answer++;
				}
			}
			
			else
			{
				int minX = Math.Min(x, nx);
				if (!hVisited[y, minX])
				{
					hVisited[y, minX] = true;
					answer++;
				}
			}

			x = nx;
			y = ny;
		}

		return answer;
	}
}