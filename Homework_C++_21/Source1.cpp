
/*1) *�������� ���������, ������� ������������ ����� ���������� ������������� �����, ��������� ��� ��������� �� ������ ����� �����.
������ ��������� ��������� � ������ �������, ������ � � �����.
*/
/*
#define SIZE 20
void func_1(int* arr, int size);
int func_2(int* arr, int size, int arg);
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    int arg;
    cout << "������� ����� �� 1 �� 10: ";
    cin >> arg;
    func_1(arr, SIZE);
    int res = func_2(arr, SIZE, arg);
    if (res != -1) {
        cout << "\n���������� ����� " << res <<" ������� � �������";
    }
    else {
        cout << "\n����� �� �������";
    }
    cin.get(); cin.get();
}

void func_1(int* arr, int size) {
    int* parr = arr;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 10;
        cout << *parr << " ";
        parr++;
    };
}

int func_2(int* arr, int size, int arg) {
    int* parr1 = &arr[0];
    int* parr2 = &arr[size - 1];
    while (parr1 < parr2) {
        if (*parr1 == arg) {
           return *parr1;
        }
        if (*parr2 == arg) {
            return *parr2;
        }
        parr1++;
        parr2--;
    }
   return -1;

}
*/
/*2) **�������� �������, ������� ��������� ��������� �� ������ � ���������� ���������.
��������� ����� ����������� �� ������ ����� �����, ������� ������ �������� ������� ��������� ������������� �� ������� �� ��������.
������ ��������� ��������� � ������ �������, ������ � � �����.*/
/*
#define SIZE 10
void func_1(int* arr, int size);
void func_2(int* arr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    //��������� ������
    func_1(arr, SIZE);
    cout << endl;

    //�������������� ������
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
    int* parr1 = &arr[0];
    int* parr2 = &arr[size - 1];
    while (parr1 < parr2) {
        swap(*parr1, *parr2);
        parr1++;
        parr2--;
    }
    parr1 = &arr[0];// ���������� ��������� �� ������ �������
    for (int i = 0; i < size; i++) {    //������� �� ����� ����������� ������
        cout << *(parr1 + i) << " ";
    }
}
*/

/*3) **���� ��� �������: �[M] � B[N] (M � N �������� � ����������), ����������� ���������� �������.
���������� ������� ������ ������ ���������� ���������� �������, � ������� ����� ������� ����� (����������, ������) �������� ���� ��������.

4)*** ���� ��� ������� : �[M] � B[N](M � N �������� � ����������), ����������� ���������� �������.
���������� ������� ������ ������ ���������� ���������� �������, � ������� ����� ������� ����� �������� ���� �������� ��� ����������.
*/
/*
void func_1(int* arr, int size);
void func_2(int* arr1, int* arr2, int N, int M);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int M, N;
    cout << "������� ������ ������� 1: ";
    cin >> N;
    cout << "������� ������ ������� 2: ";
    cin >> M;


    int* arr1 = new int[N];
    int* arr2 = new int[M];
    //��������� ������
    func_1(arr1, N);
    cout << endl;
    func_1(arr2, M);
    cout << endl;

    //���� ���������� � ���� �������� � ��������� �� � ������
    func_2(arr1, arr2, N, M);

    cin.get(); cin.get();
}

void func_1(int* arr, int size) {
    int* parr = arr;
    for (int i = 0; i < size; i++) {
        *(parr+i) = rand() % 100;
    };
    parr = &arr[0];
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > 0; j--) {
            if (*(parr + j) < *(parr + j -1)) {
                swap(*(parr + j), *(parr + j - 1));
            }
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << *(parr + i) << " ";
    }
    cout << endl;
}

void func_2(int* arr1, int* arr2, int N, int M) {
    int* parr1 = &arr1[0];
    int* parr2 = &arr2[0];
    int size3 = 0;
    //��������� ������ �������� ������� �� ������ ����������� ���������
    for (int i = 0; i < N; i++)
    {
        int count = 1;

            for (int j = 0; j < i; j++)
            {
                if (*(parr1 + i) == *(parr1 + j)) {
                    count++;
                }
            }

            for (int j = 0;  j < M; j++)
            {
                if (count != 0 && *(parr1 + i) == *(parr2 + j)) {
                    count--;
                }
            }
            if (count == 0 && *(parr1 + i) != *(parr1 + i - 1)) { size3++; }
    }
    if (size3 == 0) {
        cout << "���������� ���" << endl;
    }
    else {// ��������� ����������� �������� � ������ ������ ��� ������������
        cout << "������� " << size3 << " c���������" << endl;
        int* arr3 = new int[size3]; // ������� ������ ������ � size3 ��������
        int* parr3 = &arr3[0];
        int k = 0;

        for (int i = 0; i < N; i++)
        {
            int count = 1;

            for (int j = 0; j < i; j++)
            {
                if (*(parr1 + i) == *(parr1 + j)) {
                    count++ ;
                }
            }

              for (int n = 0; n < size3; n++)
              {
                    if (count != 0 && *(parr1 + i) == *(parr3 + n)) {
                        count++;
                    }
              }

            for (int j = 0; j < M; j++)
            {
                if (count != 0 && *(parr1 + i) == *(parr2 + j)) {
                    count-- ;
                }
            }

            if (count == 0 && *(parr1 + i) != *(parr1 + i - 1)) {
                *(parr3 + k) = *(parr1 + i);
                k++;
            }
            cout << count << " "; // 0 - ����������
        }

    cout << "\n����������� ��������: ";
    for (int i = 0; i < size3; i++) {    //������� �� ����� ������ ������
        cout << *(parr3 + i) << " ";
    }
   }
}
*/
/*5) ***��� ������: �[M] (M �������� � ����������).
���������� ������� �� ������� ������ ��� �������� ��������.
������������ ������ ������ � ������, � ����� � ������� ���� ������, ��� ����� �������.  */
/*
void func_1(int* arr, int size);
void func_2(int* &arr, int &size, int index);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int M, index;
    cout << "������� ������ �������: ";
    cin >> M;
    int* arr = new int[M];
    //��������� ������ ���������� ������� � ��������� �� 0 �� 1
    func_1(arr, M);
    cout << "\n������� �������� �������� �� ������� ������ ��� �������� �������� (1-��������, 2-������): ";
    cin >> index;

    func_2(arr, M, index);
    cout << endl;
    cout << "\n������ ����� ��������: ";
    for (int i = 0; i < M; i++) {    //������� �� ����� ������ ������
        cout << *(arr + i) << " ";
    }
    cin.get(); cin.get();
}
void func_1(int* arr, int size) {
    int* parr = arr;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 100;
        cout << *parr << " ";
        parr++;
    };
}

void func_2(int* &arr, int &size, int index) {
    int* parr = arr;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (index == 2 && i % 2 == 0) {
            count++;
        }
        else if(index == 1 && i % 2 != 0) {
            count++;
        }
    };

    cout << endl;
    cout << count << " ";

    int* tempArr = new int[count];
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (index == 2 && i % 2 == 0) {
            *(tempArr + k) = *(parr + i);
            k++;
        }
        else if (index == 1 && i % 2 != 0) {
            *(tempArr + k) = *(parr + i);
            k++;
        }
    }
    delete[]arr; // �������� ������� �������
  // ���������� ���������� � ������� �������
    arr = tempArr;
    size = count;
}
*/
