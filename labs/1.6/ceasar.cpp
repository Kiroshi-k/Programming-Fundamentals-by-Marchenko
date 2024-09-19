/**
 * PART 1
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 12
 * Lab 1.5
 */

#include <iostream>
using namespace std;

int main() {
    // 1. Опис змінних символьного типу
    char symbol1, symbol2, symbol3;

    // 2. Опис констант символьного типу
    const char constSymbol1 = '=';
    const char constSymbol2 = '5';
    const char constSymbol3 = 'd';

    // 3. Ініціювання об'єктів при опису
    char initializedSymbol1 = '=';
    char initializedSymbol2 = '5';
    char initializedSymbol3 = 'd';

    // 4. Ініціювання об'єктів оператором присвоєння за кодами символів
    symbol1 = 0x56;  // код символу для 'V'
    symbol2 = 0x10;  // невидимий символ, може не відображатися коректно
    symbol3 = 0x72;  // код символу для 'r'

    // Виведення результатів
    cout << "Константи: " << constSymbol1 << ", " << constSymbol2 << ", " << constSymbol3 << endl;
    cout << "Ініціалізовані при опису: " << initializedSymbol1 << ", " << initializedSymbol2 << ", " << initializedSymbol3 << endl;
    cout << "Ініціалізовані за кодами символів: " << symbol1 << ", " << symbol2 << ", " << symbol3 << endl;

    return 0;
}
