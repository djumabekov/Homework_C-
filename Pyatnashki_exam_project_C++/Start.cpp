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
bool HaveSavedGame2;
bool isExit = false; // ������ � ������ �� ����� �������� ���������

void Start()
{
    system("cls"); // ������� �����
    CursorHide(); // ������ ������ ������s    
    // ������ ����� ����
    string mainMenu[] = {
      "Play new game",
      "Continue game",
      "Records",
      "About program",
      "Exit"
    };
    int Menu(string Items[], int Size,
        int Row, int Col,
        int Select /* =0 */);

    // ����������� ������ ������������ ������� mainMenu
    int sizeMenu = sizeof(mainMenu) / sizeof(mainMenu[0]);
    // �������� ���������� �������� ���� ����
    int menuRow = 12, menuCol = 12;
    int choose = 0;

    while (!isExit) // while (isExit == false)
    {
        // ����� �������� ���� ����
        choose = Menu(mainMenu, sizeMenu,
            menuRow, menuCol, choose);
        // ��������� ���������� ������ ����
        switch (choose) {
        case 0: // 
            HaveSavedGame2 = false; // ������ ����� ����
            StartGame(HaveSavedGame2); // ����� �-��� ������ ���� StartGame()
            break;
        case 1:
            HaveSavedGame2 = true; // ������ ����������� ����
            StartGame(HaveSavedGame2); // ����� �-��� ������ ���� StartGame()
            break;
        case 2:
            StatisticGame(); // ����� �-��� ��� ����������� ���������� ���
            break;
        case 3: // �� �������
            About(); // ����� �-��� About() - ����� ����������
                     //  �� ������ ���������
            break;
        case 4:   // "�����"
        case -1:  // ����� �� ������ - ����� �� �������� ����
        case _KEY::ESC:         // _KEY::ESC:
            if (!ExitGame()) {
            isExit = true;
            }
            break;
        } // switch (choose)
    } // while(!isExit);
    // 
    system("cls"); // ������� �����
    SetPos(4, 10);
    cout << "Good bye!";
    system("pause > nul");
}
