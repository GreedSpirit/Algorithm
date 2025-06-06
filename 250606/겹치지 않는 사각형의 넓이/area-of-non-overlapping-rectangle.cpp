#include <iostream>
using namespace std;

int main() {

    int arr[2000][2000] = {};

    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + 1000; i < x2 + 1000; i++){
        for(int j = y1 + 1000; j < y2 + 1000; j++){
            arr[i][j] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + 1000; i < x2 + 1000; i++){
        for(int j = y1 + 1000; j < y2 + 1000; j++){
            arr[i][j] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + 1000; i < x2 + 1000; i++){
        for(int j = y1 + 1000; j < y2 + 1000; j++){
            arr[i][j] = 0;
        }
    }

    int ans = 0;

    for(int i = 0; i < 2000; i++){
        for(int j = 0; j < 2000; j++){
            if(arr[i][j]) ans++;
        }
    }

    cout << ans;


    // Please write your code here.
    return 0;
}