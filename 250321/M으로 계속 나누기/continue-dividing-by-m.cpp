#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    while(N != 0){
        cout << N;
        cout << '\n';
        N = N / M;
    }
    
    return 0;
}
