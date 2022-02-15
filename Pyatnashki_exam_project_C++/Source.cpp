#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>
#include <time.h>
#include "win10.h"
#include <stdlib.h> //�������� ������� randomize � random
#include <conio.h> //�������� ������� clrscr � getch
#include <fstream>
#include <string>
using namespace std;
#define SIZE 4 // ������ �������� ����/c�������

int CorrectPole[SIZE][SIZE];// ���������� ���������� ��������� ���� ��� ���������
int Pole[SIZE][SIZE]; // �������� ������� ����
bool HaveSavedGame = false; //������ ��� �������� ������� ����������� ����

int Numbers[15]; //������ �������� ������ �����

int ZeroX, ZeroY; //���������� ������� (������) �����
bool isWork = true; // ������� ������ ��� ����� while
bool showWin = false; // ������� ������ ��� �������� ��� ������������ ����� � ���� "����������" ����� ������, � �� �� ��������� ����. � ����������� �� ����� "����������" ���� ������ ���������� ������ ������� ���� ����������� ������ � ������� � ���� ����������� ������ ���� ��� � ������� (��� �������)

int Select = 0;//  ��������� ��� ������� ��������� ������ ����
//  ��������� ��� ����� ������� ���� - ���������, ����������, ���� �� ���������
int cSelFon = COLOR::purple;
int cSelSym = COLOR::black;
int cUnSelFon = COLOR::black;
int cUnSelSym = COLOR::green;

// ����������� ���� ������� (0,7)
int cDefFon = black;    // _COLOR::black;
int cDefSym = white;    // _COLOR::white;

//  ���������� ������� ������� (�����)
int TopIndent = 3, LeftIndent = 3;
//  ���������� ������ �������� ����: ������, �������
int menuRow = TopIndent + 4, menuCol = LeftIndent + 7;

int TimeStart; //����� ������ ����

struct BestGamers { // ��������� ��� �������� ���������� � ����� ������
    string UserName; //��� ������
    int CountSteps; //���������� �����
    int min; //����������� ����� ���� � �������
    int sec; //����������� ����� ���� � ��������
};
BestGamers BGArr[5]; // ������ ��������� BestGamers ��� 5 ������ �������
BestGamers BG;  //���������� ��� ��������� BestGamers
 // ������� ��� ������������� ���������� ���� ��� ������ � �������� ������ ���� (����������� ��� �����). � ����������� �� ����� ������������� ����������� ������ ���� ����������
void Init() {
	int num = 1; // ���������� ������� ���� �� 1 �� 15
	// ��������� ��������� ������� ����
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			CorrectPole[j][i] = num++;
	}
	CorrectPole[SIZE - 1][SIZE - 1] = 0;

	//��������� ���� ��������� �����������?
	if (HaveSavedGame) {
		ContinueSavedGame(); // ����������� ����������� ���������
		TimeStart = clock() - ((BG.min * 60 + BG.sec) * CLOCKS_PER_SEC); //����������� ����� ����

	}
	else {
		// �������� ��������� 
		TimeStart = clock();
		BG.CountSteps = 0;
		HaveSavedGame = false;
		CreatePole(); //� ������ ������� ����
	}
}

// �������� ������� ����
void StartGame(bool HaveSavedGame1) {
	HaveSavedGame = HaveSavedGame1;
	system("cls");
	CursorHide(); // ������ ������
	Init(); // ������������� ���������� ���� ��� ������ � �������� ������ ����
	DrawBorder(); // ������ ������ �����
	DrawPole();//  ������ ���� ��������������
	char c; // ������ ������ ������� ������� (����, ����, ������, �����)
	while (isWork && !GameOver()) {
		SetPos(LeftIndent + 2, TopIndent + 2);
		SetColor(COLOR::black, COLOR::white);
		cout << "Count of steps: " << BG.CountSteps << "\n";

		SetPos(LeftIndent + 3, TopIndent + 2);
		SetColor(COLOR::black, COLOR::white);

		BG.min = (clock() - TimeStart) / CLOCKS_PER_SEC / 60; // ������� ������ � ������ ����
		BG.sec = (clock() - TimeStart) / CLOCKS_PER_SEC - (BG.min * 60);// ������� ������� � ������ ����
		cout << "Time: " << BG.min << " min. " << BG.sec << " sec. " << endl; // ���������� ������ � ������� ����
		// ����������� ������� �������
		if (_kbhit()) {
			c = _getch(); // ��������� �� ���
			switch (c) // ��������� �� ���
			{
			case 75: Step(LEFT); break;
			case 72: Step(UP); break;
			case 77: Step(RIGHT); break;
			case 80: Step(DOWN); break;
			case 27: Step(ESC);	break;
			}
			DrawPole(); // ��������� ���� � ����� � ������ ������������ ����� 
		}
	}
	showWin = true; // ��������� ������������ ����������
	StatisticGame(); // ������� ���������� ����
}
const int row = 21, column = 35; // ��������� ������ ������� �����
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

//������� ��� ��������� ������� �����
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

// ������� ��� ������������ ������� �������� ����
void CreatePole()
{
	srand(time(0));
	int tmpArr[SIZE * SIZE]; // ��������� ������
	//��������� ������ ���� �� ������� (�� 1 �� 15) ���������� �����
	for (int i = 1; i < SIZE * SIZE; i++) {
		tmpArr[i - 1] = i;
	}
	//�������� �� �������� ������������ ��������� ������
	for (int i = 1; i < SIZE * SIZE; i++) {
		for (int j = 1; j < SIZE * SIZE; j++) {
			int r1 = rand() % 15 + 1;
			int r2 = rand() % 15 + 1;
			swap(tmpArr[r1 - 1], tmpArr[r2 - 1]);
		}
	}
	// ��������� ��� ������� ������ �� ���� ���������� �������
	int k = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			Pole[i][j] = tmpArr[k++];
		}
	}
	//������� ������� � ������ ������ ���� (3�3)
	Pole[SIZE - 1][SIZE - 1] = 0; // 
	ZeroX = 3; ZeroY = 3; // ����������� ���������� ������ �������� ��������
}

// ������� ����������� ���� ����������� � �������� �� ���������� ��������� ����������� ����
void ContinueSavedGame() {
	ifstream f;
	f.open("../Debug/SaveGame.txt");
	//�������� ���������� �������� ����� ��� ������
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
	//�������� �����
	f.close();
	f.open("../Debug/SaveTimeSteps.txt", fstream::in | fstream::out);
	if (f.fail()) {
		cout << "\n File open error!";
		exit(1);
	}
	f >> BG.min >> BG.sec >> BG.CountSteps;

	//�������� �����
	f.close();

	HaveSavedGame = true;
	//------------------------------
}

// ������� ���������� ����
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
// ������� ������������ ��������� � ������� �������� ����
void DrawPole() {
	if (isWork) {

		for (int j = 0; j < 4; j++)
		{
			SetPos(menuRow + 3 * j + 3, menuCol - 2);
			for (int i = 0; i < 4; i++) //������� ����� 
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
			for (int i = 0; i < 4; i++) //������� �����
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
			for (int i = 0; i < 4; i++) //������ �����
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

// ������� ������������ �� ������� �������� ����� � �������� ���������� ��� ��������� ������������ ���� � ��������� ������� ����������
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
	case ESC: // ����� �� ���� � �������� ����
		AbortGame();
		break;

	}
}
// ������� �������� �� ������ ����� ��������� �������� ���� � ��������� �����
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


// ������� ����������� ���� � ������� � ������� ���� � ����������� �������� ���������
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
	} /*����� �� �-��� ���� � ������� ����*/
	// ���������� ����
	else {
		SetPos(LeftIndent + 6, TopIndent + 2);
		cout << "                              ";
	}
}

// ������� ������ �� ���� (������� ������� �� ����)
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
	// ���������� ����
	else {
		SetPos(LeftIndent + 14, TopIndent + 2);
		cout << "                             ";
		return true;
	}
}

// ������� �� ���� � ������������
void About()
{ // ������ �-���
	system("cls");
	CursorHide(); // ������ ������
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
// ������� ������ ���������� ���� � ����������� ����� ����� � ���������� � �������� ��� �������
void StatisticGame()
{
	CursorHide(); // ������ ������
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

// ������� ���������� ������� ������ � ����
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
// ������� ������ ������ ������� �� �����
void ReadBestGamers() {
	ifstream f;
	f.open("../Debug/BestGamers.txt");
	//�������� ���������� �������� ����� ��� ������
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

	//�������� �����
	f.close();
	//------------------------------
}

// ������� ������ ������ �������
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

