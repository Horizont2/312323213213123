#include <iostream>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double radius;
    cout << "ќбчисленн€ об'Їму кул≥." << endl;
    cout << "¬вед≥ть рад≥ус кул≥ (см) ";
    cin >> radius;
    double volume = (4.0 / 3) * M_PI * pow(radius, 3);
    cout << "ќб'Їм кул≥: " << volume << " куб.см." << endl;
}
