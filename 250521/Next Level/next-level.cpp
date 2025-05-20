#include <iostream>
using namespace std;

class info{
    public :
    string id;
    int lv;

    info(string s = "codetree", int i = 10){
        id = s;
        lv = i;
    }
};

int main() {
    string s;
    int i;
    cin >> s >> i;
    info p1 = info();
    info p2 = info(s, i);

    cout << "user " << p1.id << " lv " << p1.lv;
    cout << '\n';
    cout << "user " << p2.id << " lv " << p2.lv;
}