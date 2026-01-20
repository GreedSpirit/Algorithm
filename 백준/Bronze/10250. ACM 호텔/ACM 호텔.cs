using System;
class HelloWorld {
    static void Main() {
        string inp = Console.ReadLine();
        int t = int.Parse(inp);
        
        for(int i = 0; i < t; i++){
            string input = Console.ReadLine();
            string[] nums = input.Split(" ");
            
            int h = int.Parse(nums[0]);
            int w = int.Parse(nums[1]);
            int p = int.Parse(nums[2]);
            
            int hc = 1;
            
            while(p > h){
                p -= h;
                hc++;
            }
            
            string answer = "";
            
            if(hc > 9){
                answer = p + "" + hc;
            }
            else{
                answer =p + "0" + hc;
            }
            
            Console.WriteLine(answer);
        }
    }
}