/**121
 * PART 2
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 12
 * Lab 1.5
 */

#include <iostream>
using namespace std;

int main() {
    // 1. Опис змінних типів int, float, unsigned short
    int intVar = 30679;
    float floatVar = 2.57e-4;
    unsigned short ushortVar = 2384;

    // 2. Ініціювання змінних з таблиці 15
    cout << "Значення змінних:" << endl;
    cout << "intVar = " << intVar << endl;
    cout << "floatVar = " << floatVar << endl;
    cout << "ushortVar = " << ushortVar << endl;

    // 3. Опис змінних типів double, int, char
    double doubleVar;
    int anotherIntVar;
    char charVar;

    // 4. Ініціювання змінних:
    // Неявне приведення типів (float до double)
    doubleVar = floatVar;

    // Явне приведення типів (unsigned short до int)
    anotherIntVar = static_cast<int>(ushortVar);

    // Механізм обходу суворої типізації (приведення int до char)
    charVar = *reinterpret_cast<char*>(&intVar);

    // Виведення результатів
    cout << "\nПісля приведення типів:" << endl;
    cout << "doubleVar (із floatVar) = " << doubleVar << endl;
    cout << "anotherIntVar (із ushortVar) = " << anotherIntVar << endl;
    cout << "charVar (із intVar через обхід суворої типізації) = " << charVar << endl;

    return 0;
}
