#include <iostream>
using namespace std;

int main() {
    string a, b, ab, ba;
    cin >> a >> b;

    ab = a + b;
    ba = b + a;

    if(ab != ba){
        cout << "false";
    }
    else{
        cout << "true";
    }
}