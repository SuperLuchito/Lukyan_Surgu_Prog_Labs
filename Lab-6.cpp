#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);

    int ascii_table[256] = {0};

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        int count = ascii_table[int(c)];
        count++;
        ascii_table[int(c)] = count;
    }

    for (int i = 0; i < 256; i++) {
        if (ascii_table[i] > 0) {
            printf("Количество символов '%c': %d\n", char(i), ascii_table[i]);
        }
    }

    return 0;
}