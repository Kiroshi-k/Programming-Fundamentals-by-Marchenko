/** 121121
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 121
 * Lab 1.4
 */

#include <iostream>
using namespace std;

int main() {
    // 1. Опис змінних відповідно до значень в 5 варіанті (таблиця 9)
    unsigned short usVar = 1400;
    int intVar = -386;
    float floatVar = 4.4525;
    double doubleVar = -7.3e23;

    // 2. Опис вказівних змінних відповідних типів
    unsigned short* usPtr;
    int* intPtr;
    float* floatPtr;
    double* doublePtr;

    // 3. Опис нетипізованої вказівної змінної
    void* voidPtr;

    // 4. Ініціювання вказівних змінних адресами змінних
    usPtr = &usVar;
    intPtr = &intVar;
    floatPtr = &floatVar;
    doublePtr = &doubleVar;

    // 5. Ініціювання змінних через розіменування вказівних змінних
    *usPtr = 1400;
    *intPtr = -386;
    *floatPtr = 4.4525;
    *doublePtr = -7.3e23;

    // 6. Визначення розміру всіх змінних
    cout << "Size of unsigned short: " << sizeof(usVar) << " bytes" << endl;
    cout << "Size of int: " << sizeof(intVar) << " bytes" << endl;
    cout << "Size of float: " << sizeof(floatVar) << " bytes" << endl;
    cout << "Size of double: " << sizeof(doubleVar) << " bytes" << endl;

    // 7. Ініціювання нетипізованої вказівної змінної адресами типізованих вказівних змінних
    voidPtr = usPtr;
    cout << "Value via void pointer (unsigned short): " << *(unsigned short*)voidPtr << endl;

    voidPtr = intPtr;
    cout << "Value via void pointer (int): " << *(int*)voidPtr << endl;

    voidPtr = floatPtr;
    cout << "Value via void pointer (float): " << *(float*)voidPtr << endl;

    voidPtr = doublePtr;
    cout << "Value via void pointer (double): " << *(double*)voidPtr << endl;

    // 8. Опис посилання
    int& intRef = intVar;
    cout << "Value of intRef (reference to int): " << intRef << endl;

    return 0;
}

