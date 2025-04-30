#include <iostream>
using namespace std;

int main() {
    string arr[10];
    char c;
    int t = 0;

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cin >> c;

    for(int i = 0; i < 10; i++){
        if(arr[i][arr[i].length() - 1] == c){
            t++;
            cout << arr[i] << '\n';
        }
    }
    if(t == 0) cout << "None";
}