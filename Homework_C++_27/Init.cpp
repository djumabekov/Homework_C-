// Source.cpp
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <time.h>
#include <string>
#include "Win10.h"
using namespace std;
#pragma warning(disable:4996)

int main()
{
	system("chcp 1251 > nul");
	srand((unsigned int)time(0));

	Start();   // старт кода 
	return 0;
}
