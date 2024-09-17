#include <iostream>

using namespace std;

int main() {

    int k;

    cin >> k;

    float R[k];

    float min_positive = 10000000;
    float max_negative = -1000000;

    for (int i = 0; i < k; i++) {
        cin >> R[i];
        if ((R[i] >= 0) and (R[i] < min_positive)) {
            min_positive = R[i];
        } else if ((R[i] < 0) and (R[i] > max_negative)) {
            max_negative = R[i];
        }
    }

    cout << "Минимальный элемент среди положительных: " << min_positive << endl << "Максимальный среди отрицательных: " << max_negative;

    return 0;
}