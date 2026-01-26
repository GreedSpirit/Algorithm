using System;
using System.Collections.Generic;
using System.Text;


class HelloWorld {
  static void Main() {
      string inp = Console.ReadLine();
      int n = int.Parse(inp);
      
      Stack<int> st = new Stack<int>();
      StringBuilder answer = new StringBuilder();
      int cnt = 1;
      
      for(int i = 0; i < n; i++){
          int t = int.Parse(Console.ReadLine());
          
          while(t >= cnt){
              st.Push(cnt++);
              answer.Append("+\n");
          }
          
          if(st.Peek() == t){
              st.Pop();
              answer.Append("-\n");
          }
          else{
              Console.WriteLine("NO");
              return;
          }
      }
      
    Console.WriteLine(answer.ToString());
  }
}