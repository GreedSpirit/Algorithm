#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;

    while(q--){
        int id;
        cin >> id;

        if(id == 1){
            int a, b;
            cin >> a >> b;
            char tmp = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = tmp;
        }
        else{
            char x, y;
            cin >> x >> y;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == x) s[i] = y;
            }
        }
        cout << s << '\n';
    }

}