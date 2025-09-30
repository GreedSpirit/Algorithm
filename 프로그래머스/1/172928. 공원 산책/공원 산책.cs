using System;

public class Solution
{
	int W, H;

	public bool IsRange(int x, int y)
	{
		return x >= 0 && x < H && y >= 0 && y < W;
	}

	public int[] solution(string[] park, string[] routes)
	{
        W = park[0].Length;
        H = park.Length;
        
		int curx = 0;
		int cury = 0;
		for (int i = 0; i < park.Length; i++)
		{
			for (int j = 0; j < park[0].Length; j++)
			{
				if (park[i][j] == 'S')
				{
					curx = i;
					cury = j;
				}
			}
		}

		Console.WriteLine(routes[0][0] + " " + routes[0][2]);
		for (int i = 0; i < routes.Length; i++)
		{
			char dir = routes[i][0];
		    int dis = routes[i][2] - '0';
			int nx, ny;
			bool cantGo = false;
			nx = curx;
			ny = cury;

			switch (dir)
			{
				case 'N':
					nx = curx - dis;
					break;
				case 'S':
					nx = curx + dis;
					break;
				case 'W':
					ny = cury - dis;
					break;
				case 'E':
					ny = cury + dis;
					break;
			}

			if (!IsRange(nx, ny)) continue;

			if(nx == curx)
			{
				int maxy = Math.Max(cury, ny);
				int miny = Math.Min(cury, ny);
				
				for(int j = miny; j <= maxy; j++)
				{
					if (park[curx][j] == 'X')
					{
						cantGo = true;
						break;
					}
				}
			}
			else if (ny == cury)
			{
				int maxx = Math.Max(curx, nx);
				int minx = Math.Min(curx, nx);

				for(int j = minx; j <= maxx; j++)
				{
					if (park[j][cury] == 'X')
					{
						cantGo = true;
						break;
					}
				}
			}

			if (cantGo) continue;

			curx = nx;
			cury = ny;
		}



			int[] answer = new int[] {curx, cury};

			return answer;
		
	} 
}