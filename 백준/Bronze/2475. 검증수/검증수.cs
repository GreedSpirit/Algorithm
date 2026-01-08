using System;

class HelloWorld {
    
  static void Main() {
    string input = Console.ReadLine();
    string[] numbers = input.Split(' ');
    int answer = 0;
    foreach(string s in numbers){
        int t = int.Parse(s);
        answer = (answer + (t * t) % 10) % 10;
    }
    Console.WriteLine(answer);
  }
}