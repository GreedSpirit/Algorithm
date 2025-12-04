#include <bits/stdc++.h>;
using namespace std;

long long fun1(long long a, long long b, long long c){
    if(b == 1) return a % c;
    long long val = fun1(a,b/2,c);
    val = val * val % c;
    if(b % 2 == 1) val = val * a % c;
    return val % c;
}

int main(void){
    long long a, b, c;
    cin >> a >> b >> c;
    
    cout << fun1(a,b,c);
}



