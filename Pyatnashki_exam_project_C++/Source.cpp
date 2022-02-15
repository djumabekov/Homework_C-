#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>
#include <time.h>
#include "win10.h"
#include <stdlib.h> //Содержит функции randomize и random
#include <conio.h> //Содержит функции clrscr и getch
#include <fstream>
#include <string>
using namespace std;
#define SIZE 4 // размер игрового поля/cтолбцов

int CorrectPole[SIZE][SIZE];// изначально правильное эталонное поле для сравнения
int Pole[SIZE][SIZE]; // Основное игровое поле
bool HaveSavedGame = false; //флажок для проверки запуска сохраненной игры

int Numbers[15]; //массив содержит номера фишек

int ZeroX, ZeroY; //координаты нулевой (пустой) фишки
bool isWork = true; // булевый флажок для цикла while
bool showWin = false; // булевый флажок для проверки что пользователь попал в меню "Статистика" после победы, а не из основного меню. В зависимости от этого "Статистика" либо просто отображает лучших игроков либо поздравляет игрока с победой и дает возмодность ввести свое имя в рекорды (при условии)

int Select = 0;//  Пременная для индекса активного пункта меню
//  Пременные для цвета пунктов меню - активного, неактивных, цвет по умолчанию
int cSelFon = COLOR::purple;
int cSelSym = COLOR::black;
int cUnSelFon = COLOR::black;
int cUnSelSym = COLOR::green;

// стандартный цвет консоли (0,7)
int cDefFon = black;    // _COLOR::black;
int cDefSym = white;    // _COLOR::white;

//  Координаты отступа бордюра (рамки)
int TopIndent = 3, LeftIndent = 3;
//  Координаты вывода главного меню: строка, столбец
int menuRow = TopIndent + 4, menuCol = LeftIndent + 7;

int TimeStart; //время начала игры

struct BestGamers { // структура для фиксации статистики и имени игрока
    string UserName; //имя игрока
    int CountSteps; //количество ходов
    int min; //затраченное время игры в минутах
    int sec; //затраченное время игры в секундах
};
BestGamers BGArr[5]; // массив структуры BestGamers для 5 лучших игроков
BestGamers BG;  //переменная для структуры BestGamers
 // функция для инициализации эталонного поля для сверки и проверки режима игры (сохраненная или новая). В зависимости от этого подтягиваются сохраненные данные либо обнуляются
void Init() {
	int num = 1; // переменная счетчик цифр от 1 до 15
	// формируем эталонное игровое поле
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			CorrectPole[j][i] = num++;
	}
	CorrectPole[SIZE - 1][SIZE - 1] = 0;

	//проверяем игру запустили сохраненную?
	if (HaveSavedGame) {
		ContinueSavedGame(); // подтягиваем сохраненные параметры
		TimeStart = clock() - ((BG.min * 60 + BG.sec) * CLOCKS_PER_SEC); //подтягиваем время игры

	}
	else {
		// обнуляем параменты 
		TimeStart = clock();
		BG.CountSteps = 0;
		HaveSavedGame = false;
		CreatePole(); //и заного создаем поле
	}
}

// Основная функция игры
void StartGame(bool HaveSavedGame1) {
	HaveSavedGame = HaveSavedGame1;
	system("cls");
	CursorHide(); // скрыть курсор
	Init(); // инициализация эталонного поля для сверки и проверки режима игры
	DrawBorder(); // рисуем бордюр рамку
	DrawPole();//  рисуем поле первоначальное
	char c; // хранит символ нажатой клавиши (верх, вних, вправо, влево)
	while (isWork && !GameOver()) {
		SetPos(LeftIndent + 2, TopIndent + 2);
		SetColor(COLOR::black, COLOR::white);
		cout << "Count of steps: " << BG.CountSteps << "\n";

		SetPos(LeftIndent + 3, TopIndent + 2);
		SetColor(COLOR::black, COLOR::white);

		BG.min = (clock() - TimeStart) / CLOCKS_PER_SEC / 60; // считаем минуты с начала игры
		BG.sec = (clock() - TimeStart) / CLOCKS_PER_SEC - (BG.min * 60);// считаем секунды с начала игры
		cout << "Time: " << BG.min << " min. " << BG.sec << " sec. " << endl; // показывает минуты и секунды игры
		// отлавливаем нажатую клавишу
		if (_kbhit()) {
			c = _getch(); // сохраняем ее код
			switch (c) // проверяем ее код
			{
			case 75: Step(LEFT); break;
			case 72: Step(UP); break;
			case 77: Step(RIGHT); break;
			case 80: Step(DOWN); break;
			case 27: Step(ESC);	break;
			}
			DrawPole(); // обновляем поле в цикле с учетом передвижения фишек 
		}
	}
	showWin = true; // показывем поздравление победителю
	StatisticGame(); // выводим статистику игры
}
const int row = 21, column = 35; // параменты нашего бордюра рамки
char Border[row][column]{
	"A################################B",
	"$                                $",
	"$                                $",
	"$                                $",
	"C################################D",
	"A################################B",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"$                                $",
	"C################################D",

};

//функция для рисования бордюра рамки
void DrawBorder() {
	if (isWork) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				SetPos(TopIndent + i, LeftIndent + j);
				if (Border[i][j] == '#') { SetColor(0xA); cout << char(205); }
				if (Border[i][j] == 'A') { SetColor(0xA); cout << char(201); }
				if (Border[i][j] == 'B') { SetColor(0xA); cout << char(187); }
				if (Border[i][j] == 'C') { SetColor(0xA); cout << char(200); }
				if (Border[i][j] == 'D') { SetColor(0xA); cout << char(188); }
				if (Border[i][j] == '$') { SetColor(0xA); cout << char(186); }
				else if (Border[i][j] == ' ')	cout << ' ';
			}
			cout << endl;
		}
		SetPos(LeftIndent + 1, TopIndent + 9);
		SetColor(COLOR::black, COLOR::white);
		cout << "\"FIFTEENS\" GAME" << endl;
	}
}

// функция для формирования массива игрового поля
void CreatePole()
{
	srand(time(0));
	int tmpArr[SIZE * SIZE]; // временный массив
	//временный массив куда по порядку (от 1 до 15) записываем цифры
	for (int i = 1; i < SIZE * SIZE; i++) {
		tmpArr[i - 1] = i;
	}
	//рандомно по индексам перемешиваем временный массив
	for (int i = 1; i < SIZE * SIZE; i++) {
		for (int j = 1; j < SIZE * SIZE; j++) {
			int r1 = rand() % 15 + 1;
			int r2 = rand() % 15 + 1;
			swap(tmpArr[r1 - 1], tmpArr[r2 - 1]);
		}
	}
	// заполняем наш игровой массив из цифр временного массива
	int k = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			Pole[i][j] = tmpArr[k++];
		}
	}
	//нулевой элемент в нижний правый угол (3х3)
	Pole[SIZE - 1][SIZE - 1] = 0; // 
	ZeroX = 3; ZeroY = 3; // изначальные координаты нашего нулевого элемента
}

// функция продолжения игры подтягивает и разносит по переменным параметры сохраненной игры
void ContinueSavedGame() {
	ifstream f;
	f.open("../Debug/SaveGame.txt");
	//Проверка успешности открытия файла для чтения
	if (f.fail()) {
		cout << "\n File open error!";
		exit(1);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++) {
			f >> Pole[j][i];
			if (Pole[j][i] == 0) {
				ZeroX = j; ZeroY = i;
			}
			//cout << "Pole[" << j << "][" << i << "] = " << Pole[j][i] << endl;
		}
	}
	//Закрытие файла
	f.close();
	f.open("../Debug/SaveTimeSteps.txt", fstream::in | fstream::out);
	if (f.fail()) {
		cout << "\n File open error!";
		exit(1);
	}
	f >> BG.min >> BG.sec >> BG.CountSteps;

	//Закрытие файла
	f.close();

	HaveSavedGame = true;
	//------------------------------
}

// функция сохранения игры
void SaveGame() {

	ofstream f;
	f.open("../Debug/SaveGame.txt");
	if (f.fail()) {
		cout << "\n  File open error!";
		exit(1);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			f << Pole[j][i] << " ";
		}
	}
	f.close();


	f.open("../Debug/SaveTimeSteps.txt");
	if (f.fail()) {
		cout << "\n  File open error!";
		exit(1);
	}
	f << BG.min << " " << BG.sec << " " << BG.CountSteps << " ";
	f.close();

}
// функция графического рисования в консоли игрового поля
void DrawPole() {
	if (isWork) {

		for (int j = 0; j < 4; j++)
		{
			SetPos(menuRow + 3 * j + 3, menuCol - 2);
			for (int i = 0; i < 4; i++) //Верхняя часть 
			{
				if (Pole[i][j]) {
					cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(187)/*"########"*/;
				}
				else {
					cout << "      ";
				}
			}
			cout << '\n';
			SetPos(menuRow + 3 * j + 4, menuCol - 2);
			for (int i = 0; i < 4; i++) //Средняя часть
			{
				if (Pole[i][j])
				{
					cout << char(186);
					cout.width(4);
					cout << Pole[i][j] << char(186);
				}
				else {
					cout << "      ";
				}
			}
			cout << '\n';
			SetPos(menuRow + 3 * j + 5, menuCol - 2);
			for (int i = 0; i < 4; i++) //Нижняя часть
			{
				if (Pole[i][j]) {
					cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(188);
				}
				else {
					cout << "      ";
				}
			}
			cout << '\n';
		}
	}
}

// функция реагирования на нажатие движение фишек в качестве параметров для отрисовки обновленного поля и изменения текущих параметров
void Step(_KEY dir)
{
	switch (dir)
	{
	case LEFT:
	{
		if (ZeroX < 3)
		{
			swap(Pole[ZeroX][ZeroY], Pole[ZeroX + 1][ZeroY]);
			BG.CountSteps++;
			ZeroX++;
		}
	} break;
	case UP:
	{
		if (ZeroY < 3)
		{
			swap(Pole[ZeroX][ZeroY], Pole[ZeroX][ZeroY + 1]);
			BG.CountSteps++;
			ZeroY++;
		}
	} break;
	case RIGHT:
	{
		if (ZeroX > 0)
		{
			swap(Pole[ZeroX][ZeroY], Pole[ZeroX - 1][ZeroY]);
			BG.CountSteps++;
			ZeroX--;
		}
	} break;
	case DOWN:
	{
		if (ZeroY > 0)
		{
			swap(Pole[ZeroX][ZeroY], Pole[ZeroX][ZeroY - 1]);
			BG.CountSteps++;
			ZeroY--;
		}
	} break;
	case ESC: // выход из игры в основное меню
		AbortGame();
		break;

	}
}
// функция проверки на победу путем сравнения игрового поля с эталонным полем
bool GameOver()
{
	int count = 0;
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++) {
			if (Pole[i][j] == CorrectPole[i][j]) {
				count++;
			}
			if (count == 15) {
				return true;
			}
		}
	}
	return false;
}


// функция прерываения игры с выходов в главное меню с сохранением текущего состояния
void AbortGame() {
	SetPos(LeftIndent + 6, TopIndent + 2);
	SetColor(COLOR::black, COLOR::white);
	cout << "Save and exit game (y/n)?: ";
	char ynKey;
	ynKey = _getch();
	if (ynKey == ESC) ynKey = 'N';
	cout << ynKey;
	Sleep(150);
	if (ynKey == 'y' || ynKey == 'Y') {
		SaveGame();
		system("cls");
		Start();
	} /*выход из ф-ции игры в главное меню*/
	// продолжаем игру
	else {
		SetPos(LeftIndent + 6, TopIndent + 2);
		cout << "                              ";
	}
}

// функция выхода из игры (закрыть консоль из меню)
bool ExitGame() {
	SetPos(LeftIndent + 14, TopIndent + 2);
	SetColor(COLOR::black, COLOR::white);
	cout << "Are you shure exit(y/n)?: ";
	char ynKey;
	ynKey = _getch();
	if (ynKey == ESC) ynKey = 'N';
	cout << ynKey;
	Sleep(150);
	if (ynKey == 'y' || ynKey == 'Y') {
		system("cls");
		isWork = false;
		return false;
	}
	// продолжаем игру
	else {
		SetPos(LeftIndent + 14, TopIndent + 2);
		cout << "                             ";
		return true;
	}
}

// функция об игре и разработчике
void About()
{ // начало ф-ции
	system("cls");
	CursorHide(); // скрыть курсор
	DrawBorder();
	SetPos(LeftIndent + 2, TopIndent + 2);
	SetColor(COLOR::black, COLOR::yellow);
	cout << "Autor: Jumabekov Darkhan";
	SetPos(LeftIndent + 3, TopIndent + 2);
	SetColor(COLOR::black, COLOR::yellow);
	cout << "Group: SEP-211/1";

	SetColor(COLOR::black, COLOR::white);
	SetPos(LeftIndent + 6, TopIndent + 2);
	cout << "   Rules of the game\n";
	SetPos(LeftIndent + 7, TopIndent + 2);
	cout << "The classic playing field\n";
	SetPos(LeftIndent + 8, TopIndent + 2);
	cout << "is a 4x4 matrix of cells, \n";
	SetPos(LeftIndent + 9, TopIndent + 2);
	cout << "on which the numbers from 1 \n";
	SetPos(LeftIndent + 10, TopIndent + 2);
	cout << "to 15 are located in order. \n";
	SetPos(LeftIndent + 11, TopIndent + 2);
	cout << "The last cell is empty. The \n";
	SetPos(LeftIndent + 12, TopIndent + 2);
	cout << "cells are shuffled in a \n";
	SetPos(LeftIndent + 13, TopIndent + 2);
	cout << "certain way, and the player's \n";
	SetPos(LeftIndent + 14, TopIndent + 2);
	cout << "task is to restore their";
	SetPos(LeftIndent + 15, TopIndent + 2);
	cout << "original correct position.";
	system("pause > nul");
	system("cls");
	Start();
}
// функция вывода статистики игры и возможности ввода имени и сохранения в рекордах при условии
void StatisticGame()
{
	CursorHide(); // скрыть курсор
	if (isWork) {
		system("cls");
		DrawBorder();
		ReadBestGamers();
		PrintBestGamers();
		if (showWin && GameOver()) {

			//BestGamers BG;

			SetPos(LeftIndent + 3, TopIndent + 2);
			SetColor(COLOR::black, COLOR::yellow);

			cout << "Congratulations! You are win!";
			SetPos(LeftIndent + 16, TopIndent + 2);
			SetColor(COLOR::black, COLOR::yellow);
			cout << "Your count of steps: " << BG.CountSteps << "\n";

			SetPos(LeftIndent + 17, TopIndent + 2);
			SetColor(COLOR::black, COLOR::yellow);
			cout << "Your time: " << BG.min << " min. " << BG.sec << " sec. " << endl;

			for (int i = 5; i > 0; i--)
			{
				if ((BG.min < BGArr[i].min) || (BG.min == BGArr[i].min && BG.sec < BGArr[i].sec)) {
					SetPos(LeftIndent + 19, TopIndent + 2);
					SetColor(COLOR::black, COLOR::white);
					cout << "Enter your name: ";
					getline(cin, BG.UserName);
					BGArr[i] = BG;
					SaveBestGamers();
					ReadBestGamers();
					PrintBestGamers();
					SetPos(LeftIndent + 19, TopIndent + 2);
					SetColor(COLOR::black, COLOR::white);
					cout << "Your name is successful saved!";
					break;
				}
			}
		}
		showWin = false;
		!GameOver();
		system("pause > nul");
		system("cls");
		Start();
	}
}

// функция сохранения лучшего игрока в файл
void SaveBestGamers() {
	ofstream f;
	f.open("../Debug/BestGamers.txt");
	if (f.fail()) {
		cout << "\n File open error!";
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		f << BGArr[i].UserName << " " << BGArr[i].CountSteps << " " << BGArr[i].min << " " << BGArr[i].sec << "\n";
	}
	f.close();
}
// функция чтения лучших игроков из файла
void ReadBestGamers() {
	ifstream f;
	f.open("../Debug/BestGamers.txt");
	//Проверка успешности открытия файла для чтения
	if (f.fail()) {
		cout << "\n File open error";
		exit(1);
	}

	for (int i = 0; i < 5; i++)
	{
		f >> BGArr[i].UserName >> BGArr[i].CountSteps >> BGArr[i].min >> BGArr[i].sec;
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if ((BGArr[j].min < BGArr[j - 1].min) || (BGArr[j].min == BGArr[j - 1].min && BGArr[j].sec < BGArr[j - 1].sec)) {
				swap(BGArr[j], BGArr[j - 1]);
			}
		}
	}

	//Закрытие файла
	f.close();
	//------------------------------
}

// функция печати лучших игроков
void PrintBestGamers() {
	SetPos(LeftIndent + 7, TopIndent + 10);
	SetColor(COLOR::black, COLOR::yellow);
	cout << "Best gamers!" << endl;
	SetPos(LeftIndent + 8, TopIndent + 2);
	SetColor(COLOR::black, COLOR::white);
	cout << "N\t" << "Name\t" << "Steps\t" << "Time\t" << endl;
	for (int i = 0; i < 5; i++)
	{
		SetPos(LeftIndent + 9 + i, TopIndent + 2);
		SetColor(COLOR::black, COLOR::white);
		cout << i + 1 << ")\t"
			<< BGArr[i].UserName << "\t"
			<< BGArr[i].CountSteps << "\t"
			<< BGArr[i].min
			<< ":" << BGArr[i].sec
			<< endl;
	}
}

