#include <iostream>
#include <cmath>
#include <cctype>
#include <Windows.h>
#include <time.h> 
using namespace std;


/*14. **�������� ���������, ������� ������� �� ����� ����� �������� ��������,
������������ ��� ��������������, ������ ����� ����� ���������� ������,
��������� � ��������. ������� � ������������� ������������ ����� ����.
��� �������� ������ ������������ ������� Sleep() �� ���������� Windows.h*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    string b;
    int v;
    int h;

    cout << "������� �������� �����: �����. 1, ������.2:" << endl;
    cin >> a;

    cout << "������� ������:" << endl;
    cin >> b;

    cout << "������� ����� �����:" << endl;
    cin >> h;

    cout << "������� �������� �� 1-������ �� 3-��������:" << endl;
    cin >> v;

    for (int i = 0; i < h; i++) {
        if (a == 1) {
            cout << b; Sleep(100 * v);
        }
        else {
            cout << b << endl; Sleep(100 * v);

        }

    }

    return 0;
}
*/
/*17. **�������� ���� "������".
������������ � ��������� �� ������� ������� 2 ������.
���������� � ���, � ���� �� ����������� 3� ������� ����� ������.
����������� ������� ��������� ��������� ��������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    int a;
    int kBall = 0;
    int uBall = 0;
    int ready = 0;


    for (int i = 0; i < 3; i++) {
        cout << "����� ������� ���������..." << endl;
        Sleep(1000);
        a = rand() % 6 + 1;
        cout << "���������� ������: " << a << endl;
        kBall += a;
    }
    cout << "��������� ���������� " << kBall << " ������" << endl << endl;

    for (int i = 0; i < 3; i++) {
        Sleep(1000);
        cout << "����� �������� ��! ����� ������ ������, ������� 1" << endl;
        cin >> ready;
        if (ready == 1) {
            a = rand() % 6 + 1;
            cout << "��� ������: " << a << endl;
        }
        uBall += a;
    }
    cout << "��� ��������� " << uBall << " ������" << endl;

    if (kBall > uBall) {
        cout << "������� ���������!" << endl;
    }
    else if (kBall < uBall) {
        cout << "�� ��������!" << endl;
    } else {
        cout << "�����!" << endl;
    }

    return 0;
}
*/
/*20. ***�������� ���������, ������� ��������� ������������ �� ������ ������� ���������.
��������� ������� �� ����� ��� �����, ������������ ������ ������ �� ������������.
����������� ��������� ������� ��������� (���������� ���������� � ����������� ��������).
������� ������������ ������ ��� ������. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int level = 1;
    int a;
    int b;
    int c;
    int result;
    srand(time(0));

    cout << "������� ���� �� ������ ���������!" << endl;
    cout << "�������� ������� ��������� �� 1-����� �� 3-�������" << endl;
    cin >> level;


        for (int i = 0; i < 3*level; i++) {
            Sleep(1000);
            a = rand() % (1000 * level);
            b = rand() % (1000 * level);
            cout << "������� ����� " << a << " � " << b << endl;
            c = a * b;
            cout << "������� ���������: " << endl;
            cin >> result;
            if (result == c) {
                cout << "�����!" << endl;

            }
            else {
                cout << "�� �����!" << endl;

            }


    }

    return 0;
}
*/

/*27. *������� �� ����� ������� ����� �� 0 �� 10 � �������� ������� �����. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    double num = 10;
    double step;
    double res = 0;

    cout << "������� ������� ��� � ������� 0.0" << endl;
    cin >> step;

    while (res < num) {
        cout << "res = " << res << endl;
        res+=step;

    }


    return 0;
}
*/

/*12. ***�������� ���������, ������� ������� �� ����� ��������� ����� � �������� �������� ��������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

        for (int j = 0; j < 6; j++) {

            for (int k = 0; k < 12; k++) {
                if (k % 3 == 0) { cout << "***"; }
                else { cout << "---"; }
            }
            cout << endl;
        }

    return 0;
}
*/

/*13. ***�������� ���������, ������� ������ ������������� ������������ 4� �����.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int s;
    cout << "������� ������ ����� ������� ��������������: ";
    cin >> s;

cout << endl;


for (int i = 0; i <= s; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;
}

cout << endl;

for (int i = 0; i < s; i++)
{
    for (int k = s - 1; k > i; k--)
    {
        cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
        cout << "*";
    }
    cout << endl;
}

cout << endl;

for (int i = s; i > 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;
}

cout << endl;

for (int i = s; i > 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;

    for (int k = s; k >= i; k--)
    {
        cout << " ";
    }
}

return 0;
}
*/