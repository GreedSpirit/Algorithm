using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        Queue<int> bridge = new Queue<int>();
        int currentWeight = 0;
        int time = 0;
        int truckIndex = 0;

        for (int i = 0; i < bridge_length; i++)
        {
            bridge.Enqueue(0);
        }

        while (truckIndex < truck_weights.Length)
        {
            time++;
            currentWeight -= bridge.Dequeue();

            if (currentWeight + truck_weights[truckIndex] <= weight)
            {
                bridge.Enqueue(truck_weights[truckIndex]);
                currentWeight += truck_weights[truckIndex];
                truckIndex++;
            }
            else
            {
                bridge.Enqueue(0);
            }
        }

        return time + bridge_length;
    }
}