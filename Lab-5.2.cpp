#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int B[5][5];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            B[i][j] = rand() % 51 - 25;
        }
    }

    int sumDiagonal = 0;
    int sumBelowDiagonal = 0;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (i == j) {
                sumDiagonal += B[i][j];
            } else {
                sumBelowDiagonal += B[i][j];
            }
        }
    }

    cout << "Массив B" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << setw(4) << B[i][j];
        }
        cout << endl;
    }

    cout << "Сумма элементов на главной диагонали: " << sumDiagonal << endl;
    cout << "Сумма элементов под главной диагональю: " << sumBelowDiagonal << endl;

    return 0;
}