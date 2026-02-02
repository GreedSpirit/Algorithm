using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            string[] input = Console.ReadLine().Split();
            int n = int.Parse(input[0]);
            int m = int.Parse(input[1]);

            int[] priorities = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Queue<(int index, int priority)> q = new Queue<(int, int)>();

            for (int j = 0; j < n; j++)
            {
                q.Enqueue((j, priorities[j]));
            }

            int printCount = 0;

            while (q.Count > 0)
            {
                var current = q.Dequeue();

                if (q.Any(x => x.priority > current.priority))
                {
                    q.Enqueue(current);
                }
                else
                {
                    printCount++;
                    if (current.index == m)
                    {
                        Console.WriteLine(printCount);
                        break;
                    }
                }
            }
        }
    }
}