#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int k;
    cout << "Введите количество элементов в массиве: ";
    cin >> k;

    float R[k];

    for (int i = 0; i < k; i++) {
        R[i] = rand() % 51 - 25;
    }

    cout << "Сгенерированный массив R:" << endl;
    for (int i = 0; i < k; i++) {
        cout << R[i] << " ";
    }
    cout << endl;

    float min_positive = 10000000;
    float max_negative = -1000000;

    for (int i = 0; i < k; i++) {
        if ((R[i] > 0) && (R[i] < min_positive)) {
            min_positive = R[i];
        } else if ((R[i] < 0) && (R[i] > max_negative)) {
            max_negative = R[i];
        }
    }

    cout << "Минимальный элемент среди положительных: " << min_positive << endl;
    cout << "Максимальный среди отрицательных: " << max_negative << endl;

    return 0;
}