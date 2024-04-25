#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double distance_meters, time_minutes, time_seconds;
    cout << "Обчислення швидкості бігу." << endl;
    cout << "Введіть довжину дистанції (метрів): ";
    cin >> distance_meters;
    cout << "Введіть час (хв.сек): ";
    cin >> time_minutes >> time_seconds;
    double time_seconds_total = time_minutes * 60 + time_seconds;
    double speed_kmh = (distance_meters / 1000) / (time_seconds_total / 3600);
    cout << "Дистанція: " << distance_meters << " Рј." << endl;
    cout << "Час: " << time_minutes << " хв " << time_seconds << " сек = " << time_seconds_total << " сек." << endl;
    cout << "ви бігли зі швидкістю:"<< setprecision(2) << speed_kmh << " км/год." << endl;
}
