#include <iostream>
using namespace std;
#include <cmath>
#include <time.h>
#include <conio.h>   // ��� _kbhit(), _getch()
#include "Win10.h"   // �������� ������������ ���� Win10.h

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

void TaskOne() { //������� ������ �1
    system("cls");
    srand(time(0));

    int a1; //����� 1
    int a2; //����� 2

    int kBall = 0;
    int uBall = 0;
    int ready = 0;


    for (int i = 0; i < 3; i++) {
        cout << "������ ������� ���������..." << endl;
        Sleep(1000);
        a1 = rand() % 6 + 1;
        a2 = rand() % 6 + 1;
        cout << "���������� ������: " << a1 << " � " << a2 << endl;
        kBall += (a1 + a2);
    }
    cout << "��������� ���������� " << kBall << " ������" << endl << endl;

    for (int i = 0; i < 3; i++) {
        Sleep(1000);
        cout << "������ �������� ��! ����� ������ ������, ������� Enter ��� ����� ������ ������� ��� ������ �� ����" << endl;
        _kbhit();
        ready = _getch();
        if (ready == 13) {
            a1 = rand() % 6 + 1;
            a2 = rand() % 6 + 1;
            cout << "��� ������: " << a1 << " � " << a2 << endl;
        }
        else {
            break;

        }
        uBall += (a1 + a2);
    }
    cout << "��� ��������� " << uBall << " ������" << endl;

    if (kBall > uBall) {
        cout << "������� ���������!" << endl;
    }
    else if (kBall < uBall) {
        cout << "�� ��������!" << endl;
    }
    else {
        cout << "�����!" << endl;
    }
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����

}


void TaskTwo() { //������� ������ �2
    system("cls");
    int startNum, endNum, Num;
    // bool condition = true;
    cout << "������� ������ ����� ���������: ";
    cin >> startNum;
    cout << "������� ������ ����� ���������: ";
    cin >> endNum;
    cout << "������� �����: ";
    cin >> Num;

    while (true) {

        if ((Num < startNum) || (Num > endNum)) {
            cout << "������� ����� � ��������� " << startNum << " - " << endNum << endl;
            cin >> Num;
        }
        else {
            cout << "�� ����� ����� " << Num << " � ��������� " << startNum << " - " << endNum << endl;
            break;
        }
    }
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����

}

void TaskThree() { // ������� ������ ��� ����
    system("cls");
    int StrKod;
    int result = 0;

    // ������������ ������ �������� ����� ���� � ���������� ���������.
   //���������, ������� ����� ���� ��� ���� �������� ����� �������� �������� �����.

    int ZhelDohod;
    cout << "������� �������� ����� ����: "; //1000
    cin >> ZhelDohod;

    int KolOpozd;
    cout << "������� ���-�� ���������: "; //7 => 40$
    cin >> KolOpozd;

    for (StrKod = 0; StrKod <= ZhelDohod + (KolOpozd / 3) * 20; StrKod += 50) {
        result += 100;
    }
    cout << result << " ���-�� ����� ���� ���� �������� ���� ����� �������� �������� �����." << "\n\n\n"; //

    //������������ ������ ���������� ����� ����, ���������� ����� � �������� ����� ��������.
   //���������, ������� ��� ���� ����� ��������.

    result = 0;

    cout << "������� ���������� ����� ����, ���������� �����: "; //3000
    cin >> StrKod;

    cout << "������� �������� ����� ����: "; //1000
    cin >> ZhelDohod;

    for (KolOpozd = 0; KolOpozd < StrKod / 2 - ZhelDohod; KolOpozd += 20) {
        result++;
    }
    cout << result * 3 << " ��� ���� ����� ��������" << "\n\n\n"; //

    //������������ ������ ���������� ����� ���� � ���������� ���������.
  // ����������, ������� ����� �������� ���� � �������� �� ������.

    result = 0;

    cout << "������� ���������� ����� ����, ���������� �����: "; //3000
    cin >> StrKod;

    cout << "������� ���������� ��������� ����: "; //10
    cin >> KolOpozd;

    int ZP = StrKod / 2;
    int Straf = (KolOpozd / 3) * 20;
    result = ZP - Straf;

    if (result > 0) {
        cout << result << " $ ����� �������� ����" << endl; //
    }
    else {
        cout << "���� ����� �� ��������" << endl; //

    }
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
}


void About()
{ // ������ �-���
    system("cls"); // ������� ������� ������ cls - Clear Screen
    SetPos(3, 5);
    cout << "�������� ������� 12";
    SetPos(4, 5);
    cout << "�����: ���������� �.�., ������ SEP-211/1";
    SetPos(6, 5);
    //system("pause"); // ����� � ������� ��������� � ������� "��� ����������� ������� ����� �������"
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
} // ����� �-���



int main()
{
    setlocale(LC_ALL, "Rus");
    bool isWork = true; // ������ � ������/���������� ����� ����
    while (isWork == true)
    {
        CursorHide(); // ������ ������ ������

        // ����� ������� ����
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "������� ������ �1";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "������� ������ �2";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "������� ������ ��� ����";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "�� ������";

        SetPos(menuRow + 4, menuCol);
        if (Select == 4) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "�����";

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
                else { Select = 4; } // ���������
                break;
            case _KEY::DOWN:  // ������ ����
            case 's': case 'S': case _KEY::RIGHT:
                if (Select < 4) { Select++; }
                else { Select = 0; } // ���������
                break;
            case _KEY::ENTER: // ����� ������ ����
              //SetPos(menuRow + 5 + 2, menuCol);
              //cout << "��� ������ " << Select + 1
              //  << " ����� ����";
              // ��������� ������ ����
                switch (Select)
                {
                case 0: // ������� ������ �1
                    TaskOne(); // ����� �-��� ������� ������ �1
                    break;
                case 1: // ���������
                    TaskTwo(); // ������� ������ �2
                    break;
                case 2: // ������� ������ ��� ����
                    TaskThree(); // ����� �-��� ��� ������� ������ �2
                    break;
                case 3: // �� ������
                    About(); // ����� �-��� About() - ����� ����������
                             //  �� ������ ���������
                    break;
                case 4: // �����

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