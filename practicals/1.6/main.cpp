/*
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 121
 * Practical 1.6
 */


#include <iostream>
using namespace std;

// Функція для визначення, яких бітів (0 чи 1) більше в двійковому поданні числа A
void countBits(int A) {
    int count0 = 0, count1 = 0;

    while (A > 0) {
        if (A & 1) { // Перевіряємо, чи останній біт 1
            count1++;
        }
        else {
            count0++;
        }
        A >>= 1; // Зсуваємо число праворуч на 1 біт
    }

    if (count1 > count0) {
        cout << "Бітів 1 більше.\n";
    }
    else if (count0 > count1) {
        cout << "Бітів 0 більше.\n";
    }
    else {
        cout << "Кількість бітів 0 і 1 однакова.\n";
    }
}

// Функція для моделювання операції XOR між двома послідовностями
void performXOR(int sequence1[], int sequence2[], int n) {
    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = sequence1[i] ^ sequence2[i]; // Виконуємо XOR
    }

    cout << "Результат операції XOR: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "Оберіть завдання:\n";
    cout << "1. Визначити, яких бітів (0 чи 1) більше в двійковому поданні числа A\n";
    cout << "2. Моделювання операції XOR між двома послідовностями\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    if (choice == 1) {
        int A;
        cout << "Введіть ціле число A: ";
        cin >> A;
        countBits(A);
    }
    else if (choice == 2) {
        int n;
        cout << "Введіть довжину послідовностей: ";
        cin >> n;

        int sequence1[n], sequence2[n];
        cout << "Введіть першу послідовність (0 або 1): ";
        for (int i = 0; i < n; i++) {
            cin >> sequence1[i];
        }

        cout << "Введіть другу послідовність (0 або 1): ";
        for (int i = 0; i < n; i++) {
            cin >> sequence2[i];
        }

        performXOR(sequence1, sequence2, n);
    }
    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}
