using System;
using System.Collections.Generic;

public class Solution
{
	public bool solution(string s)
	{
		Stack<char> stack = new Stack<char>();
		stack.Push('a');

		foreach (var c in s)
		{

			switch (c)
			{
				case '(':					
					stack.Push(c);					
					break;
				case ')':
					if (stack.Peek() == '(')
					{
						stack.Pop();
					}
					else
					{
						stack.Push(c);
					}
					break;
			}
		}
		bool answer = false;
		if (stack.Count == 1) answer = true;
		
		return answer;
	}
}