#include <iostream>
using namespace std;

int main() {
    int gender;
    int age;
    cin >> gender >> age;

    if(age >= 19){
        if(gender == 0) cout << "MAN";
        else cout << "WOMAN";
    }
    else{
        if(gender == 0) cout << "BOY";
        else cout << "GIRL";
    }
}