#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
};

int main() {
    int numEmployees;
    cout << "Введите количество сотрудников: ";
    cin >> numEmployees;

    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Введите имя сотрудника: ";
        cin >> employees[i].name;
    }

    string searchName;
    cout << "Введите имя сотрудника для поиска: ";
    cin >> searchName;

    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].name == searchName) {
            cout << "Сотрудник найден: " << employees[i].name << endl;
            return 0;
        }
    }

    cout << "Сотрудник с именем " << searchName << " не найден." << endl;

    return 0;
}