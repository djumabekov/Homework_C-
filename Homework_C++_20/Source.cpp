
/*1. Напишите функцию, которая определяет максимальный элемент массива и возвращает одновременно его значение и номер.
Внутри функции запрещено использовать команды cin и cout.
- Реализуйте перегрузку для целых и вещественных типов (long long, float).
- Реализуйте шаблон этой функции.
Рекомендации: Воспользуйтесь передачей параметров по ссылке.
Проиллюстрировать работу этих функций.*/
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

    //для массива INT
    FillArr(arr, size, 1, 10); //наполняем массив числами
    PrintArr(arr, size); // печатаем на экран
    MaxElement(arr, size, maxelement, index); // вычисляем макс элемент и его индекс
    cout << "Макс элемент массива INT: " <<  maxelement << ", индекс: " << index << endl; // печатаем результат
    cout << endl;

    //для массива Long
    FillArr(arrLL, size, 111111111111, 999999999999); //наполняем массив числами
    PrintArr(arrLL, size); // печатаем на экран
    MaxElement(arrLL, size, maxelementLL, index); // вычисляем макс элемент и его индекс
    cout << "Макс элемент массива Long: " << maxelementLL << ", индекс: " << index << endl; // печатаем результат
    cout << endl;

    //для массива Float
    FillArr(arrFl, size, 1, 10); //наполняем массив числами
    PrintArr(arrFl, size); // печатаем на экран
    MaxElement(arrFl, size, maxelementFl, index); // вычисляем макс элемент и его индекс
    cout << "Макс элемент массива Float: " << maxelementFl << ", индекс: " << index << endl; // печатаем результат

    cin.get(); cin.get();
}

//наполнение массива
template<typename T>
void FillArr(T*& arr, int size, T min, T max)
{
    T* newArr = new T[size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = rand() % (max - min + 1) + min;
    }
    delete[]arr; // удаление старого массива
    //обновление информации о  массиве
    arr = newArr;
}
//наполнение массива для float
void FillArr(float* & arr, int size, int min, int max) {
    int _min = min * 100, _max = max * 100;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (_max - _min + 1) + _min);
        arr[i] /= 100;
    }
}

// вычисление макс элемента и его индекс
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

//печать массива
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

/*2. **Напишите функцию, которая вычисляет корень квадратного уравнения (a*x^2 + b*x + c = 0).
Внутри функции запрещено использовать команды cin и cout.
Примечание: Функция в качестве аргументов должна принимать коэффициенты квадратного уравнения a,b,c и возвращать два корня уравнения.
Сама функция должна возвращать целое число - количество действительных корней уравнения.
Т.е., если уравнение не имеет корней, функция должна вернуть 0.
Если уравнение имеет один или два корня, функция должна вернуть 1 или 2 соответственно, а сами корни должны возвращаться через аргументы по ссылке.
***Реализуйте шаблон этой функции.
Рекомендации: Воспользуйтесь передачей параметров по ссылке.
Проиллюстрировать работу этой функции.*/

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

    cout << "Корень линейного уравнения для a=" << a << ", b=" << b << ", c=" << b << ": ";
    KvadratnoeUrovnenie(a, b, c, x1, x2, countKorny);
    cout << "Количество корней: " << countKorny << " -> ";
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


/*3. **Написать функцию которая выводит на экран горизонтальную линию заданным символом.
В функцию передается длина линии и символ для вывода.
Если пользователь не передает параметры в функцию, то функция должна вывести на экран линию длиной в 5 символами '*'.
Рекомендации: Воспользуйтесь параметрами по умолчанию.*/
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
    cout << "Длина линии = " << lineSize << ", символ = " << lineChar << endl;
    cout << "Хотите изменить? (да-1, нет=0): ";
    cin >> yesNo;
    if (yesNo) {
        cout << "Укажите длину линии : \n";
        cin >> _lineSize;
        cout << "Укажите символ линии: \n";
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
        cout << "Длина не может быть меньше 1 символа!" << endl;
    }
}
*/
