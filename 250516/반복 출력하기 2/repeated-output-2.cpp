#include <iostream>
using namespace std;

void PrintWord(int n){
    if(n == 0){
        return;
    }
    PrintWord(n - 1);
    cout << "HelloWorld\n";
}

int main() {
    int n;
    cin >> n;
    PrintWord(n);

}