#include <bits/stdc++.h>
using namespace std;

long long solution(int r1, int r2) {
    long long answer = 0;
    long long ymin = 0;
    long long ymax = 0;
    for(int i = 1; i < r1; i++){
        long long y = ceil(sqrt(((long long)r1 * r1 - (long long)i * i)));
        ymin += y;
    }
    for(int i = 1; i <= r2; i++){
        long long y = floor(sqrt(((long long)r2 * r2 - (long long)i * i)));
        ymax += (y + 1);
    }
    
    answer = ymax - ymin;
    answer = answer * 4;
    return answer;
}