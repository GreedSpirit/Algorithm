#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    while(n--){
        int total = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        total = a + b + c + d;
        if(total / 4 >= 60){
            cnt++;
            cout << "pass";
        }
        else{
            cout << "fail";
        }
        cout << '\n';
    }
    cout << cnt;
}