
/*1. �������� �������, ������� ���������� ������������ ������� ������� � ���������� ������������ ��� �������� � �����.
������ ������� ��������� ������������ ������� cin � cout.
- ���������� ���������� ��� ����� � ������������ ����� (long long, float).
- ���������� ������ ���� �������.
������������: �������������� ��������� ���������� �� ������.
����������������� ������ ���� �������.*/
/*
template<typename T>
void FillArr(T*& arr, int size, T min, T max);

void FillArr(float*& arr, int size, int min, int max);

template<typename T>
void PrintArr(T* arr, int size);

template <typename T>
void MaxElement(T * arr, int size, T & maxelement, int & index);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int size = 10;

    int* arr = new int[size];
    long long* arrLL = new long long[size];
    float* arrFl = new float[size];

    int maxelement = 0;
    long long maxelementLL = 0;
    float maxelementFl = 0;

    int index = 0;

    //��� ������� INT
    FillArr(arr, size, 1, 10); //��������� ������ �������
    PrintArr(arr, size); // �������� �� �����
    MaxElement(arr, size, maxelement, index); // ��������� ���� ������� � ��� ������
    cout << "���� ������� ������� INT: " <<  maxelement << ", ������: " << index << endl; // �������� ���������
    cout << endl;

    //��� ������� Long
    FillArr(arrLL, size, 111111111111, 999999999999); //��������� ������ �������
    PrintArr(arrLL, size); // �������� �� �����
    MaxElement(arrLL, size, maxelementLL, index); // ��������� ���� ������� � ��� ������
    cout << "���� ������� ������� Long: " << maxelementLL << ", ������: " << index << endl; // �������� ���������
    cout << endl;

    //��� ������� Float
    FillArr(arrFl, size, 1, 10); //��������� ������ �������
    PrintArr(arrFl, size); // �������� �� �����
    MaxElement(arrFl, size, maxelementFl, index); // ��������� ���� ������� � ��� ������
    cout << "���� ������� ������� Float: " << maxelementFl << ", ������: " << index << endl; // �������� ���������

    cin.get(); cin.get();
}

//���������� �������
template<typename T>
void FillArr(T*& arr, int size, T min, T max)
{
    T* newArr = new T[size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = rand() % (max - min + 1) + min;
    }
    delete[]arr; // �������� ������� �������
    //���������� ���������� �  �������
    arr = newArr;
}
//���������� ������� ��� float
void FillArr(float* & arr, int size, int min, int max) {
    int _min = min * 100, _max = max * 100;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (_max - _min + 1) + _min);
        arr[i] /= 100;
    }
}

// ���������� ���� �������� � ��� ������
template <typename T>
void MaxElement(T* arr, int size, T& maxelement, int & index) {
    maxelement = arr[0];
    index = 0;
    for (int i = 0; i < size; i++) {
        if (maxelement < arr[i]) {
            maxelement = arr[i];
            index = i;
        }
    }

}

//������ �������
template<typename T>
void PrintArr(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/

/*2. **�������� �������, ������� ��������� ������ ����������� ��������� (a*x^2 + b*x + c = 0).
������ ������� ��������� ������������ ������� cin � cout.
����������: ������� � �������� ���������� ������ ��������� ������������ ����������� ��������� a,b,c � ���������� ��� ����� ���������.
���� ������� ������ ���������� ����� ����� - ���������� �������������� ������ ���������.
�.�., ���� ��������� �� ����� ������, ������� ������ ������� 0.
���� ��������� ����� ���� ��� ��� �����, ������� ������ ������� 1 ��� 2 ��������������, � ���� ����� ������ ������������ ����� ��������� �� ������.
***���������� ������ ���� �������.
������������: �������������� ��������� ���������� �� ������.
����������������� ������ ���� �������.*/

/*
template<typename T>
void KvadratnoeUrovnenie(T a, T b, T c, T& x1, T& x2, int& countKorny);

int main()
{
    setlocale(LC_ALL, "Rus");
    float a = 1.2;
    float b= 18.6;
    float c = 5.3;
    float x1;
    float x2;
    int countKorny = 0;

    cout << "������ ��������� ��������� ��� a=" << a << ", b=" << b << ", c=" << b << ": ";
    KvadratnoeUrovnenie(a, b, c, x1, x2, countKorny);
    cout << "���������� ������: " << countKorny << " -> ";
    if (countKorny != 0) {
        if (x1) { cout << "x1 = " << x1 << " "; }
        if (x2) { cout << "x2 = " << x2 << endl; }
    }

    cin.get(); cin.get();
}

template<typename T>
void KvadratnoeUrovnenie(T a, T b, T c, T & x1, T & x2, int & countKorny)
{
    T d = b * b - 4 * a * c;

    if (d < 0)
    {
        countKorny = 0;
    }
    else {
        x1 = (-b - sqrtf(d)) / (2 * a);
        x2 = (-b + sqrtf(d)) / (2 * a);
        x1 ? countKorny++ : countKorny;
        x2 ? countKorny++ : countKorny;
    }

}
*/


/*3. **�������� ������� ������� ������� �� ����� �������������� ����� �������� ��������.
� ������� ���������� ����� ����� � ������ ��� ������.
���� ������������ �� �������� ��������� � �������, �� ������� ������ ������� �� ����� ����� ������ � 5 ��������� '*'.
������������: �������������� ����������� �� ���������.*/
/*
template<typename T>
void setParametrs(int & lineSize = 5, T & lineChar = '*');

template<typename T>
void printLine(int lineSize, T lineChar);

int main()
{
    setlocale(LC_ALL, "Rus");

    int lineSize = 5;
    char lineChar = '*';
    setParametrs(lineSize, lineChar);
    printLine(lineSize, lineChar);
    cin.get(); cin.get();
}
template<typename T>
void setParametrs(int & lineSize, T & lineChar) {
    int yesNo = 0;
    int _lineSize = lineSize;
    T _lineChar = lineChar;
    cout << "����� ����� = " << lineSize << ", ������ = " << lineChar << endl;
    cout << "������ ��������? (��-1, ���=0): ";
    cin >> yesNo;
    if (yesNo) {
        cout << "������� ����� ����� : \n";
        cin >> _lineSize;
        cout << "������� ������ �����: \n";
        cin >> _lineChar;
    }
    lineSize = _lineSize;
    lineChar = _lineChar;
}

template<typename T>
void printLine(int lineSize, T lineChar) {
    if (lineSize > 0) {
        for (int i = 0; i < lineSize; i++) {
            cout << " " << lineChar << " ";
        }
    }
    else {
        cout << "����� �� ����� ���� ������ 1 �������!" << endl;
    }
}
*/
