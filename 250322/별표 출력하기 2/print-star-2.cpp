#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << '\n';
    }
}