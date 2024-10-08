/**
 * PART 1
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 121
 * Lab 2.1
 */
#include <iostream>  
#include <algorithm> 
using namespace std;

int main() {
    const int N = 10; 
    int arr[N]; // Оголошуємо масив типу int (цілі числа)

    // Ініціалізуємо масив
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) { 
            arr[i] = i + 5;
        }
        else { 
            arr[i] = i - 5;
        }
    }

    
    cout << "Масив до сортування: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " "; // Виводимо кожен елемент масиву
    }
    cout << endl; 

    // Сортуємо масив за зростанням
    sort(arr, arr + N); // Використовуємо стандартну функцію сортування

    // Виведення масиву після сортування
    cout << "Масив після сортування: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " "; // Виводимо кожен елемент масиву
    }
    cout << endl;

    return 0; 
}
