#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string A;
    cin >> A;

    int ans = 0;
    for(int i = 0; i < A.length(); i++){
        if(A[i] == '('){
            for(int j = i + 1; j < A.length(); j++){
                if(A[j] == ')') ans++;
            }
        }
    }
    cout << ans;
}