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
    // 1. ���� ������ ����������� ����
    char symbol1, symbol2, symbol3;

    // 2. ���� �������� ����������� ����
    const char constSymbol1 = '=';
    const char constSymbol2 = '5';
    const char constSymbol3 = 'd';

    // 3. ���������� ��'���� ��� �����
    char initializedSymbol1 = '=';
    char initializedSymbol2 = '5';
    char initializedSymbol3 = 'd';

    // 4. ���������� ��'���� ���������� ��������� �� ������ �������
    symbol1 = 0x56;  // ��� ������� ��� 'V'
    symbol2 = 0x10;  // ��������� ������, ���� �� ������������ ��������
    symbol3 = 0x72;  // ��� ������� ��� 'r'

    // ��������� ����������
    cout << "���������: " << constSymbol1 << ", " << constSymbol2 << ", " << constSymbol3 << endl;
    cout << "����������� ��� �����: " << initializedSymbol1 << ", " << initializedSymbol2 << ", " << initializedSymbol3 << endl;
    cout << "����������� �� ������ �������: " << symbol1 << ", " << symbol2 << ", " << symbol3 << endl;

    return 0;
}
