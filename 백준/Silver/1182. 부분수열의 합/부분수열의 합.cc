#include <bits/stdc++.h>
using namespace std;

int arr[25];
int N, S;
int ans;

void fun(int n, int sum){ //n번째 숫자를 더할 것인가 말것인가.
    if(n == N){
        if(sum == S) ans++;
        return;
    }
    fun(n + 1, sum);
    fun(n + 1, sum + arr[n]);
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> S;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    fun(0, 0);
    if(S == 0) ans--;
    cout << ans;
}