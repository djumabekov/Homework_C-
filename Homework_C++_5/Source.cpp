#include <iostream>
using namespace std;
#include <cmath>

/*7. *������������ ������ � ���������� ��� ����� �����.
���� ��� ����� �����, �� ������� �� ����� 1, ����� ������� 0.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int number1;
    int number2;

    cout << "������� ������ �����" << endl;
    cin >> number1;
    cout << "������� ������ �����" << endl;
    cin >> number2;

    if (number1 == number2) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}
*/

/*10. *������������ ������ � ���������� 2 �����.
���� �� ����� ������ ����, �� ������� �� ����� �� �����, ����� � ������� �� ����� �� ��������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int number1;
    int number2;

    cout << "������� ������ �����" << endl;
    cin >> number1;
    cout << "������� ������ �����" << endl;
    cin >> number2;

    if (number1 + number2 > 0) {
        cout << "number1 + number2 = " << number1 + number2 << endl;
    }
    else {
        cout << "number1 - number2 = " << number1 - number2 << endl;

    }

    return 0;
}
*/
/*11. **������������ � ���������� ������ 5 ������ ��������.
����������, ������� �� ������� � ��������.
������� �������� ������, ���� ��� ������� ���� 4 ����� � ���� (�� ������ 4 ������).
����������. ��� ���������� �������� ����� ����������� ������������ (�������) ��� ������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int number1;
    int number2;
    int number3;
    int number4;
    int number5;

    float result;

    cout << "������� ������ ������" << endl;
    cin >> number1;
    cout << "������� ������ ������" << endl;
    cin >> number2;
    cout << "������� ������ ������" << endl;
    cin >> number3;
    cout << "������� ��������� ������" << endl;
    cin >> number4;
    cout << "������� ����� ������" << endl;
    cin >> number5;

    result = (float(number1) + number2 + number3 + number4 + number5) / 5;

    if (result >= 4) {

        cout << "������� ������ " << result << " �����(-��) � ������� ������" << endl;
    }
    else {
        cout << "������� ������ " << result << " �����(-��) � ��������� ������" << endl;

    }

    return 0;
}
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int MonthNum;

    cout << "������� ����� ������ �� 1 �� 12" << endl;
    cin >> MonthNum;

    if (MonthNum == 11 || MonthNum == 12 || MonthNum == 2) {
        cout << "����� ���������� � ����" << endl;

    }
    else if (MonthNum == 3 || MonthNum == 4 || MonthNum == 5) {
        cout << "����� ���������� � �����" << endl;

    }
    else if (MonthNum == 6 || MonthNum == 7 || MonthNum == 8) {
        cout << "����� ���������� � ����" << endl;

    }
    else {
        cout << "����� ���������� � �����" << endl;

    }

    return 0;
}
*/

/*29. ***����������, �������� �� ����������� �� ��������� a, b, c ��������������
*/
/*33. ***������������ ������ � ���������� 3 �����. ����������, ���������� �� ����������� � ������ ���������.*/

/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    int b;
    int c;
    int max, A, B;

    cout << "������� ������ ������� �����������" << endl;
    cin >> a;
    cout << "������� ������ ������� �����������" << endl;
    cin >> b;
    cout << "������� ������ ������� �����������" << endl;
    cin >> c;


    if (a >= b && a >= c) {
        max = a;
        A = b;
        B = c;
    }
    else if (b>=a && b>=c) {
        max = b;
        A = a;
        B = c;
    }
    else if (c >= a && c >= b) {
        max = c;
        A = b;
        B = a;
    }

    if (A + B > max) {
        if (A == B || B == max || A == max) {
            cout << "���������� �������� ��������������" << endl;
        }
        else {
            cout << "���������� �������� ����������������" << endl;
        }
    }
    else {
        cout << "���������� � ������ ��������� �� ����� ������������" << endl;

    }

    return 0;
}

*/

/*�������������� ������:
***������ ������ ��� ������������� ���������, ������ ��������������� ����������: +,-,*,/,%.
2. ������������ ������ ��� ����� �����. ������� �� ����� ������� �� ���� �����.
3. ������������ ������ ��� ����� �����. �������� �� ����� ���������� �� ���.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    int b;
    int c;
    int d;
    int result;

    cout << "������� ������ �����" << endl;
    cin >> a;
    cout << "������� ������ �����" << endl;
    cin >> b;

    c = a / b;
    c = ((c + 2) / (c + 1)) % 2;
    d = (c + 1) % 2;
    result = a * c + b * d; // ��������� ������� �����
    cout << "���������� �����: " << result << endl; //6

    result = a + b - result; // ��������� ������� �����
    cout << "���������� �����: " << result << endl; //5

    cout << "\n�������������� �������" << endl;

    int min = (a + b - abs(a - b)) / 2;
    int max = (a + b + abs(a - b)) / 2;

    cout << "���������� ����: " << max << endl;
    cout << "���������� ����: " << min << endl;


    return 0;
}
*/
/*25. **������������ ������ � ���������� ����� ����� � ����� ����.
    ��������� ����������, �������� �� ��� ����������.
   (��������, ��� ��� �������� ����������, ���� ��� ����� ������ 4, �� �� ������ 100, � �����, ���� �� ������ 400)*/
   /*

   int main()
   {
       setlocale(LC_ALL, "Rus");

       int god;
       cout << "������� ����� ����" << endl;
       cin >> god;

       if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0) {
           cout << "��� ����������" << endl; //2020

       }
       else {
           cout << "��� ������������" << endl; //1991

       }

       return 0;
   }
   */

   /*26. **������������ ������ � ���������� ������� ����� � ��������. ����������:
   �) ��������� �� ���� � ��������
   �) ��������� �� ������� � �����
   */
   /*
   int main()
   {
       setlocale(LC_ALL, "Rus");

       float PloshadKruga;
       float PloshadKvadrata;
       const double PI = 3.14159;

       cout << "������� ������� �����" << endl;
       cin >> PloshadKruga;

       cout << "������� ������� ��������" << endl;
       cin >> PloshadKvadrata;

       if (2 * PloshadKruga >= PI * PloshadKvadrata) {
           cout << "������� ���������� � �����" << endl;
       }
       else { cout << "������� �� ���������� � �����" << endl;
       }

       if (PloshadKruga <= PI * PloshadKvadrata/4) {
           cout << "���� ���������� � ��������" << endl;
       }
       else {
           cout << "���� �� ���������� � ��������" << endl;
       }



       return 0;
   }
   */
