#include <iostream>
using namespace std;

bool fun369(int n){
    string ns = to_string(n);
    for(auto c : ns){
        if(c == '3' || c == '6' || c == '9') return true;
    }
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;

    for(int i = a; i <= b; i++){
        if(fun369(i) || i % 3 == 0){
            ans++;
        }
    }
    cout << ans;

}