#include <iostream>
using namespace std;

int main() {
    int days_in_month[12] = {31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31};
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total_days = 0;

    if (a == c) {
        total_days = d - b + 1;
    } else {
        // a월의 남은 일수
        total_days += days_in_month[a - 1] - b + 1;
        // a월 이후 c월 이전까지
        for (int month = a; month < c - 1; month++) {
            total_days += days_in_month[month];
        }
        // c월의 d일까지
        total_days += d;
    }

    cout << total_days << '\n';

    return 0;
}