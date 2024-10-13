#include <iostream>
#include <string>

using namespace std;


struct Student {
    string name;  // Ім'я 
    int course;   // Курс
    bool dorm;    // Проживає в гуртожитку чи ні
};

// Перелічувальний тип для курсів
enum Course { First = 1, Second, Third };


int main() {
    
    Student students[7];

    // Ініціалізація масиву студентів
    students[0] = { "Анна", First, true };
    students[1] = { "Олег", Second, false };
    students[2] = { "Іван", Third, true };
    students[3] = { "Марія", First, true };
    students[4] = { "Дмитро", Second, false };
    students[5] = { "Оксана", Third, true };
    students[6] = { "Андрій", First, false };

    // Обробка масиву студентів
    int firstYearInDorm = 0; // Кількість студентів 1-го курсу, що живуть у гуртожитку

    for (int i = 0; i < 7; i++) {
        if (students[i].course == First && students[i].dorm) {
            firstYearInDorm++;
        }
    }

    
    cout << "Кількість студентів 1-го курсу, що проживають у гуртожитку: " << firstYearInDorm << endl;

    return 0;
}
