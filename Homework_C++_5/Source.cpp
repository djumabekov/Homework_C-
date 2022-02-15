#include <iostream>
using namespace std;
#include <cmath>

/*7. *Пользователь вводит с клавиатуры два целых числа.
Если эти числа равны, то вывести на экран 1, иначе вывести 0.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int number1;
    int number2;

    cout << "Введите первое число" << endl;
    cin >> number1;
    cout << "Введите второе число" << endl;
    cin >> number2;

    if (number1 == number2) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}
*/

/*10. *Пользователь вводит с клавиатуры 2 числа.
Если их сумма больше нуля, то вывести на экран их сумму, иначе – вывести на экран их разность.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int number1;
    int number2;

    cout << "Введите первое число" << endl;
    cin >> number1;
    cout << "Введите второе число" << endl;
    cin >> number2;

    if (number1 + number2 > 0) {
        cout << "number1 + number2 = " << number1 + number2 << endl;
    }
    else {
        cout << "number1 - number2 = " << number1 - number2 << endl;

    }

    return 0;
}
*/
/*11. **Пользователь с клавиатуры вводит 5 оценок студента.
Определить, допущен ли студент к экзамену.
Студент получает допуск, если его средний балл 4 балла и выше (не меньше 4 баллов).
Примечание. Для вычисления среднего балла используйте вещественный (дробный) тип данных.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int number1;
    int number2;
    int number3;
    int number4;
    int number5;

    float result;

    cout << "Введите первую оценку" << endl;
    cin >> number1;
    cout << "Введите вторую оценку" << endl;
    cin >> number2;
    cout << "Введите третью оценку" << endl;
    cin >> number3;
    cout << "Введите четвертую оценку" << endl;
    cin >> number4;
    cout << "Введите пятую оценку" << endl;
    cin >> number5;

    result = (float(number1) + number2 + number3 + number4 + number5) / 5;

    if (result >= 4) {

        cout << "Студент набрал " << result << " балла(-ов) и получил допуск" << endl;
    }
    else {
        cout << "Студент набрал " << result << " балла(-ов) и неполучил допуск" << endl;

    }

    return 0;
}
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int MonthNum;

    cout << "Введите номер месяца от 1 до 12" << endl;
    cin >> MonthNum;

    if (MonthNum == 11 || MonthNum == 12 || MonthNum == 2) {
        cout << "Месяц относиться к зиме" << endl;

    }
    else if (MonthNum == 3 || MonthNum == 4 || MonthNum == 5) {
        cout << "Месяц относиться к весне" << endl;

    }
    else if (MonthNum == 6 || MonthNum == 7 || MonthNum == 8) {
        cout << "Месяц относиться к лету" << endl;

    }
    else {
        cout << "Месяц относиться к осени" << endl;

    }

    return 0;
}
*/

/*29. ***Определить, является ли треугольник со сторонами a, b, c равнобедренным
*/
/*33. ***Пользователь вводит с клавиатуры 3 числа. Определить, существует ли треугольник с такими сторонами.*/

/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    int b;
    int c;
    int max, A, B;

    cout << "Введите первую сторону треуголника" << endl;
    cin >> a;
    cout << "Введите вторую сторону треуголника" << endl;
    cin >> b;
    cout << "Введите третью сторону треуголника" << endl;
    cin >> c;


    if (a >= b && a >= c) {
        max = a;
        A = b;
        B = c;
    }
    else if (b>=a && b>=c) {
        max = b;
        A = a;
        B = c;
    }
    else if (c >= a && c >= b) {
        max = c;
        A = b;
        B = a;
    }

    if (A + B > max) {
        if (A == B || B == max || A == max) {
            cout << "Тругольник является равнобедренным" << endl;
        }
        else {
            cout << "Тругольник является неравнобедренным" << endl;
        }
    }
    else {
        cout << "Тругольник с такими сторонами не может существовать" << endl;

    }

    return 0;
}

*/

/*Дополнительные задачи:
***Решить задачу без использования сравнения, только арифметическими действиями: +,-,*,/,%.
2. Пользователь вводит два целых числа. Вывести на экран меньшее из этих чисел.
3. Пользователь вводит два целых числа. Выведите на экран наибольшее из них.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    int b;
    int c;
    int d;
    int result;

    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;

    c = a / b;
    c = ((c + 2) / (c + 1)) % 2;
    d = (c + 1) % 2;
    result = a * c + b * d; // вычисляем большее число
    cout << "Наибольшее число: " << result << endl; //6

    result = a + b - result; // вычисляем меньшее число
    cout << "Наименьшее число: " << result << endl; //5

    cout << "\nАльтернативный вариант" << endl;

    int min = (a + b - abs(a - b)) / 2;
    int max = (a + b + abs(a - b)) / 2;

    cout << "Наибольшее чило: " << max << endl;
    cout << "Наименьшее чило: " << min << endl;


    return 0;
}
*/
/*25. **Пользователь вводит с клавиатуры целое число – номер года.
    Требуется определить, является ли год високосным.
   (Напомним, что год является високосным, если его номер кратен 4, но не кратен 100, а также, если он кратен 400)*/
   /*

   int main()
   {
       setlocale(LC_ALL, "Rus");

       int god;
       cout << "Введите число года" << endl;
       cin >> god;

       if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0) {
           cout << "Год високосный" << endl; //2020

       }
       else {
           cout << "Год невисокосный" << endl; //1991

       }

       return 0;
   }
   */

   /*26. **Пользователь вводит с клавиатуры площади круга и квадрата. Определить:
   а) Уместится ли круг в квадрате
   б) Уместится ли квадрат в круге
   */
   /*
   int main()
   {
       setlocale(LC_ALL, "Rus");

       float PloshadKruga;
       float PloshadKvadrata;
       const double PI = 3.14159;

       cout << "Введите площадь круга" << endl;
       cin >> PloshadKruga;

       cout << "Введите площадь квадрата" << endl;
       cin >> PloshadKvadrata;

       if (2 * PloshadKruga >= PI * PloshadKvadrata) {
           cout << "Квадрат поместится в круге" << endl;
       }
       else { cout << "Квадрат не поместится в круге" << endl;
       }

       if (PloshadKruga <= PI * PloshadKvadrata/4) {
           cout << "Круг поместится в квадрате" << endl;
       }
       else {
           cout << "Круг не поместится в квадрате" << endl;
       }



       return 0;
   }
   */
