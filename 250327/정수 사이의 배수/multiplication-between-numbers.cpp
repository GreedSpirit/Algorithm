#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int total = 0;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(i % 5 == 0 || i % 7 == 0){
            total += i;
            cnt++;
        }
    }
    cout << total << ' ';

    cout << fixed;
    cout.precision(1);
    cout << (double)total / cnt;
}