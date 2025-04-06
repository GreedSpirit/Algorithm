#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p = 1;
    int m = n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j % 2){
                cout << m - i;
            }
            else{
                cout << p + i;
            }
        }
        cout << '\n';
    }
}