using System;
using System.Collections.Generic;

class P
{
    static int n, m, v;
    static List<int>[] g;
    static bool[] b;

    static void Main()
    {
        string[] input = Console.ReadLine().Split();
        n = int.Parse(input[0]);
        m = int.Parse(input[1]);
        v = int.Parse(input[2]);

        g = new List<int>[n + 1];
        for (int i = 1; i <= n; i++)
            g[i] = new List<int>();

        for (int i = 0; i < m; i++)
        {
            input = Console.ReadLine().Split();
            int x = int.Parse(input[0]);
            int y = int.Parse(input[1]);
            
            g[x].Add(y);
            g[y].Add(x);
        }

        for (int i = 1; i <= n; i++)
            g[i].Sort();

        b = new bool[n + 1];
        D(v);
        Console.WriteLine();

        b = new bool[n + 1];
        B(v);
    }

    static void D(int c)
    {
        b[c] = true;
        Console.Write(c + " ");

        foreach (int nxt in g[c])
        {
            if (!b[nxt]) D(nxt);
        }
    }

    static void B(int s)
    {
        Queue<int> q = new Queue<int>();
        q.Enqueue(s);
        b[s] = true;

        while (q.Count > 0)
        {
            int c = q.Dequeue();
            Console.Write(c + " ");

            foreach (int nxt in g[c])
            {
                if (!b[nxt])
                {
                    b[nxt] = true;
                    q.Enqueue(nxt);
                }
            }
        }
    }
}