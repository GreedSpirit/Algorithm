#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[200][200] = {};

    while(n--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a += 100;
        b += 100;
        c += 100;
        d += 100;
        for(int i = a; i < c; i++){
            for(int j = b; j < d; j++){
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