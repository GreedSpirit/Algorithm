#include <iostream>
using namespace std;

bool fun(string s) {
    int count[26] = {0};

    for (char c : s) {
        count[c - 'a'] = 1; 
    }

    int diff = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i]) diff++;
    }

    return diff >= 2;
}

int main() {
    string s;
    cin >> s;

    if (fun(s)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
