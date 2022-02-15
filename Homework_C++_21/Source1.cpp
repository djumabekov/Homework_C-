
/*1) *Написать программу, которая осуществляет поиск введенного пользователем числа, используя ДВА указателя на массив целых чисел.
Первый указатель двигается с начала массива, второй – с конца.
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
    cout << "Введите число от 1 до 10: ";
    cin >> arg;
    func_1(arr, SIZE);
    int res = func_2(arr, SIZE, arg);
    if (res != -1) {
        cout << "\nЗагаданное число " << res <<" найдено в массиве";
    }
    else {
        cout << "\nЧисло не найдено";
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
/*2) **Написать функцию, которая принимает указатель на массив и количество элементов.
Пользуясь ДВУМЯ указателями на массив целых чисел, функция должна поменять порядок элементов передаваемого ей массива на обратный.
Первый указатель двигается с начала массива, второй – с конца.*/
/*
#define SIZE 10
void func_1(int* arr, int size);
void func_2(int* arr, int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int* arr = new int[SIZE];
    //заполняем массив
    func_1(arr, SIZE);
    cout << endl;

    //переворачиваем массив
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
    parr1 = &arr[0];// возвращаем указатель на начало массива
    for (int i = 0; i < size; i++) {    //Выводим на экран обновленный массив
        cout << *(parr1 + i) << " ";
    }
}
*/

/*3) **Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры), заполненные случайными числами.
Необходимо создать третий массив минимально возможного размера, в котором нужно собрать общие (одинаковые, равные) элементы двух массивов.

4)*** Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры), заполненные случайными числами.
Необходимо создать третий массив минимально возможного размера, в котором нужно собрать общие элементы двух массивов без повторений.
*/
/*
void func_1(int* arr, int size);
void func_2(int* arr1, int* arr2, int N, int M);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int M, N;
    cout << "Введите размер массива 1: ";
    cin >> N;
    cout << "Введите размер массива 2: ";
    cin >> M;


    int* arr1 = new int[N];
    int* arr2 = new int[M];
    //заполняем массив
    func_1(arr1, N);
    cout << endl;
    func_1(arr2, M);
    cout << endl;

    //ищем совпадения в двух массивах и добавляем их в третий
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
    //вычисляем размер третьего массива на основе совпадающих элементов
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
        cout << "Совпадений нет" << endl;
    }
    else {// добавляем совпадающие элементы в третий массив без дублирования
        cout << "Найдено " << size3 << " cовпадений" << endl;
        int* arr3 = new int[size3]; // создаем третий массив с size3 размером
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
            cout << count << " "; // 0 - совпадение
        }

    cout << "\nСовпадающие элементы: ";
    for (int i = 0; i < size3; i++) {    //Выводим на экран третий массив
        cout << *(parr3 + i) << " ";
    }
   }
}
*/
/*5) ***Дан массив: А[M] (M вводится с клавиатуры).
Необходимо удалить из массива четные или нечетные значения.
Пользователь вводит данные в массив, а также с помощью меню решает, что нужно удалить.  */
/*
void func_1(int* arr, int size);
void func_2(int* &arr, int &size, int index);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int M, index;
    cout << "Укажите размер массива: ";
    cin >> M;
    int* arr = new int[M];
    //заполняем массив случайными числами в диапазоне от 0 до 1
    func_1(arr, M);
    cout << "\nВведите парамент удаления из массива четные или нечетные значения (1-нечетные, 2-четные): ";
    cin >> index;

    func_2(arr, M, index);
    cout << endl;
    cout << "\nМассив после удаления: ";
    for (int i = 0; i < M; i++) {    //Выводим на экран третий массив
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
    delete[]arr; // удаление старого массива
  // обновление информации о рабочем массиве
    arr = tempArr;
    size = count;
}
*/
