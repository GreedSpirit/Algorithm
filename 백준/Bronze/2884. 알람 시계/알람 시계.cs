using System;

class HelloWorld {
    
  static void Main() {
    string input = Console.ReadLine();
    string[] numbers = input.Split(" ");

    int hour = int.Parse(numbers[0]);
    int minute = int.Parse(numbers[1]);

    if(minute >= 45){
        minute -= 45;
    }
    else{
        minute += 15;
        if(hour == 0){
            hour = 23;
        }
        else{
            hour -= 1;
        }
    }
    
    Console.WriteLine(hour + " " + minute);
  }
}