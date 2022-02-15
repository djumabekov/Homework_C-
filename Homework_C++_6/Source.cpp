#include <iostream>
using namespace std;
#include <cmath>
#include <cctype>

/*1. *������������ ������ � ���������� ������. ����������, ����� ��� ������: �����, �����, ���� ���������� ��� ������.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    char Simvol;
    int result;

    cout << "������� ������" << endl;
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

    cout << "result " << result << endl; // 4 ���� ��, 0 ���� ���

    switch (result) {
    case 4:
        cout << "��� �����" << endl; break;
    case 16:
        cout << "��� ���� ����������" << endl; break;
    case 257: case 258:
        cout << "��� �����" << endl; break;
    default: cout << "������� ���������� ������" << endl; break;
    }

    return 0;
}
*/
/*2. *�������� ���������, ������� ��������� �� ������������ ����� ������ � ������� �� ����� �������� ����� ������. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int MonthName;
    cout << "������� ����� ������" << endl;
    cin >> MonthName;

    switch (MonthName) {
    case 1:cout << "������" << endl; break;
    case 2:cout << "�������" << endl; break;
    case 3:cout << "����" << endl; break;
    case 4:cout << "������" << endl; break;
    case 5:cout << "���" << endl; break;
    case 6:cout << "����" << endl; break;
    case 7:cout << "����" << endl; break;
    case 8:cout << "������" << endl; break;
    case 9:cout << "��������" << endl; break;
    case 10:cout << "�������" << endl; break;
    case 11:cout << "������" << endl; break;
    case 12:cout << "�������" << endl; break;
    default: cout << "������� ���������� ����� �� 1 �� 12" << endl; break;

    }
    return 0;
}
*/

/*4. **��� ���. ������� �� ����� �������� ���������, ���������������� ���� ��� �� ���������� ���������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int God;
    cout << "������� ��� � ������� YYYY" << endl;
    cin >> God;

    God = God % 100; //����������� �� ������ ���� ����

    God = God % 12;

    switch (God) {
    case 4: cout << "����"; break;
    case 5: cout << "���"; break;
    case 6: cout << "����"; break;
    case 7: cout << "������"; break;
    case 8: cout << "������"; break;
    case 9: cout << "����"; break;
    case 10: cout << "������"; break;
    case 11: cout << "����"; break;
    case 0: cout << "��������"; break;
    case 1: cout << "�����"; break;
    case 2: cout << "������"; break;
    case 3: cout << "������"; break;
    default: cout << "������� ���������� ����� �� 1 �� 12" << endl; break;
    }

    return 0;
}
*/
/*5. **��������� ���������� �� ������.
   ������������ ������ ���������� ����� ��� ������ � � ���� �� ������ ������������, ��, ��� ������������� �� ���� ����.*/
   /*
   int main()
   {
       setlocale(LC_ALL, "Rus");

       int Day;
       cout << "������� ���� ������" << endl;
       cin >> Day;

       switch (Day) {
       case 1: cout << "� 19:00 �� 22:00 ������� �� �++" << endl; break;
       case 2: cout << "� 19:00 �� 22:00 ������� �� �++" << endl; break;
       case 3: cout << "� 19:00 �� 22:00 ������� �� ��������������" << endl; break;
       case 4: cout << "� 19:00 �� 22:00 ��������������� ������ �� �������� �������� �++" << endl; break;
       case 5: cout << "� 19:00 �� 22:00 ������� �� ��������������" << endl; break;
       case 6: cout << "� 09:00 �� 12:00 ������� �������" << endl; break;
       case 7: cout << "� 12:00 �� 15:00 ��������" << endl; break;
       default: cout << "������� ���������� ����� �� 1 �� 7" << endl; break;

       }

       return 0;
   }
   */
   /*21. **������������ ������ � ���������� ��� �������� � ���� � ����������/���, ������ � � ������/�������.
      ��������� ������ ���������� � ����� �� ��������� ������.*/
      /*
      int main()
      {
          setlocale(LC_ALL, "Rus");

          float KmChas;
          float MSec;
          int result;

          cout << "������� �������� � ��/���" << endl;
          cin >> KmChas;

          cout << "������� �������� � �/���" << endl;
          cin >> MSec;

          KmChas = KmChas / 3.6; //��������� � �/���

          if (KmChas > MSec) {
              result = 1;
          }
          else { result = 2; }

          switch (result) {
          case 1: cout << "�������� " << KmChas * 3.6 << " ��/��� ������ ��� " << MSec << " �/���" << endl; break;
          case 2: cout << "�������� " << KmChas * 3.6 << " ��/��� ������ ��� " << MSec << " �/���" << endl; break;
          default: cout << "�������� " << KmChas * 3.6 << " ��/��� ����� " << MSec << " �/���" << endl; break;
          }

          return 0;
      }
      */
      /*7. ***�������� ��������� ���������� 200$ + ������� �� ������, ������� �� 500$ - 3%, �� 500 �� 1000 � 5%, ����� 1000 � 8%.
         ������������ ������ � ���������� ������� ������ ��� ���� ����������.
         ���������� �� ��������, ���������� ������� ���������, ��������� ��� ������ 200$, ������� ����� �� �����. */
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

            cout << "������� ������ ������� ���������" << endl;
            cin >> UrovenProdazhMenedzher1;

            cout << "������� ������ ������� ���������" << endl;
            cin >> UrovenProdazhMenedzher2;

            cout << "������� ������ �������� ���������" << endl;
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
            cout << "�� ������� ��������� � ������� ���������� " << ZpMenedzhera1 << endl;
            cout << "�� ������� ��������� � ������� ���������� " << ZpMenedzhera2 << endl;
            cout << "�� �������� ��������� � ������� ���������� " << ZpMenedzhera3 << endl;

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
                cout << "������ �������� �������� ������ � �������� ���������� ����� $200 � ��������: " << ZpMenedzhera1 + DopBonus << "$" << endl; break;
            case 2:
                cout << "������ �������� �������� ������ � �������� ���������� ����� $200 � ��������:" << ZpMenedzhera2 + DopBonus << "$" << endl; break;
            case 3:
                cout << "������ �������� �������� ������ � �������� ���������� ����� $200 � ��������:" << ZpMenedzhera3 + DopBonus << "$"<< endl; break;
            default: cout << "��� ��������� ����� � ����� �� �������� �����" << endl; break;

            }

             return 0;
         }
         */
