/*
18. �������� �������, ������������ ������������ �������� �� ����, ���� � ������� ��������.
*����������� ������������� �������� ������� (��� ����� int, long long, float, double);
**����������� ������� �������.*/
/*
template <typename MyType>
MyType Max(MyType a, MyType b, MyType c = 0, MyType d = 0);

int main()
{
    setlocale(LC_ALL, "Rus");

    int i1 = 1, i2 = 2, i3 = 3, i4 = 4;
    long long l1 = 666666666666, l2 = 777777777777, l3 = 888888888888, l4 = 999999999999;
    float f1 = 1.1, f2 = 2.2, f3 = 3.3, f4 = 4.4;
    double d1 = 5.111111, d2 = 6.222222, d3 = 7.333333, d4 = 8.444444;

    cout << "������������ ����� INT �� 2-�: " << Max(i1, i2) << endl;
    cout << "������������ ����� INT �� 3-�: " << Max(i1, i2, i3) << endl;
    cout << "������������ ����� INT �� 4-�: " << Max(i1, i2, i3, i4) << endl;
    cout << endl;
    cout << "������������ ����� LONG �� 2-�: " << Max(l1, l2) << endl;
    cout << "������������ ����� LONG �� 3-�: " << Max(l1, l2, l3) << endl;
    cout << "������������ ����� LONG �� 4-�: " << Max(l1, l2, l3, l4) << endl;
    cout << endl;
    cout << "������������ ����� FLOAT �� 2-�: " << Max(f1, f2) << endl;
    cout << "������������ ����� FLOAT �� 3-�: " << Max(f1, f2, f3) << endl;
    cout << "������������ ����� FLOAT �� 4-�: " << Max(f1, f2, f3, f4) << endl;
    cout << endl;
    cout << "������������ ����� DOUBLE �� 2-�: " << Max(d1, d2) << endl;
    cout << "������������ ����� DOUBLE �� 3-�: " << Max(d1, d2, d3) << endl;
    cout << "������������ ����� DOUBLE �� 4-�: " << Max(d1, d2, d3, d4) << endl;

    cin.get(); cin.get();
}
//������ �������
template <typename MyType>
MyType Max(MyType a, MyType b, MyType c, MyType d)
{
    if (a > b && a > c && a > d) {
        return a;
    }
    else if (b > a && b > c && b > d) {
        return b;
    }
    else if (c > a && c > b && c > d) {
        return c;
    }
    else return d;
}
*/

/*19. �������� �������, ������� ���������� ���������� ��������� ������������� �������, ������� ������ ������������� �����, ��� ����� ���� ���������� � �������.
*����������� ������������� �������� ������� (��� ����� int, long long, float, double);
���
**����������� ������� �������.*/
/*
template <typename MyType>
int Counter(MyType arr[], MyType num, int size);

int main()
{
    setlocale(LC_ALL, "Rus");

    int size = 4;//������ �������

    int numInt = 3; //������������ �����
    long long numLong = 787878787878;
    float numFloat = 2.1;
    double numDouble = 7.111111;

    int arrInt[] = {1,2,3,4};
    long long arrLong[] = { 666666666666, 777777777777, 888888888888, 999999999999 };
    float arrFloat[] = { 1.1, 2.2, 3.3, 4.4 };
    double arrDouble[] = { 5.111111, 6.222222, 7.333333, 8.444444 };

    cout << "���������� ����� � ������� INT ������ " << numInt << ": " << Counter(arrInt, numInt, size) << endl;
    cout << "���������� ����� � ������� LONG ������ " << numLong << ": " << Counter(arrLong, numLong, size) << endl;
    cout << "���������� ����� � ������� FLOAT ������ " << numFloat << ": " << Counter(arrFloat, numFloat, size) << endl;
    cout << "���������� ����� � ������� DOUBLE ������ " << numDouble << ": " << Counter(arrDouble, numDouble, size) << endl;
    cin.get(); cin.get();
}

template <typename MyType>
int Counter(MyType arr[], MyType num, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > num) {
            count++;
        }
    }
    return count;
}
*/

/*24. **�������� �������, ������� ������ ������� ��������� ������������� ������� �� ��������.
������ ������� ��������� ������������ ��������������� ������.
*����������� ������������� �������� ������� (��� ����� int, long long, float, double);
���
**����������� ������� �������.*/
/*
template<typename T>
void FillArr(T* arr, int size, T min, T max); //��� ���������

template<typename T>
void FillArr(float* arr, int size, T min, T max); //��� float

template<typename T>
void FillArr(double* arr, int size, T min, T max); //��� double

template<typename T>
void PrintArr(T* arr, int size);

template<typename T>
void ReverseArr(T*& arr, int size);


int main()
{
    setlocale(LC_ALL, "Rus");
    int size = 7;

    int * arrInt = new int[size];
    long long * arrLong = new long long[size];
    float * arrFloat = new float [size];
    double * arrDouble = new double[size];

    cout << "�������������� ������ Int: " << endl;
    FillArr(arrInt, size, 1, 10);
    cout << "�������������� ������ Int: " << endl;
    ReverseArr(arrInt, size);
    cout << endl;
    cout << "�������������� ������ Long: " << endl;
    FillArr(arrLong, size, 111111111111, 999999999999);
    cout << "�������������� ������ Long: " << endl;
    ReverseArr(arrLong, size);
    cout << endl;
    cout << "�������������� ������ Float: " << endl;
    FillArr(arrFloat, size, 1, 10);
    cout << "�������������� ������ Float: " << endl;
    ReverseArr(arrFloat, size);
    cout << endl;
    cout << "�������������� ������ Double: " << endl;
    FillArr(arrDouble, size, 1, 10);
    cout << "�������������� ������ Double: " << endl;
    ReverseArr(arrDouble, size);

    cin.get(); cin.get();
}

//���������� �������
template<typename T>
void FillArr(T* arr, int size, T min, T max)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (max - min + 1) + min;
    }
    PrintArr(arr, size);
}

//���������� ������� ��� double
template<typename T>
void FillArr(double* arr, int size, T min, T max)
{
    int _min = min * 1000, _max = max * 1000;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (max - min + 1) + min);
        arr[i] /= 1000;
    }
    PrintArr(arr, size);
}

//���������� ������� ��� float
template<typename T>
void FillArr(float* arr, int size, T min, T max)
{
    int _min = min * 100, _max = max * 100;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (max - min + 1) + min);
        arr[i] /= 100;
    }
    PrintArr(arr, size);
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

//�������������� ������
template<typename T>
void ReverseArr(T* &arr, int size)
{
    for (int i = 0; i < size/2; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
    }
    PrintArr(arr, size);
}
*/

/*33. *�������� ������ �������, ������� ��������� ������ ��������� ��������� (a*x + b = 0).*/
/*
template<typename T>
void LineinoeUrovnenie(T a, T b, T x);

int main()
{
    setlocale(LC_ALL, "Rus");
    int aInt = 10;
    int bInt = 3;
    int xInt = 2;

    long long aLong = 101010101010;
    long long bLong = 303030303030;
    long long xLong = 203030303030;

    float aFloat = 10.10;
    float bFloat = 3.30;
    float xFloat = 2.20;

    double aDouble = 10.1010;
    double bDouble = 3.3030;
    double xDouble = 2.2020;

    cout << "������ ��������� ��������� INT: " << aInt << " * " << xInt << " + " << bInt << " = 0: ";
    LineinoeUrovnenie(aInt, bInt, xInt);
    cout << endl;
    cout << "������ ��������� ��������� Long: " << aLong << " * " << xLong << " + " << bLong << " = 0: ";
    LineinoeUrovnenie(aLong, bLong, xLong);
    cout << endl;
    cout << "������ ��������� ��������� Float: " << aFloat << " * " << xFloat << " + " << bFloat << " = 0: ";
    LineinoeUrovnenie(aFloat, bFloat, xFloat);
    cout << endl;
    cout << "������ ��������� ��������� Double: " << aDouble << " * " << xDouble << " + " << bDouble << " = 0: ";
    LineinoeUrovnenie(aDouble, bDouble, xDouble);

    cin.get(); cin.get();
}


template<typename T>
void LineinoeUrovnenie(T a, T b, T x)
{
    if (a == 0)
    {
        cout << " ��� ������ " << endl;

    }
    else {
        cout << (a - b) / x << endl;
    }
}
*/


/*34. **�������� ������ �������, ������� ��������� ������ ����������� ��������� (a*x^2 + b*x + c = 0).*/
/*
template<typename T>
void KvadratnoeUrovnenie(T a, T b, T c);

int main()
{
    setlocale(LC_ALL, "Rus");
    int aInt = 10;
    int bInt = 3;
    int cInt = 5;

    long long aLong = 101010101010;
    long long bLong = 303030303030;
    long long cLong = 404040404040;

    float aFloat = 10.10;
    float bFloat = 3.30;
    float cFloat = 4.30;

    double aDouble = 10.1010;
    double bDouble = 3.3030;
    double cDouble = 4.3030;


    cout << "������ ��������� ��������� INT ��� a=" << aInt << ", b=" << bInt << ", c=" << bInt << ": " ;
    KvadratnoeUrovnenie(aInt, bInt, cInt);
    cout << endl;

    cout << "������ ��������� ��������� Long ��� a=" << aLong << ", b=" << bLong << ", c=" << cLong << ": ";
    KvadratnoeUrovnenie(aLong, bLong, cLong);
    cout << endl;

    cout << "������ ��������� ��������� Float ��� a=" << aFloat << ", b=" << bFloat << ", c=" << cFloat << ": ";
    KvadratnoeUrovnenie(aFloat, bFloat, cFloat);
    cout << endl;

    cout << "������ ��������� ��������� Double ��� a=" << aDouble << ", b=" << bDouble << ", c=" << cDouble << ": ";
    KvadratnoeUrovnenie(aDouble, bDouble, cDouble);
    cout << endl;

    cin.get(); cin.get();
}


template<typename T>
void KvadratnoeUrovnenie(T a, T b, T c)
{
    T d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << " ��� ������ " << endl;

    }
    else {
        cout << "x1 = " << (-b - sqrtf(d)) / (2 * a) << endl;
        cout << "x2 = " << (-b + sqrtf(d)) / (2 * a) << endl;
    }
}
*/
