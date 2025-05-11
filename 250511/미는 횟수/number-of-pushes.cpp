#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int n = -1;

    for(int i = 0; i < A.length(); i++){
        string tmp = A.substr(A.length() - i, i) + A.substr(0, A.length() - i);
        if(tmp == B){
            n = i;
            break;
        }
    }
    cout << n;
}