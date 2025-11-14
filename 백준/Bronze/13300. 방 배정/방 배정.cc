#include <bits/stdc++.h>
using namespace std;

int room(vector<int> arr, int k){
    int sum = 0;
    for(int i = 1; i < 7; i++){
        if (arr[i] == 0){
            continue;
        }
        else{
            sum = sum + (arr[i] + k - 1) / k;
        }
    }
    return sum;
}

int main(void){
    int N , K;
    cin >> N >> K;
    
    vector<int> g(7);
    vector<int> b(7);
    
    int S , Y;
    
    for(int i = 0; i < N; i++){
        cin >> S >> Y;
        if(S){
            b[Y]++;
        }
        else{
            g[Y]++;
        }
    }
    int sum;
    sum = room(b , K) + room(g , K);
    
    cout << sum;
}