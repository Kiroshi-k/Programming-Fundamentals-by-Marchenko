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
    // 1. Опис константи (R-value expression)
    const int A = 57;

    // 2. Опис та ініціювання змінної R-виразом
    int B = -12;
    int E = 10987;

    // 3. Ініціювання змінної L-виразом
    float C = 28.543;

    // 4. Літерал
    int D = -76;

    // Індикатор типу
    float F;

    // Обчислення виразу: A <БО1> <УО> B <АО1> <СО> C <ОВ> D <АО2> E <БО2> <БазО> F
    bool result = ((A & ~B) + (C * D) <= (D % E)) << sizeof(F);

    // Виведення результатів
    cout << "Результат обчислення виразу: " << result << endl;

    return 0;
}