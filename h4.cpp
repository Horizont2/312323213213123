#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int days;
    cout << "������ ������� ���: ";
    cin >> days;
    int weeks = days / 7;
    days %= 7;
    cout << "����: " << weeks << "�, ��: " << days << endl;
}
