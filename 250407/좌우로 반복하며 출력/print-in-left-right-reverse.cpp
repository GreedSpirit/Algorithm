#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2){
                cout << n - j + 1;
            }
            else{
                cout << j;
            }
        }
        cout << '\n';
    }
}