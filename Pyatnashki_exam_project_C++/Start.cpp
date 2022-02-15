// GameSnake.cpp
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include "Win10.h" // SetColor/SetPos
using namespace std;
#pragma warning(disable:4996)

//  цвет консоли по умолчанию 0,7 = black,white
int clrDefaultFon = COLOR::black;
int clrDefaultSym = COLOR::white;
bool HaveSavedGame2;
bool isExit = false; // сигнал о выходе из цикла главного программы

void Start()
{
    system("cls"); // очистиь экран
    CursorHide(); // скрыть курсор экранаs    
    // массив строк меню
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

    // вычисляемый размер статического массива mainMenu
    int sizeMenu = sizeof(mainMenu) / sizeof(mainMenu[0]);
    // экранные координаты главного меню игры
    int menuRow = 12, menuCol = 12;
    int choose = 0;

    while (!isExit) // while (isExit == false)
    {
        // вывод главного меню игры
        choose = Menu(mainMenu, sizeMenu,
            menuRow, menuCol, choose);
        // обработка выбранного пункта меню
        switch (choose) {
        case 0: // 
            HaveSavedGame2 = false; // значит новая игра
            StartGame(HaveSavedGame2); // вызов ф-ции начала игры StartGame()
            break;
        case 1:
            HaveSavedGame2 = true; // значит сохраненная игра
            StartGame(HaveSavedGame2); // вызов ф-ции начала игры StartGame()
            break;
        case 2:
            StatisticGame(); // вызов ф-ции для отображения статистики игр
            break;
        case 3: // об авторах
            About(); // вызов ф-ции About() - вывод информации
                     //  об авторе программы
            break;
        case 4:   // "Выход"
        case -1:  // отказ от выбора - выход из главного меню
        case _KEY::ESC:         // _KEY::ESC:
            if (!ExitGame()) {
            isExit = true;
            }
            break;
        } // switch (choose)
    } // while(!isExit);
    // 
    system("cls"); // очистиь экран
    SetPos(4, 10);
    cout << "Good bye!";
    system("pause > nul");
}
