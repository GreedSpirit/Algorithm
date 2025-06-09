#include <iostream>
using namespace std;

int main() {

    int arr[200][200] = {};

    int x1, y1, x2, y2;

    int n;
    cin >> n;

    bool red = true;

    while(n--){
        if(red){
            cin >> x1 >> y1 >> x2 >> y2;
            for(int i = x1 + 100; i < x2 + 100; i++){
                for(int j = y1 + 100; j < y2 + 100; j++){
                    arr[i][j] = 1;
                }
            }
        }
        else{
            cin >> x1 >> y1 >> x2 >> y2;
            for(int i = x1 + 100; i < x2 + 100; i++){
                for(int j = y1 + 100; j < y2 + 100; j++){
                    arr[i][j] = 2;
                }
            }
        }
        red = !red;
    }

    int ans = 0;

    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(arr[i][j] == 2){
                ans++;
            }
        }
    }

    cout << ans;

    

    return 0;
}