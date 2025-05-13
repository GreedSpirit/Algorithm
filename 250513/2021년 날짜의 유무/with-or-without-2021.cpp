#include <iostream>
using namespace std;

int main() {
    int m, d;
    cin >> m >> d;

    if(m <= 12 && m >= 1){
        if(m == 2){
            if(d <= 28){
                cout << "Yes";
                return 0;
            }
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
            if(d <= 31){
                cout << "Yes";
                return 0;
            }
        }
        else{
            if(d <= 30){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}