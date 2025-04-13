#include <iostream>
using namespace std;

int main() {
    int n[10];
    bool chk = 0;

    double total;
    int cnt;
    total = 0;
    cnt = 0;

    for(int i = 0; i < 10; i++){
        cin >> n[i];
        total += n[i];
        cnt++;
        if(n[i] >= 250){
            chk = 1;
            break;
        }
    }

    if(chk){
        total -= n[cnt - 1];
        cout << total << ' ';

        total /= cnt - 1;
        cout << fixed;
        cout.precision(1);
        cout << total;
    }
    else{
        cout << total << ' ';

        total /= cnt;
        cout << fixed;
        cout.precision(1);
        cout << total;
    }
    
}