#include <iostream>
using namespace std;

class Info{
    public :
    string cd;
    char color;
    int time;

    Info(string s, char c, int i){
        cd = s;
        color = c;
        time = i;
    }
};

int main() {
    string s;
    char c;
    int i;
    cin >> s >> c >> i;

    Info info = Info(s, c, i);

    cout << "code : " << info.cd << '\n';
    cout << "color : " << info.color << '\n';
    cout << "second : " << info.time;
}