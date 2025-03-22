#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    stack<int> st;

    cin >> N;

    while(N--){
        int n;
        cin >> n;
        if(n % 2 == 0){
            st.push(n);
        }
    }

    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
}