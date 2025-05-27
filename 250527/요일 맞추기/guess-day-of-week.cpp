#include <iostream>
using namespace std;

int main() {
    int days_in_month[12] = {31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31};
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int total_days = 0;

    if (a == c) {
        total_days = d - b;
    } else {
        // a월의 남은 일수
        total_days += days_in_month[a - 1] - b;
        // a월 이후 c월 이전까지
        for (int month = a; month < c - 1; month++) {
            total_days += days_in_month[month];
        }
        // c월의 d일까지
        total_days += d;
    }

    cout << days[(total_days + 7000) % 7] << '\n';

    return 0;
}