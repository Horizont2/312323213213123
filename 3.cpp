#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double length, width, height;
    cout << "Обчислення об'єму паралелепіпеда." << endl;
    cout << "Введіть вихідні дані:" << endl;
    cout << "Довжина (см) -> ";
    cin >> length;
    cout << "Ширина (см) -> ";
    cin >> width;
    cout << "Висота (см) -> ";
    cin >> height;
    double volume = length * width * height;
    cout << "Об'єм: " << volume << " куб.см." << endl;
}
