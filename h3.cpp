#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double distance_meters, time_minutes, time_seconds;
    cout << "���������� �������� ���." << endl;
    cout << "������ ������� ��������� (�����): ";
    cin >> distance_meters;
    cout << "������ ��� (��.���): ";
    cin >> time_minutes >> time_seconds;
    double time_seconds_total = time_minutes * 60 + time_seconds;
    double speed_kmh = (distance_meters / 1000) / (time_seconds_total / 3600);
    cout << "���������: " << distance_meters << " м." << endl;
    cout << "���: " << time_minutes << " �� " << time_seconds << " ��� = " << time_seconds_total << " ���." << endl;
    cout << "�� ���� � ��������:"<< setprecision(2) << speed_kmh << " ��/���." << endl;
}
