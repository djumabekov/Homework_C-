
/*1. *�������� �������, ������� ��������� ��� ����� �����, � ���������� �� ������������.*/
/*
int Sum(int a, int b) {
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 10;
    int b = 20;
    cout << a << " + " << b << " = " << Sum(a, b);

    cin.get(); cin.get();
}
*/
/*2. *�������� �������, ����������� ������� ����� �� ��������� �������.*/
/*
int Radius(int r) {
    double const PI = 3.14;
    //S = Pi * r2
    return PI * (r * r);
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int r = 10;
    cout << "������� ����� �� ������� " << r << " = " << Radius(r);

    cin.get(); cin.get();
}
*/
/*3. **�������� �������, ������� ��������� ����� � ���������� ������, ���� ����� ������ � ����, ���� ��������.*/
/*
int Bool(int num) {
    bool res = (num % 2 == 0) ? true : false;
    return res;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int num = 11;
    cout << "����� " << num << " = " << Bool(num);

    cin.get(); cin.get();
}
*/
/*4. **�������� �������, ������� ��������� ���������� ������ ����� ����� � ���������� ������������ ���� �����.*/
/*
int Sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[] = {1,2,3,4,5};
    cout << "������������ ���� ����� ���c���" << " = " << Sum(arr, size(arr));

    cin.get(); cin.get();
}
*/
/*5. **�������� �������, ������� ��������� ���������� ������ ����� ����� � ���������� �������� ������������� ����� � ���� �������.*/
/*
int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        };
    }
    return max;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[] = { 100,20,3,4,5 };
    cout << "������������ ����� � ���� �������" << " = " << Max(arr, size(arr));

    cin.get(); cin.get();
}
*/

/*6. ***�������� �������, ������� �� �������� ������������� a,b,c ����������� ��������� a*x^2 + b*x + c = 0 ��������� ������������.*/
/*
float Descr(float a, float b, float c) {
    float d;
    d = (b * b) - (4 * a * c);
    return d;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    float a, b, c, x1, x2;
    cout << "������� ���������� �: \n";
    cin >> a;
    cout << "������� ���������� b: \n";
    cin >> b;
    cout << "������� ���������� c: \n";
    cin >> c;

    cout << "====================\n������������ = " << Descr(a, b, c) << endl;
    cout << "�����: " << endl;

    if (Descr(a, b, c) == 0) {
        x1 = (-b + sqrt(Descr(a, b, c))) / (2 * a);
        cout << "x1 =" << x1 << endl;
    }
    if (Descr(a,b,c) > 0) {
        x1 = (-b + sqrt(Descr(a, b, c))) / (2 * a);
        x2 = (-b - sqrt(Descr(a, b, c))) / (2 * a);
        cout << "x1 =" << x1 << endl;
        cout << "x2 =" << x2 << endl;
    }
    if (Descr(a, b, c) < 0) {
        cout << "0" << endl;
    }

    cin.get(); cin.get();
}
*/
