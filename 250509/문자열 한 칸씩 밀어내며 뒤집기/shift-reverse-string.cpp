#include <iostream>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    string tmp = s;

    while(q--){
        int n;
        cin >> n;
        if(n == 1){
            tmp = s.substr(1, s.length() - 1) + s[0];
        }
        else if(n == 2){
            tmp = s[s.length() - 1] + s.substr(0, s.length() - 1);
        }
        else{
            for(int i = 0; i < s.length(); i++){
                tmp[i] = s[s.length() - 1 - i];
            }
        }
        s = tmp;
        cout << s << '\n';
    }
}