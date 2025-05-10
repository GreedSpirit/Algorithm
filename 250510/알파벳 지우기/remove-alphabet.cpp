#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string ai = "";
    string bi = "";

    for(auto c : a){
        if(isdigit(c)){
            ai += c;
        }
    }
    for(auto c : b){
        if(isdigit(c)){
            bi += c;
        }
    }

    cout << stoi(ai) + stoi(bi);
}