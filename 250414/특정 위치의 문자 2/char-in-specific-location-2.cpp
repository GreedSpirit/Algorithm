#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++){
        char n;
        cin >> n;
        if(i == 2 || i == 5 || i == 8){
            cout << n << ' ';
        }
    }
}