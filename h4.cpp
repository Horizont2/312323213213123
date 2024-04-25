#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int days;
    cout << "Ââåä³òü ê³ëüê³ñòü äí³â: ";
    cin >> days;
    int weeks = days / 7;
    days %= 7;
    cout << "Òèæí³: " << weeks << "³, äí³: " << days << endl;
}
