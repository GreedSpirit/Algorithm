#include <iostream>
using namespace std;

int main() {
    int arr[200][200] = {};
    int n;
    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;
        x += 100;
        y += 100;
        for(int i = x; i < x + 8; i++){
            for(int j = y; j < y + 8; j++){
                arr[i][j] = 1;
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(arr[i][j]) ans++;
        }
    }

    cout << ans;


}