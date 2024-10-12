#include <iostream>
using namespace std;


struct Student {
    string name;
    char citizenship; // Символ для громадянства
    bool dormitory;   // Чи проживає в гуртожитку
};

// Опис перелічувального типу
enum Names { Ivan, Petro, Olga, Anna, Dmytro, Kateryna, Mykola };

// Опис індексованих змінних
char citizenships[7] = { 'U', 'U', 'F', 'U', 'F', 'U', 'U' }; // Громадянство: U - українець, F - іноземець
bool dormitory[7] = { true, false, true, true, false, true, false }; // Проживає в гуртожитку чи ні

int main() {
    // Опис масиву пойменованого типу
    Student students[7];

    // Ініціалізація масиву
    for (int i = 0; i < 7; i++) {
        students[i].name = (Names)i == Ivan ? "Ivan" : (Names)i == Petro ? "Petro" : (Names)i == Olga ? "Olga" :
            (Names)i == Anna ? "Anna" : (Names)i == Dmytro ? "Dmytro" : (Names)i == Kateryna ? "Kateryna" : "Mykola";
        students[i].citizenship = citizenships[i];
        students[i].dormitory = dormitory[i];
    }

    //  Обробка масиву - виведення студентів, що проживають в гуртожитку
    cout << "Students living in the dormitory:\n";
    for (int i = 0; i < 7; i++) {
        if (students[i].dormitory) {
            cout << "Name: " << students[i].name << ", Citizenship: " << students[i].citizenship << endl;
        }
    }

    return 0;
}
