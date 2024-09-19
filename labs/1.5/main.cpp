/**121
 * PART 1 
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 12
 * Lab 1.5
 */

#include <iostream>
using namespace std;

int main() {
   
    float A1 = 17.4, B1 = 3.0;
    int C1 = 37, D1 = 54;

    float A2 = 15, B2 = 15;
    int C2 = 18, D2 = 12;

    // Обчислення для першого набору значень
    bool expr1_set1 = !(A1 != B1); // УЛО1 та ОВ1
    bool expr2_set1 = !(C1 ^ D1);  // УЛО3 та ОВ2 (XOR)
    bool result_set1 = expr1_set1 ^ expr2_set1;  // БЛО (XOR)

    // Обчислення для другого набору значень
    bool expr1_set2 = !(A2 != B2); // УЛО1 та ОВ1
    bool expr2_set2 = !(C2 ^ D2);  // УЛО3 та ОВ2 (XOR)
    bool result_set2 = expr1_set2 ^ expr2_set2;  // БЛО (XOR)

   
    cout << "Результати для першого набору значень:" << endl;
    cout << "Вираз: !(A1 != B1) ^ !(C1 ^ D1)" << endl;
    cout << "Результат: " << result_set1 << endl;

    cout << "\nРезультати для другого набору значень:" << endl;
    cout << "Вираз: !(A2 != B2) ^ !(C2 ^ D2)" << endl;
    cout << "Результат: " << result_set2 << endl;

    return 0;
}
