#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double amount;
    cout << "������ ������� �����: ";
    cin >> amount;
    int hryvnia = static_cast<int>(amount);
    int kopecks = static_cast<int>((amount - hryvnia) * 100);
    cout << "����: " << hryvnia << " ���. " << kopecks << " ���." << endl;
}
