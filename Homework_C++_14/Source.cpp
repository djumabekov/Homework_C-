#include <iostream>
using namespace std;
#include <cmath>
#include <cstring>
#include <time.h>
#include <conio.h>   // для _kbhit(), _getch()
#include "Win10.h"   // добавить заголовочный файл Win10.h
#include <iomanip>
#include <cstdlib>
#include <ctime>

/*19. *Напишите программу, которая выполняет поэлементную сумму двух массивов и результат заносит в третий массив.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int arr1[5];
    int arr2[5];
    int arr3[5];

    for (int i = 0; i < 5; i++) {
        // ручной ввод с консоли для i-го элемента массива
        cout << "Введите " << i + 1 << " цифру массива 1 -> ";
        cin >> arr1[i];
        cout << "Введите " << i + 1 << " цифру массива 2 -> ";
        cin >> arr2[i];
    }
    cout << "Сумма двух массивов -> ";
    for (int i = 0; i < 5; i++) {
        arr3[i] = arr2[i] + arr1[i];
        cout << arr3[i] << " ";
    }


    cin.get(); cin.get();
}
*/

/*27. *Одномерный массив из 20 символов заполнить буквами английского алфавита (в алфавитном порядке).
Использовать массив типа char.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    char arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = 97+i;
        cout << arr[i] << " ";
    }
    cin.get(); cin.get();
}
*/

/*21) **Напишите программу, которая суммирует элементы массива из 10 элементов по следующему принципу:
первый суммирует с последним; второй - с предпоследним и т.д.
Сумму сохранить в массиве из 5 элементов.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int arr1[10];
    int arr2[5];

    for (int i = 0; i < 10; i++) {
        // ручной ввод с консоли для i-го элемента массива
        cout << "Введите " << i + 1 << " цифру массива 1 -> ";
        cin >> arr1[i];
    }
    cout << "Результирующий массив -> ";
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i] + arr1[9 - i];
        cout << arr2[i] << " ";
    }


    cin.get(); cin.get();
}
*/

/*13) ***Написать программу "успеваемость".
Пользователь вводит 10 оценок студента. Оценки вводятся по 12-бальной системе.*/
/*
int arr[10];
int elementArr;
int newBall;
double countBall;

void printBall() {
    system("cls"); // очистка экрана перед возвращением в меню
    SetPos(5, 8);
    cout << "Оценки студента -> ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню

}

void reExamen() {
    system("cls"); // очистка экрана перед возвращением в меню
    SetPos(5, 8);
    cout << "Введите номер элемента массива: ";
    cin >> elementArr;
    SetPos(6, 8);
    cout << "Введите новую оценку: ";
    cin >> newBall;
    arr[elementArr] = newBall;
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню
}

void stipendia() {
    system("cls"); // очистка экрана перед возвращением в меню
    for (int i = 0; i < 10; i++) {
        countBall += arr[i];
    }
    countBall = countBall / 10;
    if (countBall >= 10.7) { SetPos(5, 8); cout << "Cредний бал " << countBall << ". Стипендия выходит"; }
    else { SetPos(5, 8); cout << "Cредний бал " << countBall << ". Стипендия не выходит"; }
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню
}

int main()
{
    setlocale(LC_ALL, "Rus");
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
    bool isWork = true; // сигнал о работе/завершения цикла меню

    for (int i = 0; i < 10; i++) {
        // ручной ввод с консоли для i-го элемента массива
        cout << "Введите " << i + 1 << " оценку студента -> ";
        cin >> arr[i];
    }

    while (isWork == true)
    {
        CursorHide(); // скрыть курсор экрана
        system("cls"); // очистка экрана перед возвращением в меню

        // Вывод пунктов меню
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Вывод оценок (вывод содержимого массива)";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Пересдача экзамена (пользователь вводит номер элемента массива и новую оценку)";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Выходит ли стипендия (стипендия выходит, если средний бал не ниже 10.7)";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Выход из программы";

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
                else { Select = 3; } // вкруговую
                break;
            case _KEY::DOWN:  // кнопка вниз
            case 's': case 'S': case _KEY::RIGHT:
                if (Select < 3) { Select++; }
                else { Select = 0; } // вкруговую
                break;
            case _KEY::ENTER: // Выбор пункта меню
              //SetPos(menuRow + 5 + 2, menuCol);
              //cout << "Был выбран " << Select + 1
              //  << " пункт меню";
              // Обработка команд меню
                switch (Select)
                {
                case 0: // вывод оценок
                    printBall(); //
                    break;
                case 1: // пересдача экзамена
                    reExamen(); //
                    break;
                case 2: // выходит ли стипендия
                    stipendia(); //
                    break;
                case 3: // выход из программы
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
*/

/*8) ***Сжать (сдвинуть элементы) массив, удалив из него все 0, и заполнить освободившиеся справа элементы значениями -1.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[10] = {5, 0, 7, 0, 4, 9, 0, 8, 3, 4};
    int arr2[10];
    int index = 0;
    int arrLength = 10;

     for (int i = 0; i < arrLength; i++) { //копируем массив1 в массив2 без нулей
         if (arr[i] == 0) {
             arr2[i] = arr[i+1];
             index++;
         }
         else { arr2[i-index] = arr[i]; }
     }
     cout << "\n" << index << "\n";

     for (int i = 0; i <= index; i++) { // записываем -1 в конец массива2
         arr2[arrLength - i] = -1;
     }

     for (int i = 0; i < arrLength; i++) { // выводим массив2
        cout << arr2[i] << " ";
     }
    return 0;
}
*/

/*8. ***Написать программу, которая осуществляет разбиение введенного числа на цифры и заносит эти цифры в массив.
Вывести элементы массива, разделяя их двумя пробелами. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    string num;
    cout << "Введите число: ";
    cin >> num;

    char *arr = new char[num.size()]; // Выделение памяти для динамического массива
    for (int i = 0; i < num.size(); i++) {// Заполнение массива
        arr[i] = num[i];
    }
    for (int i = 0; i < num.size(); i++) { //Вывод массива
        cout << arr[i] << "  ";
    }
    delete[] arr; // очистка памяти

return 0;
}
*/

/*15.
a) *Написать программу, которая заполняет одномерный массив из 10 элементов вещественными числами в диапазоне от 1 до 10 с двумя знаками после запятой.
b) **Количество знаков после запятой вводит пользователь. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    double arr[10];
    int num;
    cout << "Введите количество чисел после запятой: ";
    cin >> num;
    for (int i = 0; i < 10; ++i)
        {arr[i] = (rand() % 901 + 100) / 100.0;}
    for (int i = 0; i < 10; ++i)
        {cout << fixed << setprecision(num) << arr[i] << ' ';}
    return 0;
}
*/


/*22.
a) *Написать программу, которая спрашивает у пользователя 10 оценок по 5-бальной системе и определяет количество 2-ек, 3-ек, 4-ок и 5-ок.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int num;
    int arr[10];
    int dvoiki = 0 ;
    int troiki = 0;
    int chetverki = 0;
    int pyatorki = 0;
    cout << "Введите 10 оценок по 5-бальной системе: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Оценка " << i+1 << "-> ";
        cin >> num;
        arr[i] = num;
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 2) {dvoiki++;}
        else if (arr[i] == 3) { troiki++; }
        else if (arr[i] == 4) { chetverki++; }
        else if (arr[i] == 5) { pyatorki++; }
    }
    cout << "\nРезультат: \n";
    cout << "2 -> " << dvoiki << endl;
    cout << "3 -> " << troiki << endl;
    cout << "4 -> " << chetverki << endl;
    cout << "5 -> " << pyatorki << endl;
    */
    /* b)** Оценки вводятся по 12 - бальной системе.Двойкой считается оценка ниже 4, тройкой – от 4 до 6 и т.д. */
     /*
     dvoiki = 0;
     troiki = 0;
     chetverki = 0;
     pyatorki = 0;
     cout << "Введите 10 оценок по 12-бальной системе: \n";
     for (int i = 0; i < 10; i++) {
         cout << "Оценка " << i + 1 << "-> ";
         cin >> num;
         arr[i] = num;
     }
     for (int i = 0; i < 10; i++) {
         if (arr[i] >  0 && arr[i] < 4) { dvoiki++; }
         else if (arr[i] >= 4 && arr[i] <= 6) { troiki++; }
         else if (arr[i] >= 7 && arr[i] <= 10) { chetverki++; }
         else if (arr[i] >= 11 && arr[i] <= 12) { pyatorki++; }
     }
     cout << "\nРезультат: \n";
     cout << "2 -> " << dvoiki << endl;
     cout << "3 -> " << troiki << endl;
     cout << "4 -> " << chetverki << endl;
     cout << "5 -> " << pyatorki << endl;

     return 0;
 }
 */

 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");

     srand(time(0));
     const int num = 7; //1 2 0 4 6 7 9
     int sdvig;
     int polozhenie; //влево-вправо
     int arr[num];
     for (int i = 0; i < num; i++) {
         arr[i] = rand() % 10;
     }
     cout << "Случайные числа: " << endl;
     for (int i = 0; i < num; i++) {
         cout << arr[i] << " ";
     }
     cout << "Выберите количество сдвигов: ";
         cin >> sdvig;

     cout << "Выберите положение (1-влево, 2-вправо): ";
         cin >> polozhenie;
     if (polozhenie == 1) {
         for (int i = 0; i < num - sdvig; i++) {
                 cout << arr[i + sdvig] << " ";
         }
         for (int i = 0; i < sdvig; i++) {

             cout << arr[i] << " ";

         }
     }
     else {
         for (int i = 0; i < sdvig; i++) {
             cout << arr[i + num - sdvig] << " ";
         }
         for (int i = 0; i < num - sdvig; i++) {

             cout << arr[i] << " ";

         }

     }
     return 0;
 }
 */