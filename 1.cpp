#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int year;
    cout << "������ ����� ����: ";
    cin >> year;
    int days = 365 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    cout << "� " << year << " ���� " << days << " ���." << endl;
}
