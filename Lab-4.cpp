#include <iostream>

using namespace std;

int main() 
{
    int a;

    for (int j = 0; j <= 9; j++) {
        for (int i = 0; i <= 9; i++) {
            a = 42040 + j * 100 + i;
            if (a % 72 == 0) {
                cout << a << endl;
            }
        }
    }
    return 0;
}