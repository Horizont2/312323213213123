#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int scale;
    double distance_cm;
    cout << "���������� ������ �� ���������� ��������." << endl;
    cout << "������ ������ ���:" << endl;
    cout << "������� ����� (������� �������� � ������ ���������) ";
    cin >> scale;
    cout << "³������ �� �������, �� ���������� ������� ������ (��) ";
    cin >> distance_cm;
    double distance_km = distance_cm / static_cast<double>(scale);
    cout << "³������ �� ���������� �������� " << distance_km << " ��." << endl;
}
