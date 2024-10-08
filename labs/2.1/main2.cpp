/**
 * PART 2
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 121
 * Lab 2.1
 */
#include <iostream> 
using namespace std;

int main() {
    const int N = 10; 
    int arr1[N]; 
    int arr2[N]; 
    int arr3[N]; 

    // Ініціалізація першого масиву за формулою 120 - i
    for (int i = 0; i < N; i++) {
        arr1[i] = 120 - i;
    }

    // Ініціалізація другого масиву за формулою 110 + i
    for (int i = 0; i < N; i++) {
        arr2[i] = 110 + i;
    }

    // Ініціалізація третього масиву рівними значеннями з двох попередніх
    for (int i = 0; i < N; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

  
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr3[i] < 115) {
            count++; // Збільшуємо лічильник, якщо елемент менший за 115
        }
    }

    
    cout << "Кількість елементів, значення яких менше 115: " << count << endl;

    return 0; 
