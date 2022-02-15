//
// Файл заголовка, Header file
//  Win10.h
//
#pragma once
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>  // для _getch(), _getche(), _kbhit()
#include <io.h>     // низкоуровневый ввод-вывод
#include <string>

#define SETLOCAL_RU system( "chcp 1251 > nul" )
#define SETLOCAL_EN system( "chcp 866 > nul" )
#define CLS         system( "cls" )  // cls - clear screen
#define PAUSE       system( "pause > nul" )

#define RAND(min,max)  (rand()%((max)-(min)+1)+(min))
#define CREATE_COLOR(fon,sym)   (((fon) << 4) | (sym))


// печисление константных имен
enum COLOR {
	black,    // = 0
	blue,     // 1 = black + 1
	green,    // 2 = blue + 1
	aqua,     // 3 = green + 1
	red,
	purple,
	yellow,
	white,
	gray,
	light_blue,
	light_green,
	light_aqua,
	light_red,
	light_purple,
	light_yellow,
	bright_white,
};


// перечисление кодов клавиш клавиатуры
// именнованное перечисление с именем KEY
enum _KEY {
	ESC = 27,
	ENTER = 13,
	SPACE = 32,     // пробел
	TAB = 9,
	BACKSPACE = 8,
	PLUS = 43, MINUS = 45,

	CURSOR1 = 0, CURSOR2 = 224,

	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77,

	INS = 82, DEL = 83,
	HOME = 71, END = 79,
	PG_UP = 73, PG_DOWN = 81,

	F1 = 59, F2, F3, F4, F5, F6, F7, F8, F9, F10, // CURSOR1, 59-68
	F11 = 133, F12 = 134, // CURSOR2, 133-134
};

// Прототипы ф-ций из файла Win10.cpp

// функция для смена цвета
void SetColor(int colBkgr, int colSym);
void SetColor(WORD wAttributes);

// Функция для установки позиции курсора вывода
void SetPos(int Row, int Col);

// Функция для скрытия каретки
void CursorHide(BOOL bVisible = FALSE, DWORD dwSize = 10);

// Ф-ция определения видимого размера консольного окна
void GetConsoleSize(int& Width, int& Height);

// Ф-ция установки размера консольного окна
void SetConsoleSize(int Width, int Height);
void SetConsoleSize(SIZE szConsWin);

void Start();
void DrawBorder();
void StartGame(bool HaveSavedGame);
void CreatePole();
void DrawPole();
void Step(_KEY dir);
bool GameOver();
void About();
void StatisticGame();
void SaveGame();
void AbortGame();
void ContinueSavedGame();
void SaveBestGamers();
void ReadBestGamers();
void PrintBestGamers();
bool ExitGame();
