
/*1. *Напишите функцию, которая принимает два целых числа, и возвращает их произведение.*/
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
/*2. *Написать функцию, вычисляющую площадь круга по заданному радиусу.*/
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
    cout << "Площадь круга по радиусу " << r << " = " << Radius(r);

    cin.get(); cin.get();
}
*/
/*3. **Напишите функцию, которая принимает число и возвращает истину, если число четное и ложь, если нечетное.*/
/*
int Bool(int num) {
    bool res = (num % 2 == 0) ? true : false;
    return res;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int num = 11;
    cout << "Число " << num << " = " << Bool(num);

    cin.get(); cin.get();
}
*/
/*4. **Напишите функцию, которая принимает одномерный массив целых чисел и возвращает произведение всех чисел.*/
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
    cout << "Произведение всех чисел масcива" << " = " << Sum(arr, size(arr));

    cin.get(); cin.get();
}
*/
/*5. **Написать функцию, которая принимает одномерный массив целых чисел и возвращает значения максимального числа в этом массиве.*/
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
    cout << "Максимальное число в этом массиве" << " = " << Max(arr, size(arr));

    cin.get(); cin.get();
}
*/

/*6. ***Написать функцию, которая по заданным коэффициентам a,b,c квадратного уравнения a*x^2 + b*x + c = 0 вычисляет дискриминант.*/
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
    cout << "Введите коофициент а: \n";
    cin >> a;
    cout << "Введите коофициент b: \n";
    cin >> b;
    cout << "Введите коофициент c: \n";
    cin >> c;

    cout << "====================\nДескриминант = " << Descr(a, b, c) << endl;
    cout << "Корни: " << endl;

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
