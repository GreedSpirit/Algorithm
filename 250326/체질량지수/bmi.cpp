#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int bmi = 10000 * w / (h * h);

    cout << bmi;
    cout << '\n';

    if(bmi >= 25){
        cout << "Obesity";
    }
}