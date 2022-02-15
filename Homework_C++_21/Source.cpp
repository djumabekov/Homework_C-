/*1) *Используя указатели и оператор разыменования, определить знак числа (положительное или отрицательное), введённого с клавиатуры.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    int * pa;
    pa = &a;
    cout << "Введите число: ";
    cin >> * pa;

    *pa < 0 ? cout << "Знак числа " << *pa << " отрицательное" : cout << "Знак числа " << *pa << " положительное";

    cin.get(); cin.get();
}
*/

/*2) **Написать примитивный калькулятор, пользуясь только указателями.
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

    cout << "Введите два целых числа и знак оператора через пробелы (наприм., 5 + 5) и нажмите enter: ";
    cin >> *pa >> *poper  >> *pb;

    switch (*poper) {
    case '+': cout << *pa << " + " << *pb << " = " << *pa + *pb << endl; break;
    case '-': cout << *pa << " - " << *pb << " = " << *pa - *pb << endl; break;
    case '/': cout << *pa << " / " << *pb << " = " << float(*pa) / *pb << endl; break;
    case '*': cout << *pa << " * " << *pb << " = " << *pa * *pb << endl; break;
    default: cout << "Введены некорректные значения" << endl; break;
    }


    cin.get(); cin.get();
}
*/

/*3) *Используя указатель на массив целых чисел, посчитать сумму элементов массива.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/
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
    cout << "\n Сумма чисел: " << res;


    cin.get(); cin.get();
}
*/

/*4) **Написать программу, которая содержит функцию, принимающую в качестве аргумента, указатель на массив и размер массива, и заменяет все кратные 4 элементы на 999.*/
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

    //заполняем массив
    func_1(parr, SIZE);
    cout << endl;

    //меняем массив
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

/*5) **Написать программу, которая содержит функцию, принимающую в качестве аргумента, указатель на массив и размер массива, и заменяет отрицательные элементы на 0. */
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

    //заполняем массив
    func_1(parr, SIZE);
    cout << endl;

    //меняем массив
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


/*6) **Создать массив из N целых чисел, N вводит пользователь.
Заполнить массив случайным образом в диапазоне от 1 до 12.
Каждое число это оценка по 12 бальной системе.
Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок.
Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12. */
/*
void func_1(int* parr, int size);
void func_2(int* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int size;
    float count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    cout << "Введите количество оценок: ";
    cin >> size;
    int * arr = new int[size];
    int* parr = &arr[0];

    //заполняем массив
    func_1(parr, size);
    cout << endl;

    //считаем количество 2,3,4,5
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
    cout << "Количество двоек: " << fixed << setprecision(2) << (count2 / 12) * 100 << "%\n";
    cout << "Количество троек: " << (count3 / 12) * 100 << "%\n";
    cout << "Количество четверок: " << (count4 / 12) * 100 << "%\n";
    cout << "Количество пятерок: " << (count5 / 12) * 100 << "%\n";

}
*/

/*7) **Используя указатели, перенести в хвост одномерного массива первый отрицательный элемент.*/
/*
#define SIZE 10
void func_1(int* parr, int size);
void func_2(int* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    //заполняем массив
    func_1(arr, SIZE);
    cout << endl;

    //вычисляем первый минусовой элемент для вставки в конец массива
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
        if (*(parr+i) < 0) { // находим минусовой элемент
            index = i;// запоминаем индекс нашего минусового элемента
            temp = *(parr+i); // запоминаем сам минусовой элемент
            break;
        }
    }
    //cout << "temp = "  << temp << endl;
   //cout << "index = "  << index << endl;

    // сдвигаем массив на шаг назад после элемента index
    for (int i = index; i < size; i++) {
            cout << "i = " << i << endl;
            *(parr+i) = *(parr + i + 1);
    }
    *(parr+size-1) = temp; // вставляем наш минусовой элемент в конец массива

    for (int i = 0; i < size; i++) {    //Выводим на экран обновленный массив
        cout << *(parr+i) << " ";
    }

    // 2) удаление массива указателей
    delete[]parr; // удаление массива указателей
}
*/


/*8) **Запросить у пользователя размерность для одномерного массива вещественных чисел.
Динамически создать такой массив и заполнить его случайными числами в диапазоне от 0 до 1 (с 2-мя или 3-мя знаками после запятой). */
/*
void func_1(float* parr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int size;
    cout << "Укажите размер массива: ";
    cin >> size;
    float* arr = new float[size];
    //заполняем массив случайными числами в диапазоне от 0 до 1
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
/*9) ***Используя указатели, подсчитать в одномерном массиве максимальное количество подряд идущих нулей. */
/*
#define SIZE 20
void func_1(int* parr, int size);
int func_2(int* arr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    //заполняем массив
    func_1(arr, SIZE);
    cout << endl;
    cout << "Максимальное количество подряд идущих нулей = " << func_2(arr, SIZE) << endl;

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

