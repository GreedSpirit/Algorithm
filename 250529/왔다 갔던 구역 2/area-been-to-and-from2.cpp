#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[2000] = {};

    int cur = 1000;

    while(n--){
        int x;
        char dir;
        cin >> x >> dir;

        if(dir == 'L'){
            for(int i = cur - 1; i >= cur - x; i--){
                arr[i]++;
            }
            cur = cur - x;
        }
        else{
            for(int i = cur; i < cur + x; i++){
                arr[i]++;
            }
            cur = cur + x;
        }
    }

    int ans = 0;
    for(auto a : arr){
        if(a >= 2){
            ans++;
        }
    }
    cout << ans;
}