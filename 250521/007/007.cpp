#include <bits/stdc++.h>
using namespace std;

class Info {
    public :
    string s;
    char c;
    int t;

    Info(string s, char c, int t){
        this->s = s;
        this->c = c;
        this->t = t;
    }
};

int main() {
    string s;
    char c;
    int t;
    cin >> s >> c >> t;

    Info p = Info(s, c, t);

    cout << "secret code : " << p.s;
    cout << '\n';
    cout << "meeting point : " << p.c;
    cout << '\n';
    cout << "time : " << p.t;

}