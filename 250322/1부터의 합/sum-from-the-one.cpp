#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
        if(sum >= N){
            cout << i;
            break;
        }
    }
}