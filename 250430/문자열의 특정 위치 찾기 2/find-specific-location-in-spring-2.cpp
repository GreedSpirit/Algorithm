#include <iostream>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;

    int ans = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i][2] == c || arr[i][3] == c){
            cout << arr[i] << '\n';
            ans++;
        }
    }
    cout << ans;
}