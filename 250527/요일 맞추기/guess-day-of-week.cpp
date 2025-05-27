#include <iostream>
using namespace std;

int main() {
    int days_in_month[12] = {31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31};
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int total_days_a = 0, total_days_c = 0;
    for (int i = 0; i < a - 1; i++) total_days_a += days_in_month[i];
    total_days_a += b - 1;

    for (int i = 0; i < c - 1; i++) total_days_c += days_in_month[i];
    total_days_c += d - 1;

    int diff = total_days_c - total_days_a;
    cout << days[(diff % 7 + 7) % 7] << '\n';

    return 0;
}