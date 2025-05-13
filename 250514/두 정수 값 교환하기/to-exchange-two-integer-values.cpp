#include <iostream>
using namespace std;

void swap(int& n, int& m){
    int tmp = n;
    n = m;
    m = tmp;
}

int main() {
    int n, m;
    cin >> n >> m;
    swap(n,m);
    cout << n << ' ' << m;
}