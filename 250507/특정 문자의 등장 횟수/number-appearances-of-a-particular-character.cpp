#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.length();

    int ee = 0;
    int eb = 0;

    for(int i = 0; i < l - 1; i++){
        if(s.substr(i, 2) == "ee") ee++;
        if(s.substr(i, 2) == "eb") eb++;
    }
    cout << ee << ' ' << eb;
}