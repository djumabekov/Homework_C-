#include <iostream>
using namespace std;
#include <cmath>
#include <cstring>
#include <time.h>
#include <conio.h>   // ��� _kbhit(), _getch()
#include "Win10.h"   // �������� ������������ ���� Win10.h
#include <iomanip>
#include <cstdlib>
#include <ctime>

/*19. *�������� ���������, ������� ��������� ������������ ����� ���� �������� � ��������� ������� � ������ ������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int arr1[5];
    int arr2[5];
    int arr3[5];

    for (int i = 0; i < 5; i++) {
        // ������ ���� � ������� ��� i-�� �������� �������
        cout << "������� " << i + 1 << " ����� ������� 1 -> ";
        cin >> arr1[i];
        cout << "������� " << i + 1 << " ����� ������� 2 -> ";
        cin >> arr2[i];
    }
    cout << "����� ���� �������� -> ";
    for (int i = 0; i < 5; i++) {
        arr3[i] = arr2[i] + arr1[i];
        cout << arr3[i] << " ";
    }


    cin.get(); cin.get();
}
*/

/*27. *���������� ������ �� 20 �������� ��������� ������� ����������� �������� (� ���������� �������).
������������ ������ ���� char.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    char arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = 97+i;
        cout << arr[i] << " ";
    }
    cin.get(); cin.get();
}
*/

/*21) **�������� ���������, ������� ��������� �������� ������� �� 10 ��������� �� ���������� ��������:
������ ��������� � ���������; ������ - � ������������� � �.�.
����� ��������� � ������� �� 5 ���������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int arr1[10];
    int arr2[5];

    for (int i = 0; i < 10; i++) {
        // ������ ���� � ������� ��� i-�� �������� �������
        cout << "������� " << i + 1 << " ����� ������� 1 -> ";
        cin >> arr1[i];
    }
    cout << "�������������� ������ -> ";
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i] + arr1[9 - i];
        cout << arr2[i] << " ";
    }


    cin.get(); cin.get();
}
*/

/*13) ***�������� ��������� "������������".
������������ ������ 10 ������ ��������. ������ �������� �� 12-������� �������.*/
/*
int arr[10];
int elementArr;
int newBall;
double countBall;

void printBall() {
    system("cls"); // ������� ������ ����� ������������ � ����
    SetPos(5, 8);
    cout << "������ �������� -> ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����

}

void reExamen() {
    system("cls"); // ������� ������ ����� ������������ � ����
    SetPos(5, 8);
    cout << "������� ����� �������� �������: ";
    cin >> elementArr;
    SetPos(6, 8);
    cout << "������� ����� ������: ";
    cin >> newBall;
    arr[elementArr] = newBall;
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
}

void stipendia() {
    system("cls"); // ������� ������ ����� ������������ � ����
    for (int i = 0; i < 10; i++) {
        countBall += arr[i];
    }
    countBall = countBall / 10;
    if (countBall >= 10.7) { SetPos(5, 8); cout << "C������ ��� " << countBall << ". ��������� �������"; }
    else { SetPos(5, 8); cout << "C������ ��� " << countBall << ". ��������� �� �������"; }
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int menuRow = 5, menuCol = 8;
    //  ��������� ��� ������� ��������� ������ ����
    int Select = 0;
    //  ��������� ��� ����� ������� ���� - ���������, ����������, ���� �� ���������
    int cSelFon = _COLOR::purple;
    int cSelSym = _COLOR::black;

    int cUnSelFon = _COLOR::black;
    int cUnSelSym = _COLOR::green;

    // ����������� ���� ������� (0,7)
    int cDefFon = black;    // _COLOR::black;
    int cDefSym = white;    // _COLOR::white;
    bool isWork = true; // ������ � ������/���������� ����� ����

    for (int i = 0; i < 10; i++) {
        // ������ ���� � ������� ��� i-�� �������� �������
        cout << "������� " << i + 1 << " ������ �������� -> ";
        cin >> arr[i];
    }

    while (isWork == true)
    {
        CursorHide(); // ������ ������ ������
        system("cls"); // ������� ������ ����� ������������ � ����

        // ����� ������� ����
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "����� ������ (����� ����������� �������)";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "��������� �������� (������������ ������ ����� �������� ������� � ����� ������)";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "������� �� ��������� (��������� �������, ���� ������� ��� �� ���� 10.7)";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "����� �� ���������";

        // �������������� ���� ������� �� ���������
        SetColor(cDefFon, cDefSym); // (0, 7)

        // ��������� ������� ������
        //if ( _kbhit() )//if ( _kbhit() != 0 )
        { // ���� ������� ������� �� ����������
          // �������� ��� ������� ������
            int key = _getch();
            // ��������� ���� ������� �������
            switch (key)
            {
            case _KEY::UP:    // ������ �����
            case 'w': case 'W': case _KEY::LEFT:
                if (Select > 0) { Select--; }
                else { Select = 3; } // ���������
                break;
            case _KEY::DOWN:  // ������ ����
            case 's': case 'S': case _KEY::RIGHT:
                if (Select < 3) { Select++; }
                else { Select = 0; } // ���������
                break;
            case _KEY::ENTER: // ����� ������ ����
              //SetPos(menuRow + 5 + 2, menuCol);
              //cout << "��� ������ " << Select + 1
              //  << " ����� ����";
              // ��������� ������ ����
                switch (Select)
                {
                case 0: // ����� ������
                    printBall(); //
                    break;
                case 1: // ��������� ��������
                    reExamen(); //
                    break;
                case 2: // ������� �� ���������
                    stipendia(); //
                    break;
                case 3: // ����� �� ���������
                    isWork = false;
                    break;
                }
                break;
            case ESC:         // _KEY::ESC:
              // ����� �� ����

                isWork = false;
                break;
            } // switch(key);
        } // if(_kbhit())
    } // while( isWork == true )
    return 0;
}
*/

/*8) ***����� (�������� ��������) ������, ������ �� ���� ��� 0, � ��������� �������������� ������ �������� ���������� -1.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[10] = {5, 0, 7, 0, 4, 9, 0, 8, 3, 4};
    int arr2[10];
    int index = 0;
    int arrLength = 10;

     for (int i = 0; i < arrLength; i++) { //�������� ������1 � ������2 ��� �����
         if (arr[i] == 0) {
             arr2[i] = arr[i+1];
             index++;
         }
         else { arr2[i-index] = arr[i]; }
     }
     cout << "\n" << index << "\n";

     for (int i = 0; i <= index; i++) { // ���������� -1 � ����� �������2
         arr2[arrLength - i] = -1;
     }

     for (int i = 0; i < arrLength; i++) { // ������� ������2
        cout << arr2[i] << " ";
     }
    return 0;
}
*/

/*8. ***�������� ���������, ������� ������������ ��������� ���������� ����� �� ����� � ������� ��� ����� � ������.
������� �������� �������, �������� �� ����� ���������. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    string num;
    cout << "������� �����: ";
    cin >> num;

    char *arr = new char[num.size()]; // ��������� ������ ��� ������������� �������
    for (int i = 0; i < num.size(); i++) {// ���������� �������
        arr[i] = num[i];
    }
    for (int i = 0; i < num.size(); i++) { //����� �������
        cout << arr[i] << "  ";
    }
    delete[] arr; // ������� ������

return 0;
}
*/

/*15.
a) *�������� ���������, ������� ��������� ���������� ������ �� 10 ��������� ������������� ������� � ��������� �� 1 �� 10 � ����� ������� ����� �������.
b) **���������� ������ ����� ������� ������ ������������. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    double arr[10];
    int num;
    cout << "������� ���������� ����� ����� �������: ";
    cin >> num;
    for (int i = 0; i < 10; ++i)
        {arr[i] = (rand() % 901 + 100) / 100.0;}
    for (int i = 0; i < 10; ++i)
        {cout << fixed << setprecision(num) << arr[i] << ' ';}
    return 0;
}
*/


/*22.
a) *�������� ���������, ������� ���������� � ������������ 10 ������ �� 5-������� ������� � ���������� ���������� 2-��, 3-��, 4-�� � 5-��.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int num;
    int arr[10];
    int dvoiki = 0 ;
    int troiki = 0;
    int chetverki = 0;
    int pyatorki = 0;
    cout << "������� 10 ������ �� 5-������� �������: \n";
    for (int i = 0; i < 10; i++) {
        cout << "������ " << i+1 << "-> ";
        cin >> num;
        arr[i] = num;
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 2) {dvoiki++;}
        else if (arr[i] == 3) { troiki++; }
        else if (arr[i] == 4) { chetverki++; }
        else if (arr[i] == 5) { pyatorki++; }
    }
    cout << "\n���������: \n";
    cout << "2 -> " << dvoiki << endl;
    cout << "3 -> " << troiki << endl;
    cout << "4 -> " << chetverki << endl;
    cout << "5 -> " << pyatorki << endl;
    */
    /* b)** ������ �������� �� 12 - ������� �������.������� ��������� ������ ���� 4, ������� � �� 4 �� 6 � �.�. */
     /*
     dvoiki = 0;
     troiki = 0;
     chetverki = 0;
     pyatorki = 0;
     cout << "������� 10 ������ �� 12-������� �������: \n";
     for (int i = 0; i < 10; i++) {
         cout << "������ " << i + 1 << "-> ";
         cin >> num;
         arr[i] = num;
     }
     for (int i = 0; i < 10; i++) {
         if (arr[i] >  0 && arr[i] < 4) { dvoiki++; }
         else if (arr[i] >= 4 && arr[i] <= 6) { troiki++; }
         else if (arr[i] >= 7 && arr[i] <= 10) { chetverki++; }
         else if (arr[i] >= 11 && arr[i] <= 12) { pyatorki++; }
     }
     cout << "\n���������: \n";
     cout << "2 -> " << dvoiki << endl;
     cout << "3 -> " << troiki << endl;
     cout << "4 -> " << chetverki << endl;
     cout << "5 -> " << pyatorki << endl;

     return 0;
 }
 */

 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");

     srand(time(0));
     const int num = 7; //1 2 0 4 6 7 9
     int sdvig;
     int polozhenie; //�����-������
     int arr[num];
     for (int i = 0; i < num; i++) {
         arr[i] = rand() % 10;
     }
     cout << "��������� �����: " << endl;
     for (int i = 0; i < num; i++) {
         cout << arr[i] << " ";
     }
     cout << "�������� ���������� �������: ";
         cin >> sdvig;

     cout << "�������� ��������� (1-�����, 2-������): ";
         cin >> polozhenie;
     if (polozhenie == 1) {
         for (int i = 0; i < num - sdvig; i++) {
                 cout << arr[i + sdvig] << " ";
         }
         for (int i = 0; i < sdvig; i++) {

             cout << arr[i] << " ";

         }
     }
     else {
         for (int i = 0; i < sdvig; i++) {
             cout << arr[i + num - sdvig] << " ";
         }
         for (int i = 0; i < num - sdvig; i++) {

             cout << arr[i] << " ";

         }

     }
     return 0;
 }
 */