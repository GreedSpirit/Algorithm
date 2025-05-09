#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;

    int lc = 0;
    int rc = 0;

    string lr;
    cin >> lr;

    for(int i = 0; i < lr.length(); i++){
        if(lr[i] == 'L') lc++;
        else rc++;
    }

    if(lc >= rc){
        int cnt = lc - rc;
        cnt = cnt % a.length();
        cout << a.substr(cnt) + a.substr(0, cnt);
    }
    else{
        int cnt = rc - lc;
        cnt = cnt % a.length();
        cout << a.substr(a.length() - cnt) + a.substr(0, a.length() - cnt);
    }

}