#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    int cnt;
    while(m--){
        cnt = 0;
        int n;
        cin >> n;
        while(n != 1){
            cnt++;
            if(n % 2) n = n * 3 + 1;
            else n /= 2;
        }
        cout << cnt;
        cout << '\n';
    }
}