
/*1. *�������� ���������, ������� �������� ��� ������� ��������������� ����� '?' � ������, ��������� �������������, �� ������� '1'.*/
/*
#define SIZE 2000
char* ZamC(char* str, char za);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "������� ������: ";
    char* buffer = new char[size];
    cin.getline(buffer, size);
    cout << "���������: " << ZamC(buffer, '?') << endl;

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

/*2. *������������ ������ ������, ���������, ������� � ��� �������� "%".*/
/*
#define SIZE 2000
int Counter(char* str, char simbol);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "������� ������: ";
    char* buffer = new char[size];
    cin.getline(buffer, size);
    cout << "�������� % � ������: " << Counter(buffer, '%') << endl;

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

/*3. **������������ ������ ������ �������� � ������� ������, ��������� ������� ��� �� ����������� � ������.
��� ����� �������� �������, ������� ������������ ������� ��� ����������� �������� ������ � ������.*/
/*
#define SIZE 2000
int Counter(char* str, char simbol);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "������� ������: ";
    char* buffer = new char[size];
    cin.getline(buffer, size);
    char simbol;
    cout << "������� ������: ";
    cin >> simbol;
    cout << "�������� " << simbol << " � ������: " << Counter(buffer, simbol) << endl;

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

/*4. **������������ ������ ������. ���������� ���������� ����, ���������� ���� � ���������� ��������� ��������, �������������� � ������.
������������:
��� ��������, ��� ������ �������� ������, �� ����������� ���������� ��� �� ����� 10-� �������, ���������� �������� ��� ������� � ���������� ����� ����.
��� ������� '0' - 48, '1' - 49, '2' - 50, ..., '9' - 57. */
/*
#define SIZE 2000
void Counter(char* str);

int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251 > nul");
    const int size = 2000;
    cout << "������� ������ (����� ���������): ";
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
    cout << "���������� ���� � ������: " << countNum << endl;
    cout << "���������� ���� � ������: " << countAlp << endl;
    cout << "���������� ��������� �������� � ������: " << countSim << endl;
}
*/

/*5. ***����� ����� � ������. ������������ ������ ������ (�����������) � ������� �����.
�������� �������, ������� ��������� ���� �� ������� ����� �� �������� �����������.
������� ��������� ��� ���������: ������ � ������������ � ������ � ������� ������.
������� ������ ������� ������� � ������, ��� ����������� ������� �����.*/
/*
int FindWord(char* str, char* word);
int main()
{
    system("chcp 1251 > nul");

    char str[100];
    cout << "������� ������: ";
    cin.getline(str, 100);

    char word[50];
    cout << "������� ����� ��� ������: ";
    cin.getline(word, 50);

    int find = FindWord(str, word);// ���� ����� � ������ � ���������� ����� ���������� �������
    if (find) {
        cout << "\n������� ����� � ������� " << find;
    }
    else {
        cout << "\n������ ����� ��� � ������";
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

