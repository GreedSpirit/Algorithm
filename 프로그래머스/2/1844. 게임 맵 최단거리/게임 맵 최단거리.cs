using System;
using System.Collections;
using System.Collections.Generic;

class Solution
{
	int N;
	int M;

	int[] dx = {1, 0, -1, 0};
	int[] dy = {0, 1, 0, -1};

	public bool IsRange(int x, int y)
	{
		return x >= 0 && x < N && y >= 0 && y < M;
	}

	public int solution(int[,] maps)
	{
		int answer = 0;
		N = maps.GetLength(0);
		M = maps.GetLength(1);

		int[,] visited = new int[N, M];

		Queue<KeyValuePair<int, int>> q = new Queue<KeyValuePair<int, int>>();
		q.Enqueue(new KeyValuePair<int, int>(0, 0));
		visited[q.Peek().Key, q.Peek().Value] = 1;

		while(q.Count > 0)
		{
			var curPos = q.Dequeue();

			int nx, ny;
			int curx = curPos.Key;
			int cury = curPos.Value;
			for (int i = 0; i < 4; i++)
			{
				nx = curx + dx[i];
				ny = cury + dy[i];

				if (!IsRange(nx, ny)) continue;
				if (maps[nx, ny] == 0) continue;
                if (visited[nx, ny] != 0) continue;

				q.Enqueue(new KeyValuePair<int, int>(nx, ny));
				visited[nx, ny] = visited[curx, cury] + 1;
			}
		}

		answer = visited[N - 1, M - 1] == 0 ? -1 : visited[N - 1, M - 1];


		return answer;
	}
}