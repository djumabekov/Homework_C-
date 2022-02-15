
/*1. *Написать программу, которая заменяет все символы вопросительного знака '?' в строке, введенной пользователем, на символы '1'.*/
/*
#define SIZE 2000
char* ZamC(char* str, char za);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "Введите строку: ";
    char* buffer = new char[size];
    cin.getline(buffer, size);
    cout << "Результат: " << ZamC(buffer, '?') << endl;

    cin.get(); cin.get();
}

char* ZamC(char* str, char za)
{
    char* ptemp = str;
    while (*ptemp) {
        if (*ptemp == za) { *ptemp = '1'; }
        ptemp++;
    }
    return str;
}
*/

/*2. *Пользователь вводит строку, посчитать, сколько в ней символов "%".*/
/*
#define SIZE 2000
int Counter(char* str, char simbol);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "Введите строку: ";
    char* buffer = new char[size];
    cin.getline(buffer, size);
    cout << "Символов % в строке: " << Counter(buffer, '%') << endl;

    cin.get(); cin.get();
}

int Counter(char* str, char simbol)
{
    int count = 0;
    char* ptemp = str;
    while (*ptemp) {
        if (*ptemp == simbol) { count++; }
        ptemp++;
    }
    return count;
}
*/

/*3. **Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.
Для этого написать функцию, которая подсчитывает сколько раз встречается заданный символ в строке.*/
/*
#define SIZE 2000
int Counter(char* str, char simbol);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "Введите строку: ";
    char* buffer = new char[size];
    cin.getline(buffer, size);
    char simbol;
    cout << "Введите символ: ";
    cin >> simbol;
    cout << "Символов " << simbol << " в строке: " << Counter(buffer, simbol) << endl;

    cin.get(); cin.get();
}

int Counter(char* str, char simbol)
{
    int count = 0;
    char* ptemp = str;
    while (*ptemp) {
        if (*ptemp == simbol) { count++; }
        ptemp++;
    }
    return count;
}
*/

/*4. **Пользователь вводит строку. Определить количество букв, количество цифр и количество остальных символов, присутствующих в строке.
Рекомендации:
Для проверки, что символ является числом, не обязательно сравнивать его со всеми 10-ю цифрами, достаточно сравнить код символа с диапазоном кодов цифр.
Код символа '0' - 48, '1' - 49, '2' - 50, ..., '9' - 57. */
/*
#define SIZE 2000
void Counter(char* str);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "Введите строку (буквы латинские): ";
    char* buffer = new char[size];
    cin.getline(buffer, size);

    Counter(buffer);

    cin.get(); cin.get();
}

void Counter(char* str)
{
    int countNum = 0;
    int countAlp = 0;
    int countSim = 0;

    char* ptemp = str;
    while (*ptemp) {
        if (*ptemp >= 48 && *ptemp <= 57) { countNum++; }
        if (*ptemp >= 65 && *ptemp <= 90 || *ptemp >= 97 && *ptemp <= 122) { countAlp++; }
        if (*ptemp >= 32 && *ptemp <= 47 || *ptemp >= 58 && *ptemp <= 64 || *ptemp >= 91 && *ptemp <= 96 || *ptemp >= 123 && *ptemp <= 126) { countSim++; }
        ptemp++;
    }
    cout << "Количество цифр в строке: " << countNum << endl;
    cout << "Количество букв в строке: " << countAlp << endl;
    cout << "Количество остальных символов в строке: " << countSim << endl;
}
*/

/*5. ***Поиск слова в строке. Пользователь вводит строку (предложение) и искомое слово.
Написать функцию, которая определит есть ли искомое слово во веденном предложении.
Функция принимает два параметра: строку с предложением и строку с искомым словом.
Функция должна вернуть позицию в строке, где встретилось искомое слово.*/
/*
int FindWord(char* str, char* word);
int main()
{
    system("chcp 1251 > nul");

    char str[100];
    cout << "Введите строку: ";
    cin.getline(str, 100);

    char word[50];
    cout << "Введите слово для поиска: ";
    cin.getline(word, 50);

    int find = FindWord(str, word);// Ищем слово в строке и возвращает адрес найденного символа
    if (find) {
        cout << "\nИскомое слово в позиции " << find;
    }
    else {
        cout << "\nТакого слова нет в строке";
    }

    cin.get(); cin.get();
}

int FindWord(char* str, char * word) {

    char* ptemp = str;
    char* wtemp = word;
    int lenPtemp = strlen(ptemp);
    int lenWtemp = strlen(wtemp);
    int index = 0;
    //cout << "lenPtemp = " << lenPtemp << endl;
    //cout << "lenWtemp = " << lenWtemp << endl;
    for (int i = 0; i < lenPtemp; i++) {
        if (*(wtemp) == *(ptemp + i)) {
            index = i;
            for (int j = 1; j < lenWtemp; j++) {
                if (*(wtemp + j) == *(ptemp + i + j)) {
                    if (j == lenWtemp-1) {
                        return index;
                    }
                }
            }
        }
    }
    return 0;
}
*/

