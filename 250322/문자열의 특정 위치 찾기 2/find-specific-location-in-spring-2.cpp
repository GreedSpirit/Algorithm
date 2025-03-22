#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    int ans = 0;

    string st[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    for(int i = 0; i < 5; i++){
        if(st[i][2] == c || st[i][3] == c){
            cout << st[i] << '\n';
            ans++;
        }
    }
    cout << ans;
}