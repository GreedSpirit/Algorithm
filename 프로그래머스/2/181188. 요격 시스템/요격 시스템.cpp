#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b){
    return a[1] < b[1];
}

int solution(vector<vector<int>> targets) {
    int answer = 0;
    
    sort(targets.begin(), targets.end(), cmp);
    
    int maxe = 0;
    
    for(auto a : targets){
        if(a[0] < maxe && maxe <= a[1]){
            continue;   
        }
        else{
            answer++;
            maxe = a[1];
        }
    }    
    return answer;
}