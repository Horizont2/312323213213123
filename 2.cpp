#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int hryvnia, kopecks;
    cout << "¬вед≥ть гривн≥: ";
    cin >> hryvnia;
    cout << "¬вед≥ть коп≥йки: ";
    cin >> kopecks;
    hryvnia += kopecks / 100;
    kopecks %= 100;
    cout << "—ума: " << hryvnia << " грн. " << kopecks << " коп." << endl;
}
