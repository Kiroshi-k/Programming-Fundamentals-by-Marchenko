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
    // 1. ���� ������ ���� int, float, unsigned short
    int intVar = 30679;
    float floatVar = 2.57e-4;
    unsigned short ushortVar = 2384;

    // 2. ���������� ������ � ������� 15
    cout << "�������� ������:" << endl;
    cout << "intVar = " << intVar << endl;
    cout << "floatVar = " << floatVar << endl;
    cout << "ushortVar = " << ushortVar << endl;

    // 3. ���� ������ ���� double, int, char
    double doubleVar;
    int anotherIntVar;
    char charVar;

    // 4. ���������� ������:
    // ������ ���������� ���� (float �� double)
    doubleVar = floatVar;

    // ���� ���������� ���� (unsigned short �� int)
    anotherIntVar = static_cast<int>(ushortVar);

    // ������� ������ ������ �������� (���������� int �� char)
    charVar = *reinterpret_cast<char*>(&intVar);

    // ��������� ����������
    cout << "\nϳ��� ���������� ����:" << endl;
    cout << "doubleVar (�� floatVar) = " << doubleVar << endl;
    cout << "anotherIntVar (�� ushortVar) = " << anotherIntVar << endl;
    cout << "charVar (�� intVar ����� ����� ������ ��������) = " << charVar << endl;

    return 0;
}
