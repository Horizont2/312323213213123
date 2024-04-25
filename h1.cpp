#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int seconds;
    cout << "¬вед≥ть к≥льк≥сть секунд: ";
    cin >> seconds;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    cout << "„ас: " << hours << " год. " << minutes << " хв. " << seconds << " сек." << endl;
}
