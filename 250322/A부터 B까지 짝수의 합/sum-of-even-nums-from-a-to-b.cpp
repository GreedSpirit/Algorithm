#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int sum = 0;
    for(int i = A; i <= B; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    cout << sum;
}