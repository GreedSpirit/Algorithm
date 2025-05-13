#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getMonthDays(int year, int month) {
    if (month < 1 || month > 12) return -1;

    int days_in_month[] = { 31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeap(year)) return 29;
    return days_in_month[month - 1];
}

string getSeason(int month) {
    if (3 <= month && month <= 5) return "Spring";
    if (6 <= month && month <= 8) return "Summer";
    if (9 <= month && month <= 11) return "Fall";
    return "Winter"; 
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    int max_day = getMonthDays(y, m);

    if (max_day == -1 || d < 1 || d > max_day) {
        cout << -1 << '\n';
    } else {
        cout << getSeason(m) << '\n';
    }

    return 0;
}
