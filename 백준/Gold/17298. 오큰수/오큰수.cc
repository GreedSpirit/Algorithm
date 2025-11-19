#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    stack<pair<int, int>> st;
    vector<int> v(1000000);
    
    for(int i = 0; i < N; i++){
        int h;
        cin >> h;
        
        while(!st.empty() && st.top().first < h){
            v[st.top().second] = h;
            st.pop();
        }
        st.push({h, i});
    }
    
    while(!st.empty()){
        v[st.top().second] = -1;
        st.pop();
    }
    
    for(int i = 0; i < N; i++){
        cout << v[i] << ' ';
    }
    return 0;
}