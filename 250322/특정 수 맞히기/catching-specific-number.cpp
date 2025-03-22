#include <iostream>
using namespace std;

int main() {
    while(true){
        int n;
        cin >> n;

        if(n == 25){
            cout << "Good";
            return 0;
        }
        else if(n > 25){
            cout << "Lower\n";
        }
        else{
            cout << "Higher\n";
        }
    }
}