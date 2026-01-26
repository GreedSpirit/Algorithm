using System;
using System.Collections.Generic;

class HelloWorld {
  static void Main() {
      string inp = Console.ReadLine();
      int n = int.Parse(inp);
      
      Stack<int> st = new Stack<int>();
      
      for(int i = 0; i < n; i++){
          int t = int.Parse(Console.ReadLine());
          
          if(t != 0)
            {
                st.Push(t);
            }
            else
            {
                st.Pop();
            }
      }

      int answer = 0;

      foreach(var num in st)
        {
            answer += num;
        }
      
    Console.WriteLine(answer);
  }
}