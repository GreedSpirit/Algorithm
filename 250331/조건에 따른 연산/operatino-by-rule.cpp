#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    while(n < 1000){
        if(n % 2) n = n * 2 + 2;
        else n = n * 3 + 1;
        cnt++;
    }
    cout << cnt;
}