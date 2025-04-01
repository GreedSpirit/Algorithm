#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < 2 * n - 1; i++){
        if(i < n) cnt++;
        else cnt--;
        for(int j = 0; j < cnt; j++){
            cout << "* ";
        }
        cout << '\n';
    }
}