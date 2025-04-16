#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    while(n--){
        int i;
        cin >> i;

        if(i == m) cnt++;
    }
    cout << cnt;
}