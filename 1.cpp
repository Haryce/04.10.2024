#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int sec; //переменная для получения данныз пользователя
    cout << "Введите количество секунд прошедших с начала дня: ";
    cin >> sec;
    //переменные которые будет считать сколько прошло с начала дня
    int total_seconds_in_day = 86400; // 24 * 60 * 60
    int seconds_left = total_seconds_in_day - sec;
    int hours_left = seconds_left / 3600;
    int minutes_left = (seconds_left % 3600) / 60;
    int seconds_left_final = seconds_left % 60;

    cout << "До полуночи осталось " << hours_left << " часов, " << minutes_left << " минут, " << seconds_left_final << " секунд.\n";

    return 0;
}
