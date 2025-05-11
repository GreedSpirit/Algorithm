#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = a + b;

    string tmp = to_string(ans);
    int cnt = 0;
    for(int i = 0; i < tmp.length(); i++){
        if(tmp[i] == '1') cnt++;
    }
    cout << cnt;
}