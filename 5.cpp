#include <iostream>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double radius;
    cout << "���������� ��'��� ���." << endl;
    cout << "������ ����� ��� (��) ";
    cin >> radius;
    double volume = (4.0 / 3) * M_PI * pow(radius, 3);
    cout << "��'�� ���: " << volume << " ���.��." << endl;
}
