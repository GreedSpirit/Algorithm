using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        int[][] m = new int[n][];

        for (int i = 0; i < n; i++)
        {
            string[] s = Console.ReadLine().Split();
            m[i] = new int[n];
            for (int k = 0; k < n; k++)
            {
                m[i][k] = int.Parse(s[k]);
            }
        }
        bool[][] v = new bool[n][];
        for (int i = 0; i < n; i++)
        {
            v[i] = new bool[n];
        }

        Queue<Tuple<int, int>> q = new Queue<Tuple<int, int>>();
        q.Enqueue(new Tuple<int, int>(0, 0));
        v[0][0] = true;
        while (q.Count > 0)
        {
            Tuple<int, int> t = q.Dequeue();
            int x = t.Item1;
            int y = t.Item2;
            int j = m[x][y];
            if (j == -1)
            {
                Console.WriteLine("HaruHaru");
                return;
            }
            if (j == 0) continue;

            if (x + j < n && !v[x + j][y])
            {
                v[x + j][y] = true;
                q.Enqueue(new Tuple<int, int>(x + j, y));
            }
            if (y + j < n && !v[x][y + j])
            {
                v[x][y + j] = true;
                q.Enqueue(new Tuple<int, int>(x, y + j));
            }
        }
        Console.WriteLine("Hing");
    }
}