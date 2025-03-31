#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    while(true){
        if(n == 1) break;
        n = n / 2;
        cnt++;
    }
    cout << cnt;
}