/*1. *Напишите функцию, которая переворачивает сроку. Проиллюстрировать работу функции примером.*/
/*
void PrintArr(char* str);
void ReverseStr(char* str);
int main()
{
    system("chcp 1251 > nul");
    char str[100];
    cout << "Введите строку: ";
    cin.getline(str, 100);
    PrintArr(str);
    ReverseStr(str);
    cin.get(); cin.get();
}
void PrintArr(char* str)
{
    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    for (int i = 0; i < lenPtemp; i++)
    {
        cout << *(ptemp+i) << " ";
    }
    cout << endl;
}

void ReverseStr(char*str) {
    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    for (int i = 0; i < lenPtemp / 2; i++)
    {
        swap(*(ptemp+i), *(ptemp + (lenPtemp - 1 - i)));
    }
    PrintArr(ptemp);

}
*/

/*2. **Написать две функции:
- первая функция приводит строку к верхнему регистру;
- вторая функция приводит строку к нижнему регистру;
Проиллюстрировать работу функций примерами.*/
/*
void PrintArr(char* str);
void UpLowLettersCode(int*& UpLettersCode, int*& LowLettersCode);
void UpLowStr(char* str, int* UpLettersCode, int* LowLettersCode, int arg);
#define SIZE 26
int main()
{
    system("chcp 1251 > nul");
    char str[100];
    int arg;
    int * UpLettersCode = new int[SIZE];
    int * LowLettersCode = new int[SIZE];;
    UpLowLettersCode(UpLettersCode, LowLettersCode);
    cout << "Введите строку на английском языке: ";
    cin.getline(str, 100);
    PrintArr(str);
    cout << "Выберите параметр перевода строки в верхний или нижний регистр (1 - верхний, 0 - нижний): ";
    cin >> arg;

    UpLowStr(str, UpLettersCode, LowLettersCode, arg);
    cin.get(); cin.get();
}
void PrintArr(char* str)
{

    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    for (int i = 0; i < lenPtemp; i++)
    {
        cout << *(ptemp + i) << " ";
    }
    cout << endl;
}
void UpLowLettersCode(int * &UpLettersCode, int* &LowLettersCode) {
    int k = 0;
    for (int i = 65, j = 97; i < 65 + SIZE; i++, j++)
    {
        UpLettersCode[k] = i;
        LowLettersCode[k] = j;
        k++;
    }
  //  for (int i = 0; i < SIZE; i++)
    //{
     //   cout << UpLettersCode[i] << " ";
     //   cout << LowLettersCode[i] << " ";
   // }

}
void UpLowStr(char* str, int * UpLettersCode, int* LowLettersCode, int arg) {
    char* ptemp = str;
    int* UpLetterstemp = UpLettersCode;
    int* LowLetterstemp = LowLettersCode;
    int lenPtemp = strlen(ptemp);
     if (arg == 1) {
        for (int i = 0; i < lenPtemp; i++)
        {
            for (int j = 0; j < SIZE; j++) {
               // cout << "int(*(ptemp + i)) = " << int(*(ptemp + i)) << " = " << "*(LowLetterstemp + j) = " << *(LowLetterstemp + j) << " \n";
                if (int(*(ptemp + i)) == *(LowLetterstemp + j)) {
                   // cout << "char(*(UpLetterstemp + j)) = " << char(*(UpLetterstemp + j)) << " \n";
                    *(ptemp + i) = char(*(UpLetterstemp + j));
                }

            }
        }
     }else if(arg == 0){
         for (int i = 0; i < lenPtemp; i++)
         {
             for (int j = 0; j < SIZE; j++) {
                 if (int(*(ptemp + i)) == *(UpLetterstemp + j)) {
                     *(ptemp + i) = *(LowLetterstemp + j);
                 }

             }
         }
     }
     else {
         cout << "Выбран некорректный параметр!\n";
         return;
     }


    PrintArr(ptemp);

}
*/

/*3. **Убрать из строки все символы «о» и уменьшить ее до необходимого размера.*/
/*
void PrintArr(char* str);
void DelToStr(char* str);
int main()
{
    system("chcp 1251 > nul");
    char str[100];
    cout << "Введите строку: ";
    cin.getline(str, 100);
    PrintArr(str);
    DelToStr(str);
    cin.get(); cin.get();
}
void PrintArr(char* str)
{
    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    cout << "\"";
    for (int i = 0; i < lenPtemp; i++)
    {
        cout <<  *(ptemp + i) << " ";
    }
    cout << "\"";
    cout << endl;
}

void DelToStr(char* str) {
    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    int count = 0;
    for (int i = 0; i < lenPtemp; i++)
    {
        if (*(ptemp + i) == 'о') {
            for (int j = i; j < lenPtemp; j++) {
             *(ptemp + j) = *(ptemp + j + 1);
            }
            count++;
        }
    }
    *(ptemp + (lenPtemp - count)) = '\0';
    PrintArr(ptemp);

}
*/

/*4. ***Написать функцию, которая определяет является ли строка палиндромом,
т.е. строкой, которую можно читать и слева направо, и справа налево:
"А роза упала на лапу Азора", "Аргентина манит негра", "Я ем змея".
Рекомендации:
Из строки предварительно нужно удалить пробелы и привести ее к одному регистру.
*/
/*
void PrintArr(char* str);
void UpLowLettersCode(int*& UpLettersCode, int*& LowLettersCode);
void StrToLow(char* str, int* UpLettersCode, int* LowLettersCode);
char* TrimAll(char* str);
string CheckStrToPalindrom(char* str);
#define SIZE 32 // количество букв русского алфавита
int main()
{
    system("chcp 1251 > nul");
    char str[100];
    int* UpLettersCode = new int[SIZE];
    int* LowLettersCode = new int[SIZE];;
    UpLowLettersCode(UpLettersCode, LowLettersCode);
    cout << "Введите строку на русском языке: ";
    cin.getline(str, 100);
    PrintArr(str);
    TrimAll(str);
    StrToLow(str, UpLettersCode, LowLettersCode);
    cout << "Строка " << CheckStrToPalindrom(str) << endl;

    cin.get(); cin.get();
}
void PrintArr(char* str) // печатаем строку на экран
{

    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    for (int i = 0; i < lenPtemp; i++)
    {
        cout << *(ptemp + i) << " ";
    }
    cout << endl;
}
void UpLowLettersCode(int*& UpLettersCode, int*& LowLettersCode) { // формируем массив букв русского алфавита
    int k = 0;
    for (int i = 192, j = 224; i < 223 + SIZE; i++, j++)
    {
        UpLettersCode[k] = i;
        LowLettersCode[k] = j;
        k++;
    }
     for (int i = 0; i < SIZE; i++)
      {
          cout << UpLettersCode[i] << " ";
          cout << LowLettersCode[i] << " ";
      }

}
void StrToLow(char* str, int* UpLettersCode, int* LowLettersCode) { //приводим строку в нижний регистр
    char* ptemp = str;
    int* UpLetterstemp = UpLettersCode;
    int* LowLetterstemp = LowLettersCode;
    int lenPtemp = strlen(ptemp);
    for (int i = 0; i < lenPtemp; i++)
    {
        for (int j = 0; j < SIZE; j++) {
            //cout << "int(unsigned char(*(ptemp + i))) = " << int(unsigned char(*(ptemp + i))) << " = " << "*(UpLetterstemp + j) = " << *(UpLetterstemp + j) << " \n";
            if (int(unsigned char(*(ptemp + i))) == *(UpLetterstemp + j)) {
                // cout << "char(*(UpLetterstemp + j)) = " << char(*(UpLetterstemp + j)) << " \n";
                *(ptemp + i) = *(LowLetterstemp + j);

            }

        }
    }
    PrintArr(ptemp);
}

string CheckStrToPalindrom(char* str) { // проверяем строку на палиндром
    char* ptemp = str;
    int lenPtemp = strlen(ptemp);
    int count = 0;
    string palindrom = "не палиндром";
    for (int i = 0; i < lenPtemp; i++)
    {
        cout << "*(ptemp + i) == " << *(ptemp + i) << " *(ptemp + (lenPtemp - i - 1)) == " << *(ptemp + (lenPtemp - i - 1)) << endl;
        if (*(ptemp + i) == *(ptemp + (lenPtemp - i - 1))) {
            count++;
        }
    }
    if (count == lenPtemp) {
        return palindrom = "палиндром";
    }
    return palindrom;
}

// "Ф-ция удаления хвостовых пробелов           "
// "Ф-ция удаления хвостовых пробелов"
char* RTrim(char* str)
{
    if (str[0] == '\0') { return str; } // выход из-за пустой строки
    //if (!*str) { return str; } // выход из-за пустой строки
    int len = strlen(str); // текущая длина строки
    //if (len == 0) { return str; } // выход из-за пустой строки
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] != ' ') {
            str[i + 1] = '\0';
            //break;
            return str;
        }
    }
    str[0] = '\0'; // строка из пробелов ==> пустая строка
    return str;
}

char* LTrim(char* str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            break;
        }
    }
    int j = 0;
    for (; str[i] != '\0'; j++, i++) {
        str[j] = str[i];
    }
    str[j] = '\0';
    return str;
}

char* Trim(char* str)
{
    //LTrim(str);
    //RTrim(str);
    //return str;
    return LTrim(RTrim(str));
    //return RTrim(LTrim(str));
}
char* TrimAll(char* str)
{
    Trim(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            LTrim(str + i);
            //LTrim(&str[i + 1]);
        }
    }
    return str;
}
*/
