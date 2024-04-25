#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int scale;
    double distance_cm;
    cout << "Обчислення відстані між населеними пунктами." << endl;
    cout << "Введіть вихідні дані:" << endl;
    cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) ";
    cin >> scale;
    cout << "Відстань між точками, що зображують населені пункти (см) ";
    cin >> distance_cm;
    double distance_km = distance_cm / static_cast<double>(scale);
    cout << "Відстань між населеними пунктами " << distance_km << " км." << endl;
}
