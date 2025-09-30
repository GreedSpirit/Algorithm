using System;
using System.Collections.Generic;


public class Solution
{
	public void Swap(int x, string[] players)
	{
		string tmp = players[x];
		players[x] = players[x - 1];
		players[x - 1] = tmp;
	}

	public string[] solution(string[] players, string[] callings)
	{
		var dic = new Dictionary<string, int>();
		string[] answer = new string[players.Length];
		for (int i = 0; i < players.Length; i++)
		{
			answer[i] = players[i];
			dic.Add(answer[i], i);
		}

		for(int i = 0; i < callings.Length; i++)
		{
			int curidx = dic[callings[i]];
			Swap(curidx, answer);
			dic[callings[i]] -= 1;
			dic[answer[curidx]] += 1;
		}
		return answer;
	}
}