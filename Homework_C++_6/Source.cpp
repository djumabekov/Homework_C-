#include <iostream>
using namespace std;
#include <cmath>
#include <cctype>

/*1. *Пользователь вводит с клавиатуры символ. Определить, какой это символ: буква, цифра, знак препинания или другое.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    char Simvol;
    int result;

    cout << "Введите символ" << endl;
    cin >> Simvol;

    if (isdigit(Simvol)) {
         result = isdigit(Simvol);
    }
    else if (isalpha(Simvol)) {
         result = isalpha(Simvol);
    }
    else if (ispunct(Simvol)) {
         result = ispunct(Simvol);
    }

    cout << "result " << result << endl; // 4 если да, 0 если нет

    switch (result) {
    case 4:
        cout << "Это цифра" << endl; break;
    case 16:
        cout << "Это знак препинания" << endl; break;
    case 257: case 258:
        cout << "Это буква" << endl; break;
    default: cout << "Введите корректный символ" << endl; break;
    }

    return 0;
}
*/
/*2. *Написать программу, которая принимает от пользователя номер месяца и выводит на экран название этого месяца. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int MonthName;
    cout << "Введите номер месяца" << endl;
    cin >> MonthName;

    switch (MonthName) {
    case 1:cout << "Январь" << endl; break;
    case 2:cout << "Февраль" << endl; break;
    case 3:cout << "Март" << endl; break;
    case 4:cout << "Апрель" << endl; break;
    case 5:cout << "Май" << endl; break;
    case 6:cout << "Июнь" << endl; break;
    case 7:cout << "Июль" << endl; break;
    case 8:cout << "Август" << endl; break;
    case 9:cout << "Сентябрь" << endl; break;
    case 10:cout << "Октябрь" << endl; break;
    case 11:cout << "Ноябрь" << endl; break;
    case 12:cout << "Декабрь" << endl; break;
    default: cout << "Введите корректное число от 1 до 12" << endl; break;

    }
    return 0;
}
*/

/*4. **Дан год. Вывести на экран название животного, символизирующего этот год по восточному календарю.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int God;
    cout << "Введите год в формате YYYY" << endl;
    cin >> God;

    God = God % 100; //избавляемся от первых двух цифр

    God = God % 12;

    switch (God) {
    case 4: cout << "Мышь"; break;
    case 5: cout << "Бык"; break;
    case 6: cout << "Тигр"; break;
    case 7: cout << "Кролик"; break;
    case 8: cout << "Дракон"; break;
    case 9: cout << "Змея"; break;
    case 10: cout << "Лошадь"; break;
    case 11: cout << "Коза"; break;
    case 0: cout << "Обезъяна"; break;
    case 1: cout << "Петух"; break;
    case 2: cout << "Собака"; break;
    case 3: cout << "Свинья"; break;
    default: cout << "Введите корректное число от 1 до 12" << endl; break;
    }

    return 0;
}
*/
/*5. **Составить расписание на неделю.
   Пользователь вводит порядковый номер дня недели и у него на экране отображается, то, что запланировано на этот день.*/
   /*
   int main()
   {
       setlocale(LC_ALL, "Rus");

       int Day;
       cout << "Введите день недели" << endl;
       cin >> Day;

       switch (Day) {
       case 1: cout << "С 19:00 до 22:00 занятия по С++" << endl; break;
       case 2: cout << "С 19:00 до 22:00 занятия по С++" << endl; break;
       case 3: cout << "С 19:00 до 22:00 занятия по системотехнике" << endl; break;
       case 4: cout << "С 19:00 до 22:00 самостоятельная работа по домашним заданиям С++" << endl; break;
       case 5: cout << "С 19:00 до 22:00 занятия по системотехнике" << endl; break;
       case 6: cout << "С 09:00 до 12:00 занятие спортом" << endl; break;
       case 7: cout << "С 12:00 до 15:00 прогулка" << endl; break;
       default: cout << "Введите корректное число от 1 до 7" << endl; break;

       }

       return 0;
   }
   */
   /*21. **Пользователь вводит с клавиатуры две скорости – одну в километрах/час, другую – в метрах/секунду.
      Программа должна определить – какая из скоростей больше.*/
      /*
      int main()
      {
          setlocale(LC_ALL, "Rus");

          float KmChas;
          float MSec;
          int result;

          cout << "Введите скорость в км/час" << endl;
          cin >> KmChas;

          cout << "Введите скорость в м/сек" << endl;
          cin >> MSec;

          KmChas = KmChas / 3.6; //переводим в м/час

          if (KmChas > MSec) {
              result = 1;
          }
          else { result = 2; }

          switch (result) {
          case 1: cout << "Скорость " << KmChas * 3.6 << " км/час больше чем " << MSec << " м/сек" << endl; break;
          case 2: cout << "Скорость " << KmChas * 3.6 << " км/час меньше чем " << MSec << " м/сек" << endl; break;
          default: cout << "Скорость " << KmChas * 3.6 << " км/час равно " << MSec << " м/сек" << endl; break;
          }

          return 0;
      }
      */
      /*7. ***Зарплата менеджера составляет 200$ + процент от продаж, продажи до 500$ - 3%, от 500 до 1000 – 5%, свыше 1000 – 8%.
         Пользователь вводит с клавиатуры уровень продаж для трех менеджеров.
         Определить их зарплату, определить лучшего менеджера, начислить ему премию 200$, вывести итоги на экран. */
         /*
         int main()
         {
             setlocale(LC_ALL, "Rus");

            const int ZpMenedzhera = 200;
            const int DopBonus = 200;
            int LuchshiMenedzher;


            int UrovenProdazhMenedzher1;
            int UrovenProdazhMenedzher2;
            int UrovenProdazhMenedzher3;
            float bonus1;
            float bonus2;
            float bonus3;

            cout << "Уровень продаж первого менеджера" << endl;
            cin >> UrovenProdazhMenedzher1;

            cout << "Уровень продаж второго менеджера" << endl;
            cin >> UrovenProdazhMenedzher2;

            cout << "Уровень продаж третьего менеджера" << endl;
            cin >> UrovenProdazhMenedzher3;

            if (UrovenProdazhMenedzher1 < 500) {
                bonus1 = 1.03;
            }
            else if (UrovenProdazhMenedzher1 >= 500 && UrovenProdazhMenedzher1 <= 1000) {
                bonus1 = 1.05;
            }
            else if (UrovenProdazhMenedzher1 > 1000) {
                bonus1 = 1.08;
            }

            if (UrovenProdazhMenedzher2 < 500) {
                bonus2 = 1.03;
            }
            else if (UrovenProdazhMenedzher2 >= 500 && UrovenProdazhMenedzher2 <= 1000) {
                bonus2 = 1.05;
            }
            else if (UrovenProdazhMenedzher2 > 1000) {
                bonus2 = 1.08;
            }

            if (UrovenProdazhMenedzher3 < 500) {
                bonus3 = 1.03;
            }
            else if (UrovenProdazhMenedzher3 >= 500 && UrovenProdazhMenedzher3 <= 1000) {
                bonus3 = 1.05;
            }
            else if (UrovenProdazhMenedzher3 > 1000) {
                bonus3 = 1.08;
            }

            float ZpMenedzhera1 = float(ZpMenedzhera) * bonus1;
            float ZpMenedzhera2 = float(ZpMenedzhera) * bonus2;
            float ZpMenedzhera3 = float(ZpMenedzhera) * bonus3;
            cout << "ЗП первого менеджера с бонусом составляет " << ZpMenedzhera1 << endl;
            cout << "ЗП второго менеджера с бонусом составляет " << ZpMenedzhera2 << endl;
            cout << "ЗП третьего менеджера с бонусом составляет " << ZpMenedzhera3 << endl;

            if (UrovenProdazhMenedzher1 > UrovenProdazhMenedzher2 && UrovenProdazhMenedzher1 > UrovenProdazhMenedzher3) {

                    LuchshiMenedzher = 1;
                }
                else if (UrovenProdazhMenedzher2 > UrovenProdazhMenedzher1 && UrovenProdazhMenedzher2 > UrovenProdazhMenedzher3) {
                    LuchshiMenedzher = 2;
                }
                else if (UrovenProdazhMenedzher3 > UrovenProdazhMenedzher1 && UrovenProdazhMenedzher3 > UrovenProdazhMenedzher2) {
                    LuchshiMenedzher = 3;
             }

            switch (LuchshiMenedzher) {
            case 1:
                cout << "Первый менеджер является лучшим и получает повышенный бонус $200 и получает: " << ZpMenedzhera1 + DopBonus << "$" << endl; break;
            case 2:
                cout << "Второй менеджер является лучшим и получает повышенный бонус $200 и получает:" << ZpMenedzhera2 + DopBonus << "$" << endl; break;
            case 3:
                cout << "Третий менеджер является лучшим и получает повышенный бонус $200 и получает:" << ZpMenedzhera3 + DopBonus << "$"<< endl; break;
            default: cout << "Все менеджеры равны и никто не получает бонус" << endl; break;

            }

             return 0;
         }
         */
