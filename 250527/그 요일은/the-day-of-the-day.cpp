#include <iostream>
#include <string>
using namespace std;

int main() {
    int days_in_month[12] = {31, 29, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31};

    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int a, b, c, d;
    string s;
    cin >> a >> b >> c >> d >> s;

    // 누적 일수 계산
    int start = 0, end = 0;
    for(int i = 0; i < a - 1; i++) start += days_in_month[i];
    start += b - 1;

    for(int i = 0; i < c - 1; i++) end += days_in_month[i];
    end += d - 1;

    int diff_days = end - start;

    // 요일 인덱스 찾기
    int s_idx = 0;
    for(int i = 0; i < 7; i++) {
        if(days[i] == s) {
            s_idx = i;
            break;
        }
    }

    // 시작 요일 인덱스 (a/b가 월요일)
    int first_day_idx = 0;

    // 완전 주 단위에서의 개수
    int total_days = diff_days + 1;
    int cnt = total_days / 7;

    // 남은 날 중 s요일 포함 여부
    int rem = total_days % 7;
    for(int i = 0; i < rem; i++) {
        if((first_day_idx + i) % 7 == s_idx) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}