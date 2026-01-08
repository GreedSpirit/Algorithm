using System;

class HelloWorld {
    
  static void Main() {
    int input = int.Parse(Console.ReadLine());

    bool answer = (input % 4 == 0 && input % 100 != 0) || input % 400 == 0;
    
    Console.WriteLine(answer ? 1 : 0);
  }
}