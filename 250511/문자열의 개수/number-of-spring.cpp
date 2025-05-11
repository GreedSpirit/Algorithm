#include <iostream>
using namespace std;

int main() {
    int cnt = 1;
    string arr[200];

    while(true){
        string s;
        cin >> s;
        if(s == "0") break;
        arr[cnt++] = s;
    }

    cout << cnt - 1 << '\n';

    for(int i = 1; i < cnt; i++){
        if(i % 2){
            cout << arr[i] << '\n';
        }
    }

}