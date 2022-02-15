// GameSnake.cpp
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include "Win10.h" // SetColor/SetPos
using namespace std;
#pragma warning(disable:4996)

//  ���� ������� �� ��������� 0,7 = black,white
int clrDefaultFon = COLOR::black;
int clrDefaultSym = COLOR::white;


void Start()
{
    system("cls"); // ������� �����
    SetPos(4, 10);

    // ������ ����� ����
string mainMenu[] = {
  "������ 1",
  "������ 2",
  "������ 3",
  "�� �������",
  "�����"
};
int Menu(string Items[], int Size,
    int Row, int Col,
    int Select /* =0 */);

// ����������� ������ ������������ ������� mainMenu
int sizeMenu = sizeof(mainMenu) / sizeof(mainMenu[0]);
// �������� ���������� �������� ���� ����
int menuRow = 5, menuCol = 12;
    int choose = 0;
    bool isExit = false; // ������ � ������ �� ����� �������� ���������

    while (!isExit) // while (isExit == false)
    {
        // ����� �������� ���� ����
        choose = Menu(mainMenu, sizeMenu,
            menuRow, menuCol, choose);
        // ��������� ���������� ������ ����
        switch (choose) {
        case 0: // 
            PhonebookFunc(); // 
            break;
        case 1: 
            PointFunc(); 
            break;
        case 2: 
            DrobFunc(); 
            break;
        case 3: // �� �������
            AboutFunc();
            break;
        case 4:   // "�����"
        case -1:  // ����� �� ������ - ����� �� �������� ����
            isExit = true; // ������ � ������ �� ���������
            system("cls"); // ������� �����

            break;
        } // switch (choose)
    } // while(!isExit);
    // 
    system("cls"); // ������� �����
    SetPos(4, 10);
    cout << "�� ��������!";

} 
