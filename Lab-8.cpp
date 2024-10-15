#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
    int age;
};

int main() {
    int numEmployees;
    cout << "Введите количество сотрудников: ";
    cin >> numEmployees;

    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Введите имя сотрудника: ";
        cin >> employees[i].name;
        cout << "Введите возраст сотрудника: ";
        cin >> employees[i].age;
    }

    string searchName;
    cout << "Введите имя сотрудника для поиска: ";
    cin >> searchName;

    int searchAge;
    cout << "Введите возраст сотрудника для поиска: ";
    cin >> searchAge;

    bool found = false;

    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].name == searchName && employees[i].age == searchAge) {
            cout << "Сотрудник найден: " << employees[i].name << ", Возраст: " << employees[i].age << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Сотрудники с именем " << searchName << " и возрастом " << searchAge << " не найдены." << endl;
    }

    return 0;
}