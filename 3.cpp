#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double length, width, height;
    cout << "���������� ��'��� �������������." << endl;
    cout << "������ ������ ���:" << endl;
    cout << "������� (��) -> ";
    cin >> length;
    cout << "������ (��) -> ";
    cin >> width;
    cout << "������ (��) -> ";
    cin >> height;
    double volume = length * width * height;
    cout << "��'��: " << volume << " ���.��." << endl;
}
