#include <bits/stdc++.h>
using namespace std;


int main(void){
    vector<int> v(26);
    string s;
    cin >> s;
    
    for(int c : s){
        v[c - 'a']++;
    }
    
    for(int i : v){
        cout << i << " ";
    }
}