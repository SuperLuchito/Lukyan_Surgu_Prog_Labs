#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int array_size = 10;
    int random_array[array_size];
    int sum_even = 0;
    int product_odd = 1;
    int count_even = 0;
    int count_odd = 0;

    srand(time(0));

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < array_size; ++i) {
        random_array[i] = rand() % 90;
        cout << random_array[i] << " ";

        if (random_array[i] % 2 == 0) {
            sum_even += random_array[i];
            count_even++;
        } else {
            product_odd *= random_array[i];
            count_odd++;
        }
    }
    cout << endl;

    cout << "Сумма четных элементов: " << sum_even << " (Количество четных: " << count_even << ")" << endl;
    cout << "Произведение нечетных элементов: " << product_odd << " (Количество нечетных: " << count_odd << ")" << endl;

    return 0;
}
