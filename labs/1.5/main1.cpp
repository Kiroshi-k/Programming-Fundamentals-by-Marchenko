/**
 * PART 2
 * Done by:
 * Student Name: Kyryl Marchenko
 * Student Group: 12
 * Lab 1.5
 */

#include <iostream>
using namespace std;

int main() {
    // 1. ���� ��������� (R-value expression)
    const int A = 57;

    // 2. ���� �� ���������� ����� R-�������
    int B = -12;
    int E = 10987;

    // 3. ���������� ����� L-�������
    float C = 28.543;

    // 4. ˳�����
    int D = -76;

    // ��������� ����
    float F;

    // ���������� ������: A <��1> <��> B <��1> <��> C <��> D <��2> E <��2> <����> F
    bool result = ((A & ~B) + (C * D) <= (D % E)) << sizeof(F);

    // ��������� ����������
    cout << "��������� ���������� ������: " << result << endl;

    return 0;
}