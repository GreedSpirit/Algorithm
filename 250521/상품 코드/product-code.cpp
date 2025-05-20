#include <iostream>
using namespace std;

class info{
    public :
    string id;
    int lv;

    info(string s = "codetree", int i = 50){
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

    cout << "product " << p1.lv << " is " << p1.id;
    cout << '\n';
    cout << "product " << p2.lv << " is " << p2.id;
}