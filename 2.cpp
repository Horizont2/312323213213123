#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int hryvnia, kopecks;
    cout << "������ �����: ";
    cin >> hryvnia;
    cout << "������ ������: ";
    cin >> kopecks;
    hryvnia += kopecks / 100;
    kopecks %= 100;
    cout << "����: " << hryvnia << " ���. " << kopecks << " ���." << endl;
}
