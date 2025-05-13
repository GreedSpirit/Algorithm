#include <iostream>
using namespace std;

bool isYoon(int y){
    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 != 0){
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    int y;
    cin >> y;
    if(isYoon(y)) cout << "true";
    else cout << "false";
}