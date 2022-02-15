#include <iostream>
using namespace std;
#include <cmath>
#include <time.h>
#include <conio.h>   // для _kbhit(), _getch()
#include "Win10.h"   // добавить заголовочный файл Win10.h

int menuRow = 5, menuCol = 8;
//  Пременная для индекса активного пункта меню
int Select = 0;
//  Пременные для цвета пунктов меню - активного, неактивных, цвет по умолчанию
int cSelFon = _COLOR::purple;
int cSelSym = _COLOR::black;

int cUnSelFon = _COLOR::black;
int cUnSelSym = _COLOR::green;

// стандартный цвет консоли (0,7)
int cDefFon = black;    // _COLOR::black;
int cDefSym = white;    // _COLOR::white;

void TaskOne() { //Решение задачи №1
    system("cls");
    srand(time(0));

    int a1; //кубик 1
    int a2; //кубик 2

    int kBall = 0;
    int uBall = 0;
    int ready = 0;


    for (int i = 0; i < 3; i++) {
        cout << "Кубики бросает компьютер..." << endl;
        Sleep(1000);
        a1 = rand() % 6 + 1;
        a2 = rand() % 6 + 1;
        cout << "Компьютеру выпало: " << a1 << " и " << a2 << endl;
        kBall += (a1 + a2);
    }
    cout << "Результат компьютера " << kBall << " баллов" << endl << endl;

    for (int i = 0; i < 3; i++) {
        Sleep(1000);
        cout << "Кубики бросаете Вы! Когда будете готовы, нажмите Enter или любую другую клавишу для выхода из игры" << endl;
        _kbhit();
        ready = _getch();
        if (ready == 13) {
            a1 = rand() % 6 + 1;
            a2 = rand() % 6 + 1;
            cout << "Вам выпало: " << a1 << " и " << a2 << endl;
        }
        else {
            break;

        }
        uBall += (a1 + a2);
    }
    cout << "Ваш результат " << uBall << " баллов" << endl;

    if (kBall > uBall) {
        cout << "Победил компьютер!" << endl;
    }
    else if (kBall < uBall) {
        cout << "Вы победили!" << endl;
    }
    else {
        cout << "Ничья!" << endl;
    }
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню

}


void TaskTwo() { //Решение задачи №2
    system("cls");
    int startNum, endNum, Num;
    // bool condition = true;
    cout << "Введите первое число диапазона: ";
    cin >> startNum;
    cout << "Введите второе число диапазона: ";
    cin >> endNum;
    cout << "Введите число: ";
    cin >> Num;

    while (true) {

        if ((Num < startNum) || (Num > endNum)) {
            cout << "Введите число в диапазоне " << startNum << " - " << endNum << endl;
            cin >> Num;
        }
        else {
            cout << "Вы ввели число " << Num << " в диапазоне " << startNum << " - " << endNum << endl;
            break;
        }
    }
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню

}

void TaskThree() { // Решение задачи про Васю
    system("cls");
    int StrKod;
    int result = 0;

    // пользователь вводит желаемый доход Васи и количество опозданий.
   //Посчитать, сколько строк кода ему надо написать чтобы получить желаемый доход.

    int ZhelDohod;
    cout << "Введите желаемый доход Васи: "; //1000
    cin >> ZhelDohod;

    int KolOpozd;
    cout << "Введите кол-во опозданий: "; //7 => 40$
    cin >> KolOpozd;

    for (StrKod = 0; StrKod <= ZhelDohod + (KolOpozd / 3) * 20; StrKod += 50) {
        result += 100;
    }
    cout << result << " кол-во строк кода надо написать Васе чтобы получить желаемый доход." << "\n\n\n"; //

    //пользователь вводит количество строк кода, написанное Васей и желаемый объем зарплаты.
   //Посчитать, сколько раз Вася может опоздать.

    result = 0;

    cout << "Введите количество строк кода, написанное Васей: "; //3000
    cin >> StrKod;

    cout << "Введите желаемый доход Васи: "; //1000
    cin >> ZhelDohod;

    for (KolOpozd = 0; KolOpozd < StrKod / 2 - ZhelDohod; KolOpozd += 20) {
        result++;
    }
    cout << result * 3 << " раз Вася может опоздать" << "\n\n\n"; //

    //пользователь вводит количество строк кода и количество опозданий.
  // Определить, сколько денег заплатят Васе и заплатят ли вообще.

    result = 0;

    cout << "Введите количество строк кода, написанное Васей: "; //3000
    cin >> StrKod;

    cout << "Введите количество опозданий Васи: "; //10
    cin >> KolOpozd;

    int ZP = StrKod / 2;
    int Straf = (KolOpozd / 3) * 20;
    result = ZP - Straf;

    if (result > 0) {
        cout << result << " $ денег заплатят Васе" << endl; //
    }
    else {
        cout << "Васе денег не заплатят" << endl; //

    }
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню
}


void About()
{ // начало ф-ции
    system("cls"); // команда очистки экрана cls - Clear Screen
    SetPos(3, 5);
    cout << "Домашнее задание 12";
    SetPos(4, 5);
    cout << "Автор: Джумабеков Д.А., группа SEP-211/1";
    SetPos(6, 5);
    //system("pause"); // пауза в консоли программы с выводом "Для продолжения нажмите любую клавишу"
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню
} // конец ф-ции



int main()
{
    setlocale(LC_ALL, "Rus");
    bool isWork = true; // сигнал о работе/завершения цикла меню
    while (isWork == true)
    {
        CursorHide(); // скрыть курсор экрана

        // Вывод пунктов меню
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Решение задачи №1";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Решение задачи №2";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Решение задачи про Васю";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Об авторе";

        SetPos(menuRow + 4, menuCol);
        if (Select == 4) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Выход";

        // восстанвливаем цвет консоли по умолчанию
        SetColor(cDefFon, cDefSym); // (0, 7)

        // обработка нажатий клавиш
        //if ( _kbhit() )//if ( _kbhit() != 0 )
        { // было нажатие клавиши на клавиатуре
          // получить код нажатой кнопки
            int key = _getch();
            // обработка кода нажатой клавиши
            switch (key)
            {
            case _KEY::UP:    // кнопка вверх
            case 'w': case 'W': case _KEY::LEFT:
                if (Select > 0) { Select--; }
                else { Select = 4; } // вкруговую
                break;
            case _KEY::DOWN:  // кнопка вниз
            case 's': case 'S': case _KEY::RIGHT:
                if (Select < 4) { Select++; }
                else { Select = 0; } // вкруговую
                break;
            case _KEY::ENTER: // Выбор пункта меню
              //SetPos(menuRow + 5 + 2, menuCol);
              //cout << "Был выбран " << Select + 1
              //  << " пункт меню";
              // Обработка команд меню
                switch (Select)
                {
                case 0: // Решение задачи №1
                    TaskOne(); // вызов ф-ции Решение задачи №1
                    break;
                case 1: // Настройки
                    TaskTwo(); // Решение задачи №2
                    break;
                case 2: // Решение задачи про Васю
                    TaskThree(); // вызов ф-ции для Решение задачи №2
                    break;
                case 3: // Об авторе
                    About(); // вызов ф-ции About() - вывод информации
                             //  об авторе программы
                    break;
                case 4: // Выход

                    isWork = false;
                    break;
                }
                break;
            case ESC:         // _KEY::ESC:
              // выход из меню

                isWork = false;
                break;
            } // switch(key);
        } // if(_kbhit())
    } // while( isWork == true )


    return 0;
}