/**
 * PART 3
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 121
 * Lab 2.1
 */

#include <iostream>
using namespace std;

int main() {
    const int ROWS = 4;
    const int COLS = 5;
    float matrix[ROWS][COLS]; // Двовимірний масив 4x5
    float minValues[COLS]; 

    // Ініціалізація двовимірного масиву
    cout << "Введіть значення для 4x5 матриці:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j]; // Користувач вводить значення для кожного елемента
        }
    }

    // Знаходження мінімальних значень у кожному стовпці
    for (int j = 0; j < COLS; j++) {
        float minVal = matrix[0][j]; // Початкове значення - перший елемент стовпця
        for (int i = 1; i < ROWS; i++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j]; // Знаходимо мінімальне значення в стовпці
            }
        }
        minValues[j] = minVal; 
    }


    cout << "Мінімальні значення кожного стовпця:" << endl;
    for (int j = 0; j < COLS; j++) {
        cout << minValues[j] << " ";
    }
    cout << endl;

    return 0; 
}
