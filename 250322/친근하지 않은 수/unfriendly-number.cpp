#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for(int i = 1; i <= N; i++){
        if(i % 2 == 0 || i  % 3 == 0 || i % 5 == 0){
            sum++;
        }
    }
    cout << N - sum;
}