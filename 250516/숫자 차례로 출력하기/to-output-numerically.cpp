#include <iostream>

using namespace std;

int N;

void PrintNum(int n){
    if(n == 0) return;
    PrintNum(n - 1);
    cout << n << ' ';
}
void PrintNum2(int n){
    if(n == 0) return;
    cout << n << ' ';
    PrintNum2(n - 1);
    
}

int main() {
    cin >> N;

    PrintNum(N);
    cout << '\n';
    PrintNum2(N);

    return 0;
}