#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int val = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << val++ << ' ';
        }
        cout << '\n';
    }
}