#include <iostream>
using namespace std;

int s, e;

int main() {
    cin >> s >> e;

    int ans = 0;
    bool b = false;

    for(int i = 2; i < 40; i++){
        if(i * i >= s && i * i <= e){
            b = false;
            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    b = true;
                    break;
                }

            }
            if(!b) ans++;
        }
    }
    cout << ans;

    return 0;
}
