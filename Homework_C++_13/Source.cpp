//
// Source.cpp
//
#include <iostream>
#include <Windows.h> // ��� Sleep()
#include <time.h>    // ��� time(), clock()
#include <conio.h>   // ��� _kbhit(), _getch()
#include "Win10.h"   // �������� ������������ ���� Win10.h
using namespace std;


/*
  ��������-������
  0) ������� ���� ����
  1) ������� ���� 3�3 ���� char
  2) ����������� �� �������� ����
  3) �������� ���� �� ����������
  4) ������� ����
  5) ��������� �������� ����
  6) ������������� �������� ����
*/

// ���������� �������

// ���������� ���������� ��� ����:
//  ���������� ������ �������� ����: ������, �������
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

// ���������� ���������� ��� ����:
//  ���������� ��������-������ ���� ����: ������, �������
int gridRow = 4, gridCol = 10;

int countGame = 0; //���������� ���
int winX = 0; // ���������� ����� �
int winY = 0; // ���������� ����� �
int nichya = 0; // ���������� ������
bool isFirstX = true;
bool isWork = true; // ������ � ������/���������� ����� ����

/*
������� ���� XO
"+---+---+---+"
"|   |   |   |"
"+---+---+---+"
"|   |   |   |"
"+---+---+---+"
"|   |   |   |"
"+---+---+---+"
*/

// ��������� � ���������� �-��� StartGameXO()
//  ������ ����� ���� XO
void StartGameXO()
{ // ������ �-���
  // ���� �-���
    system("cls"); // ������� ������
    // ���������� �������� ���� XO
    SetPos(gridRow + 0, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 1, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 2, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 3, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 4, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 5, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 6, gridCol); cout << "+---+---+---+";
    // �������� ������ �� ������
    CursorHide(TRUE, 25); // 10 - 10%, 25 - 25%
    // �������� ���� ���� - ���� �������� ��������
    bool GameOver = false; // ���������� ��������� ����
    int gRow, gCol; // ������� ���������� ������� � �����
    gRow = gridRow + 1;
    gCol = gridCol + 2;
    int row = 0, col = 0; // ������� ������� ������ �� ����� ����
    //bool isTurnX = true; // true - ������� ����� ��������
    //  ��������� ������ 3x3 ��� �������� ���������� �� ������� �������� ����
    int cell[3][3] = { 0 }; // ���������� ������� ������

    int Win = 0;  // ���������� ��� ������, 0 - �� ��� ��� �� �������
                  // 1 - �������� X
                  // 2 - �������� O
    int cntStep = 0; // ������� �����
    // ���� ����
    bool isTurnX = isFirstX;
    while (!GameOver) //while (GameOver == false)
    {
        SetPos(13, 10); // ������ � ������� �������
        cout << "������ �����: " << (isTurnX ? 'X' : 'O');
        SetPos(gRow, gCol); // ������ � ������� �������

        // �������� ������� ������ �������������
        int key = _getch();
        //
        switch (key)
        {
        case _KEY::UP: // �����
            if (row > 0) {
                gRow -= 2; // ����������� ������� �����
                row--;
            }
            break;
        case _KEY::DOWN: // ����
            if (row < 2) {
                gRow += 2; // ����������� ������� ����
                row++;
            }
            break;
        case _KEY::LEFT: // �����
            if (col > 0) {
                gCol -= 4; // ����������� ������� �����
                col--;
            }
            break;
        case _KEY::RIGHT: // ������
            if (col < 2) {
                gCol += 4;
                col++;
            }
            break;

        case _KEY::ENTER: case _KEY::SPACE: // ��� ������
          // �������� ������ �� ���������
            if (cell[row][col] != 0) { break; } // �������, ���� ������ ������
            cntStep++; // ������� �����
            // ������ ��������: cell[row][col] == 0
            if (isTurnX == true) { // ��� ���������
                cout << "X";
                cell[row][col] = 1; // ���������� X � ������ (row,col)
                //isTurnX = false; //isTurnX = !true;
            }
            else {
                cout << "O";
                cell[row][col] = 2; // ���������� X � ������ (row,col)
                //isTurnX = true;
            }
            isTurnX = !isTurnX; // �������� ����
            // �������� �� ������
            // �� �����������
            if (cell[0][0] != 0 && // �� ������ [0]
                cell[0][0] == cell[0][1] && cell[0][0] == cell[0][2])
            {
                Win = cell[0][0]; // ���-�� �������
            }
            else if (cell[1][0] != 0 && // �� ������ [1]
                cell[1][0] == cell[1][1] && cell[1][0] == cell[1][2])
            {
                Win = cell[1][0]; // ���-�� �������
            }
            else if (cell[2][0] != 0 && // �� ������ [2]
                cell[2][0] == cell[2][1] && cell[2][0] == cell[2][2])
            {
                Win = cell[2][0]; // ���-�� �������
            }
            // �� ���������
            if (cell[0][0] != 0 && // �� ������� [0]
                cell[0][0] == cell[1][0] && cell[0][0] == cell[2][0])
            {
                Win = cell[0][0];
            }
            else if (cell[0][1] != 0 && // �� ������� [1]
                cell[0][1] == cell[1][1] && cell[0][1] == cell[2][1])
            {
                Win = cell[0][1];
            }
            else if (cell[0][2] != 0 && // �� ������� [2]
                cell[0][2] == cell[1][2] && cell[0][2] == cell[2][2])
            {
                Win = cell[0][2];
            }
            // �� ���������
            if (cell[0][0] != 0 &&
                cell[0][0] == cell[1][1] && cell[0][0] == cell[2][2])
            {
                Win = cell[0][0];
            }
            else if (cell[0][2] != 0 &&
                cell[0][2] == cell[1][1] && cell[0][2] == cell[2][0])
            {
                Win = cell[0][2];
            }
            // ����������� ������

            if (Win != 0) { // ���-�� �������
                SetPos(gridRow + 7 + 1, gridCol + 2);
                //if (Win == 1) { cout << "�������� X!" << endl; }
                //else          { cout << "�������� O!" << endl; }
                countGame++;
                if (Win == 1) { winX++;  cout << "�������� " << "X" << "!\n"; }
                else { winY++;  cout << "�������� " << "O" << "!\n"; }
                GameOver = true;
                //SetPos(gridRow + 7 + 2, gridCol + 2);
                //system("pause"); // ����� � ���������� �������
                system("pause > nul"); // ����� ��� ����������� ������
                system("cls"); // �������� �����
            }
            else if (cntStep == 9) {
                SetPos(gridRow + 7 + 1, gridCol + 2);
                cout << "�����!";
                countGame++;
                nichya++; // ������� ���������� ������
                GameOver = true;
                system("pause > nul"); // ����� ��� ����������� ������
                system("cls"); // �������� �����
            }
            break;

        case ESC: // ����� �� ���� � �������� ����

            SetPos(menuRow + 10, menuCol);
            cout << "����� �� ������� ���� � ������� ���� (y/n)? ";
            char ynKey;
            do {
                ynKey = _getch();
            } while (ynKey != 'y' && ynKey != 'Y' && ynKey != 'n' && ynKey != 'N' && ynKey != ESC);
            while (_kbhit()) { _getch(); } // �������� ������������ �����
            if (ynKey == ESC) ynKey = 'N';
            cout << ynKey;
            Sleep(150);
            if (ynKey == 'y' || ynKey == 'Y') { system("cls"); return; } /*����� �� �-��� ���� � ������� ����*/
            // ���������� ����
            SetPos(menuRow + 10, menuCol);
            cout << "";
            break;
        } // switch(key)
    } // while(!GameOver)
} // ����� �-��� StartGameXO()

void Exit() {
    SetPos(menuRow + 10, menuCol);
    cout << "�� ������������� ������ ����� �� ���� (y/n)? ";
    char ynKey;
    do {
        ynKey = _getch();
    } while (ynKey != 'y' && ynKey != 'Y' && ynKey != 'n' && ynKey != 'N' && ynKey != ESC);
    while (_kbhit()) { _getch(); } // �������� ������������ �����
    if (ynKey == ESC) ynKey = 'N';
    cout << ynKey;
    Sleep(150);

    if (ynKey == 'n' || ynKey == 'N') { system("cls"); return; }
    isWork = false;
    // ���������� ����
   /*����� �� ����*/
    SetPos(menuRow + 10, menuCol);
    cout << "";
    //isWork = false;
    //break;
}
// �-��� ��� �������� ���������� ����
void Settings()
{
    system("cls");
    SetPos(1, 2);
    cout << "�������� ��� ������ ����� ������ (X ��� O): ";
    int key;
    do {
        key = _getch();
    } while (key != 'o' && key != 'O' && key != 'x' && key != 'X');
    while (_kbhit()) { _getch(); } // �������� ������������ �����
    cout << (char)key;
    isFirstX = (key == 'x' || key == 'X') ? true : false;
    SetPos(2, 2);
    system("pause");
    system("cls");
}
// �-��� ��� ������ ���������� �� �����
void StatGame()
{
    system("cls"); // ������� ������� ������ cls - Clear Screen
    SetPos(3, 5);
    cout << "����� ������� ���: " << countGame << "\n";
    SetPos(4, 5);
    cout << "�������� X: " << winX << " ���\n";
    SetPos(5, 5);
    cout << "�������� Y: " << winY << " ���\n";
    SetPos(6, 5);
    cout << "�������� ������: " << nichya << " ���\n";
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
}
// �-��� ������ ������. �� ������� � ����
void About()
{ // ������ �-���
    system("cls"); // ������� ������� ������ cls - Clear Screen
    SetPos(3, 5);
    cout << "���� \"��������-������\"";
    SetPos(4, 5);
    cout << "�����: ������ SEP-211/1";
    SetPos(6, 5);
    //system("pause"); // ����� � ������� ��������� � ������� "��� ����������� ������� ����� �������"
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
} // ����� �-���

// �-��� main()
int main() {
    setlocale(LC_ALL, "Rus");

    // ����� ����������� - ����������� � ���� (������)

    // ����������� ���� ��� �������� ���� ����
    // � �����:
    //   ������, ����� ������� ���� (������ ����, ���������, �� �������, � �.�.);
    //   ��������� ������� ������:
    //    ���� ������������ ����� �� ������ - ������ �� ����� ������ ����� ������������
    //    ������������ �� ������� ������ ESC, ENTER, UP/DOWN/LEFT/RIGHT
    //system("color 2A"); // ������� ��������� ����� ���� �������
    while (isWork == true)
    {
        CursorHide(); // ������ ������ ������

        // ����� ������� ����
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "������ ����� ����";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "���������";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "���������� ����";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "�� �������";

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
              // ��������� ������ ���� - ��������������� Select-��
                switch (Select)
                {
                case 0: // ������ ����� ����
                    StartGameXO(); // ����� �-��� ������ ���� StartGameXO()
                    break;
                case 1: // ���������
                    Settings(); // ����� �-��� ��� �������� ����
                    break;
                case 2: // ����������
                    StatGame(); // ����� �-��� ��� ����������� ���������� ���
                    break;
                case 3: // �� �������
                    About(); // ����� �-��� About() - ����� ����������
                             //  �� ������ ���������
                    break;
                case 4: // �����
                    Exit();
                    break;
                }
                break;
            case _KEY::ESC:         // _KEY::ESC:
              // ����� �� ����
                Exit();
                // isWork = false;
                break;
            } // switch(key);
        } // if(_kbhit())
    } // while( isWork == true )

    // ����� � ���������� ������ ��������� (������)
    system("cls");
    // SetPos(2, 2); // ���������� �������� ������ ���� ���� �������
    cout << "Good bye...";
    // cin.get(); cin.get(); // ����������� ������� �-��� 
} // main()
