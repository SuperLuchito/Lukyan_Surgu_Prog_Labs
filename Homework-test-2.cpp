#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 10;
    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i) {
                array[i][j] = i + 1;
            } else {
                array[i][j] = 0;
            }
        }
    }

    cout << "Сформированный массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << array[i][j];
        }
        cout << endl;
    }

    return 0;
}
