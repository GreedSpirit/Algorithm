#include <iostream>
using namespace std;

int main() {
    int p;
    int total = 0;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        cin >> p;
        if(p == 0) break;
        else if(p % 2 == 0){
            total += p;
            cnt++;
        }
    }

    cout << cnt << ' ' << total;
}