#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
    int age;
    string position;
    double salary;
};

int main() {
    const int numEmployees = 3;
    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Введите имя сотрудника: ";
        cin >> employees[i].name;
        cout << "Введите возраст: ";
        cin >> employees[i].age;
        cout << "Введите должность: ";
        cin >> employees[i].position;
        cout << "Введите зарплату: ";
        cin >> employees[i].salary;
    }

    string searchName;
    cout << "Введите имя сотрудника для поиска: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].name == searchName) {
            cout << "Сотрудник найден: " << employees[i].name 
                 << ", Возраст: " << employees[i].age 
                 << ", Должность: " << employees[i].position 
                 << ", Зарплата: " << employees[i].salary << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Сотрудник с именем " << searchName << " не найден." << endl;
    }

    return 0;
}