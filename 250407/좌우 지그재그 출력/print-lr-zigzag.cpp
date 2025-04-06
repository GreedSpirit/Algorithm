#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;

    for(int i = 1; i <= n; i++){
        int tmp = n * i;
        for(int j = 1; j <= n; j++){
            if(i % 2) cout << cnt << ' ';
            else{
                cout << tmp-- << ' ';
            }
            cnt++;
        }
        cout << '\n';
    }
}