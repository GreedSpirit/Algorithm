#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int cnt = 0;
    int n;

    for(int i = 0; i < 10; i++){
        cin >> n;
        if(0 <= n && n <= 200){
            total += n; 
            cnt++;
        } 
    }
    cout << total << ' ';
    cout << fixed;
    cout.precision(1);
    cout << (double)total / cnt;
}