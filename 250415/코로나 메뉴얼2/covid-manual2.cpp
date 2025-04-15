#include <iostream>
using namespace std;

int arr[4];

int main() {
    char c;
    double n;

    for(int i = 0; i < 3; i++){
        cin >> c >> n;
        if(c == 'Y' && n >= 37) arr[0]++;
        else if(c == 'N' && n >= 37) arr[1]++;
        else if(c == 'Y') arr[2]++;
        else arr[3]++;
    }
    for(int i = 0; i < 4; i++){
        cout << arr[i] << ' ';
    }
    if(arr[0] >= 2) cout << 'E';
}