#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ai = "";
    string bi = "";

    for(auto c : a){
        if(!isdigit(c)){
            break;
        }
        ai += c;
    }

    for(auto c : b){
        if(!isdigit(c)){
            break;
        }
        bi += c;
    }

    cout << stoi(ai) + stoi(bi);

}