#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arrw[20000] = {};
    int arrb[20000] = {};
    int arr[20000] = {}; // 0 빈 상태 1 흰 색 2 검은색 3 회색

    int cur = 10000;

    while(n--){
        int x;
        char dir;
        cin >> x >> dir;

        if(dir == 'L'){
            for(int i = cur; i >= cur - x + 1; i--){
                arr[i] = 1;
                arrw[i]++;
            }
            cur = cur - x + 1;
        }
        else{
            for(int i = cur; i <= cur + x - 1; i++){
                arr[i] = 2;
                arrb[i]++;
            }
            cur = cur + x - 1;
        }
    }

    int answ = 0;
    int ansb = 0;
    int ans = 0;
    for(int i = 0; i < 20000; i++){
        if(arrw[i] >= 2 && arrb[i] >= 2){
            arr[i] = 3;
        }
        if(arr[i] == 1) answ++;
        if(arr[i] == 2) ansb++;
        if(arr[i] == 3) ans++;
    }
    cout << answ << ' ' << ansb << ' ' << ans;
}