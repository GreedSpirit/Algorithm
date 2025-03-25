#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << N * N;
    cout << '\n';
    if(N < 5){
        cout << "tiny";
    }
}