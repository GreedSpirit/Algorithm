#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        int j;
        cin >> j;

        if(j == 2) cnt++;
        if(cnt == 3){
            cout << i;
            break;
        }
    }
}