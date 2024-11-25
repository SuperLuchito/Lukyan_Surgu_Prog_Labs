#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int rows = 5;
    const int cols = 5;
    int array[rows][cols];

    cout << "Заполнение массива по формуле (элемент больше суммы его индексов на 1):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 && j == 0) {
                array[i][j] = 1;
            } else {
                array[i][j] = i + j + 2;
            }
        }
    }

    cout << "Ваш массив:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << array[i][j];
        }
        cout << endl;
    }

    cout << "Произведение элементов в строках:" << endl;
    for (int i = 0; i < rows; i++) {
        int product = 1;
        for (int j = 0; j < cols; j++) {
            product *= array[i][j];
        }
        cout << "Произведение элементов строки " << i + 1 << ": " << product << endl;
    }

    return 0;
}