#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    while(true){
        if(n == 1) break;

        if(n % 2){
            n = n * 3 + 1;
        }
        else{
            n /= 2;
        }
        cnt++;
    }

    cout << cnt;
}