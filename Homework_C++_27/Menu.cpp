// Menu.cpp
#pragma once
#include <iostream>
#include <string>
#include "Win10.h"  // SetPos/SetColor
#pragma warning(disable:4996)
using namespace std;

// ���������� ��� ��������� ������� ����
// ��� ��������� ������ ����
int clrSelFon = COLOR::blue; // ���� ����
int clrSelSym = COLOR::light_yellow; // ���� �������
// ��� ���������� ������� ����
int clrUnselFon = COLOR::green;
int clrUnselSym = COLOR::black;

int Menu(string Items[], int Size,
    int Row, int Col,
    int Select /* =0 */)
{
    system("cls"); // ������� �����
    CursorHide(); // ������ ������
    // �������� ���� ����
    while (true) {
        // ����� ������� �� �����
        for (int i = 0; i < Size; i++) {
            SetPos(Row + i, Col);
            if (i == Select) {
                SetColor(clrSelFon, clrSelSym); // ��������� ��������� ������
            }
            else {
                SetColor(clrUnselFon, clrUnselSym); // ��������� �����
            }
            cout << Items[i]; // ����� i-�� ������ ���� �� �����
        } // for()
        // ��������� ������� ������
        int key = _getch(); // 
        switch (key) {
        case _KEY::UP: case 'w': case 'W': // �����
            if (Select > 0) { Select--; }
            else { Select = Size - 1; }
            break;
        case _KEY::DOWN: case 's': case 'S': // ����
            if (Select < Size - 1) { Select++; }
            else { Select = 0; }
            break;
        case _KEY::ENTER:
            CursorHide(TRUE, 25); // �������� ������
            SetColor(0, 7);             
            system("cls"); // ������� �����
            return Select; // ���������� ����� (������) ���������� ������ ����
        case _KEY::ESC:
            CursorHide(TRUE, 25); // �������� ������
            return -1; // ����� �� ������
        } // switch(key)
    } // while(true)
}