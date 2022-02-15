#include <iostream>
#include <cmath>
#include <cctype>
#include <Windows.h>
#include <time.h> 
using namespace std;


/*14. **Написать программу, которая выводит на экран линию заданным символом,
вертикальную или горизонтальную, причем линия может выводиться быстро,
нормально и медленно. Общение с пользователем организовать через меню.
Для задержки можете использовать функцию Sleep() из библиотеки Windows.h*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    string b;
    int v;
    int h;

    cout << "Введите параметр линии: гориз. 1, вертик.2:" << endl;
    cin >> a;

    cout << "Введите символ:" << endl;
    cin >> b;

    cout << "Введите длину линии:" << endl;
    cin >> h;

    cout << "Введите скорость от 1-быстро до 3-медленно:" << endl;
    cin >> v;

    for (int i = 0; i < h; i++) {
        if (a == 1) {
            cout << b; Sleep(100 * v);
        }
        else {
            cout << b << endl; Sleep(100 * v);

        }

    }

    return 0;
}
*/
/*17. **Написать игру "Кубики".
Пользователь и компьютер по очереди бросают 2 кубика.
Победитель – тот, у кого по результатам 3х бросков сумма больше.
Используйте функции генерации случайных значений.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    int a;
    int kBall = 0;
    int uBall = 0;
    int ready = 0;


    for (int i = 0; i < 3; i++) {
        cout << "Кубик бросает компьютер..." << endl;
        Sleep(1000);
        a = rand() % 6 + 1;
        cout << "Компьютеру выпало: " << a << endl;
        kBall += a;
    }
    cout << "Результат компьютера " << kBall << " баллов" << endl << endl;

    for (int i = 0; i < 3; i++) {
        Sleep(1000);
        cout << "Кубик бросаете Вы! Когда будете готовы, введите 1" << endl;
        cin >> ready;
        if (ready == 1) {
            a = rand() % 6 + 1;
            cout << "Вам выпало: " << a << endl;
        }
        uBall += a;
    }
    cout << "Ваш результат " << uBall << " баллов" << endl;

    if (kBall > uBall) {
        cout << "Победил компьютер!" << endl;
    }
    else if (kBall < uBall) {
        cout << "Вы победили!" << endl;
    } else {
        cout << "Ничья!" << endl;
    }

    return 0;
}
*/
/*20. ***Написать программу, которая проверяет пользователя на знание таблицы умножения.
Программа выводит на экран два числа, пользователь должен ввести их произведение.
Разработать несколько уровней сложности (отличаются сложностью и количеством вопросов).
Вывести пользователю оценку его знаний. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int level = 1;
    int a;
    int b;
    int c;
    int result;
    srand(time(0));

    cout << "Проверь себя на знание умножения!" << endl;
    cout << "Выберите уровень сложности от 1-легки до 3-сложный" << endl;
    cin >> level;


        for (int i = 0; i < 3*level; i++) {
            Sleep(1000);
            a = rand() % (1000 * level);
            b = rand() % (1000 * level);
            cout << "Умножте числа " << a << " и " << b << endl;
            c = a * b;
            cout << "Введите результат: " << endl;
            cin >> result;
            if (result == c) {
                cout << "Верно!" << endl;

            }
            else {
                cout << "Не верно!" << endl;

            }


    }

    return 0;
}
*/

/*27. *Вывести на экран дробные числа от 0 до 10 с заданным дробным шагом. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    double num = 10;
    double step;
    double res = 0;

    cout << "Введите дробный шаг в формате 0.0" << endl;
    cin >> step;

    while (res < num) {
        cout << "res = " << res << endl;
        res+=step;

    }


    return 0;
}
*/

/*12. ***Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

        for (int j = 0; j < 6; j++) {

            for (int k = 0; k < 12; k++) {
                if (k % 3 == 0) { cout << "***"; }
                else { cout << "---"; }
            }
            cout << endl;
        }

    return 0;
}
*/

/*13. ***Написать программу, которая рисует прямоугольные треугольники 4х видов.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int s;
    cout << "Введите размер одной стороны прямоугольника: ";
    cin >> s;

cout << endl;


for (int i = 0; i <= s; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;
}

cout << endl;

for (int i = 0; i < s; i++)
{
    for (int k = s - 1; k > i; k--)
    {
        cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
        cout << "*";
    }
    cout << endl;
}

cout << endl;

for (int i = s; i > 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;
}

cout << endl;

for (int i = s; i > 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;

    for (int k = s; k >= i; k--)
    {
        cout << " ";
    }
}

return 0;
}
*/