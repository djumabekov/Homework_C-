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


void Start()
{
    system("cls"); // очистиь экран
    SetPos(4, 10);

    // массив строк меню
string mainMenu[] = {
  "Задача 1",
  "Задача 2",
  "Задача 3",
  "Об авторах",
  "Выход"
};
int Menu(string Items[], int Size,
    int Row, int Col,
    int Select /* =0 */);

// вычисляемый размер статического массива mainMenu
int sizeMenu = sizeof(mainMenu) / sizeof(mainMenu[0]);
// экранные координаты главного меню игры
int menuRow = 5, menuCol = 12;
    int choose = 0;
    bool isExit = false; // сигнал о выходе из цикла главного программы

    while (!isExit) // while (isExit == false)
    {
        // вывод главного меню игры
        choose = Menu(mainMenu, sizeMenu,
            menuRow, menuCol, choose);
        // обработка выбранного пункта меню
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
        case 3: // об авторах
            AboutFunc();
            break;
        case 4:   // "Выход"
        case -1:  // отказ от выбора - выход из главного меню
            isExit = true; // сигнал о выходе из программы
            system("cls"); // очистиь экран

            break;
        } // switch (choose)
    } // while(!isExit);
    // 
    system("cls"); // очистиь экран
    SetPos(4, 10);
    cout << "До свидания!";

} 
