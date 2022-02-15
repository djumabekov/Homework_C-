/*1) *��������� ��������� � �������� �������������, ���������� ���� ����� (������������� ��� �������������), ��������� � ����������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    int * pa;
    pa = &a;
    cout << "������� �����: ";
    cin >> * pa;

    *pa < 0 ? cout << "���� ����� " << *pa << " �������������" : cout << "���� ����� " << *pa << " �������������";

    cin.get(); cin.get();
}
*/

/*2) **�������� ����������� �����������, ��������� ������ �����������.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b;
    char oper;

    int* pa, * pb;
    char *poper;

    pa = &a;
    pb = &b;
    poper = &oper;

    cout << "������� ��� ����� ����� � ���� ��������� ����� ������� (������., 5 + 5) � ������� enter: ";
    cin >> *pa >> *poper  >> *pb;

    switch (*poper) {
    case '+': cout << *pa << " + " << *pb << " = " << *pa + *pb << endl; break;
    case '-': cout << *pa << " - " << *pb << " = " << *pa - *pb << endl; break;
    case '/': cout << *pa << " / " << *pb << " = " << float(*pa) / *pb << endl; break;
    case '*': cout << *pa << " * " << *pb << " = " << *pa * *pb << endl; break;
    default: cout << "������� ������������ ��������" << endl; break;
    }


    cin.get(); cin.get();
}
*/

/*3) *��������� ��������� �� ������ ����� �����, ��������� ����� ��������� �������.
������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.*/
/*
#define SIZE 10
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int arr[SIZE];
    int res = 0;
    int * parr = &arr[0];

    for(int i = 0; i < SIZE; i++){
        * parr = rand() % 10;
        cout << *parr << " ";
        res += *parr;
        parr++;
    };
    cout << "\n ����� �����: " << res;


    cin.get(); cin.get();
}
*/

/*4) **�������� ���������, ������� �������� �������, ����������� � �������� ���������, ��������� �� ������ � ������ �������, � �������� ��� ������� 4 �������� �� 999.*/
/*
#define SIZE 10
void func_1(int* parr, int size);
void func_2(int* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int arr[SIZE];
    int* parr = &arr[0];

    //��������� ������
    func_1(parr, SIZE);
    cout << endl;

    //������ ������
    func_2(parr, SIZE);

    cin.get(); cin.get();
}
void func_1(int *parr, int size) {
    for (int i = 0; i < SIZE; i++) {
        *parr = rand() % 10;
        cout << *parr << " ";
        parr++;
    };
}

void func_2(int* parr, int size) {
    for (int i = 0; i < size; i++) {
        if (*parr > 3 && *parr % 4 == 0) {
            *parr = 999;
        }
        cout << *parr << " ";
        parr++;
    };
}
*/

/*5) **�������� ���������, ������� �������� �������, ����������� � �������� ���������, ��������� �� ������ � ������ �������, � �������� ������������� �������� �� 0. */
/*
#define SIZE 10
void func_1(int* parr, int size);
void func_2(int* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int arr[SIZE];
    int* parr = &arr[0];

    //��������� ������
    func_1(parr, SIZE);
    cout << endl;

    //������ ������
    func_2(parr, SIZE);

    cin.get(); cin.get();
}
void func_1(int *parr, int size) {
    for (int i = 0; i < size; i++) {
        *parr = rand() % 10 - 5;
        cout << *parr << " ";
        parr++;
    };
}

void func_2(int* parr, int size) {
    for (int i = 0; i < size; i++) {
        if (*parr < 0) {
            *parr = 0;
        }
        cout << *parr << " ";
        parr++;
    };
}
*/


/*6) **������� ������ �� N ����� �����, N ������ ������������.
��������� ������ ��������� ������� � ��������� �� 1 �� 12.
������ ����� ��� ������ �� 12 ������� �������.
��������� ���������� �� ������ ����� �����, ��������� ������� �����, �����, �������� � �������.
������ �� 1 �� 3 ������������, ������ �� 4 �� 6, �������� �� 7 �� 9, ������� �� 10 �� 12. */
/*
void func_1(int* parr, int size);
void func_2(int* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int size;
    float count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    cout << "������� ���������� ������: ";
    cin >> size;
    int * arr = new int[size];
    int* parr = &arr[0];

    //��������� ������
    func_1(parr, size);
    cout << endl;

    //������� ���������� 2,3,4,5
    func_2(parr, size);

    cin.get(); cin.get();
}
void func_1(int* parr, int size) {
    for (int i = 0; i < size; i++) {
        *parr = rand() % 12;
        cout << *parr << " ";
        parr++;
    };
}

void func_2(int* parr, int size) {
    float count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    for (int i = 0; i < size; i++) {
        if (*parr >= 1 && *parr<=3) {
            count2++;
        }
        if (*parr >= 4 && *parr <= 6) {
            count3++;
        }
        if (*parr >= 7 && *parr <= 9) {
            count4++;
        }
        if (*parr >= 10 && *parr <= 12) {
            count5++;
        }
        parr++;
    };
    cout << "���������� �����: " << fixed << setprecision(2) << (count2 / 12) * 100 << "%\n";
    cout << "���������� �����: " << (count3 / 12) * 100 << "%\n";
    cout << "���������� ��������: " << (count4 / 12) * 100 << "%\n";
    cout << "���������� �������: " << (count5 / 12) * 100 << "%\n";

}
*/

/*7) **��������� ���������, ��������� � ����� ����������� ������� ������ ������������� �������.*/
/*
#define SIZE 10
void func_1(int* parr, int size);
void func_2(int* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    //��������� ������
    func_1(arr, SIZE);
    cout << endl;

    //��������� ������ ��������� ������� ��� ������� � ����� �������
    func_2(arr, SIZE);

    cin.get(); cin.get();
}
void func_1(int* arr, int size) {
    int* parr = arr;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 10 - 3;
        cout << *parr << " ";
        parr++;
    };
}

void func_2(int* arr, int size) {
    int* parr = arr;
    int index = 0;
    int temp = 0;
    for (int i = 0; i < size; i++) {
        if (*(parr+i) < 0) { // ������� ��������� �������
            index = i;// ���������� ������ ������ ���������� ��������
            temp = *(parr+i); // ���������� ��� ��������� �������
            break;
        }
    }
    //cout << "temp = "  << temp << endl;
   //cout << "index = "  << index << endl;

    // �������� ������ �� ��� ����� ����� �������� index
    for (int i = index; i < size; i++) {
            cout << "i = " << i << endl;
            *(parr+i) = *(parr + i + 1);
    }
    *(parr+size-1) = temp; // ��������� ��� ��������� ������� � ����� �������

    for (int i = 0; i < size; i++) {    //������� �� ����� ����������� ������
        cout << *(parr+i) << " ";
    }

    // 2) �������� ������� ����������
    delete[]parr; // �������� ������� ����������
}
*/


/*8) **��������� � ������������ ����������� ��� ����������� ������� ������������ �����.
����������� ������� ����� ������ � ��������� ��� ���������� ������� � ��������� �� 0 �� 1 (� 2-�� ��� 3-�� ������� ����� �������). */
/*
void func_1(float* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int size;
    cout << "������� ������ �������: ";
    cin >> size;
    float* arr = new float[size];
    //��������� ������ ���������� ������� � ��������� �� 0 �� 1
    func_1(arr, size);
    cout << endl;
    cin.get(); cin.get();
}
void func_1(float* arr, int size) {
    float* parr = arr;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 100;
        *parr /= 100;
        cout << *parr << " ";
        parr++;
    };
}
*/
/*9) ***��������� ���������, ���������� � ���������� ������� ������������ ���������� ������ ������ �����. */
/*
#define SIZE 20
void func_1(int* parr, int size);
int func_2(int* arr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    //��������� ������
    func_1(arr, SIZE);
    cout << endl;
    cout << "������������ ���������� ������ ������ ����� = " << func_2(arr, SIZE) << endl;

    cin.get(); cin.get();
}
void func_1(int* arr, int size) {
    int* parr = arr;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 3;
        cout << *parr << " ";
        parr++;
    };
}

int func_2(int* arr, int size) {
    int* parr = arr;
    int counterZero = 0;
    int sumZero = 0;
    for (int i = 0; i < size; i++) {
        if (*(parr + i) == 0) {
            counterZero++;
        }
        else { counterZero = 0;
        }
        if (sumZero < counterZero) {
            sumZero = counterZero;
        }
    }
    return sumZero;
}
*/

