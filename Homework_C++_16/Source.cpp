/*1) *В двумерном массиве целых числе посчитать:
 a) сумму всех элементов массива;
 b) среднее арифметическое всех элементов массива;
 c) минимальный элемент - значение и координаты элемента в массиве - номер строки, столбеца;
 d) максимальный элемент - значение и координаты элемента в массиве - номер строки, столбеца.*/
 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int const Size = 10;
     int arr[Size][Size];
     int sum = 0;
     int mini = 0;
     int minj = 0;
     int maxi = 0;
     int maxj = 0;
     int min = 1;
     int max = 1;
     for (int i = 0; i < Size; i++) {
         for (int j = 0; j < Size; j++) {
             arr[i][j] = rand() % 20 + 1;
             cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
             sum += arr[i][j];
             if (min >= arr[i][j]) {
                 min = arr[i][j];
                 mini = i;
                 minj = j;
             }
             if (max <= arr[i][j]) {
                 max = arr[i][j];
                 maxi = i;
                 maxj = j;
             }
         }
     }
     cout << "min = " << arr[0][0] << "\n";
     cout << "сумма всех элементов массива -> " << sum << "\n";
     cout << "среднее арифметическое всех элементов массива -> " << (float(sum) / (Size * Size)) << "\n";
     cout << "минимальный элемент -> " << "[" << mini << "][" << minj << "] -> " << min << "\n";
     cout << "максимальный элемент -> " << "[" << maxi << "][" << maxj << "] -> " << max << "\n";

     cin.get(); cin.get();
 }
 */

 /*2) *Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу:
 пользователь вводит число (например, 3) первый элемент массива принимает значение этого числа, последующий элемент массива принимает значение этого числа + 1 (т.е. 4 для нашего примера), третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего примера).
 Созданный массив вывести на экран. */
 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int Size = 3;
     int num;
     cout << "Введите число: " << endl;
     cin >> num;
     int** arr = new int* [Size];
     for (int i = 0; i < Size; i++)
     {
         arr[i] = new int[Size];
         for (int j = 0; j < 1; j++)
         {
             arr[i][j] = num;
             num ++;
             cout << "arr" << "["<< i<< "]["<< j << "] -> " << arr[i][j] << "\n";
         }
     }

     cin.get(); cin.get();
 }
 */
 /*3) **В двумерном массиве найти и вывести на экран максимальные элементы из каждой строки.*/
 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int const Size = 10;
     int arr[Size][Size];
     int max[Size];
     int maxi = 0;
     int maxj = 0;
     for (int i = 0; i < Size; i++) {
         int num = 0;
         for (int j = 0; j < Size; j++) {
             arr[i][j] = rand() % 20 + 1;
             cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
                 if (num <= arr[i][j]) {
                     num = arr[i][j];
                     maxj = j;
                 }
         }
         maxi = i;
         max[i] = arr[maxi][maxj];
         cout << " максимальный элемент -> " << "[" << maxi << "][" << maxj << "] -> " << arr[maxi][maxj] << "\n";
     }
     cin.get(); cin.get();
 }
 */

 /*4) **Дана вещественная матрица А(N,M) - двумерный массив N x M дробных чисел.
 Составить программу замены всех отрицательных элементов матрицы на элемент, имеющий максимальное значение.*/
 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int const Size = 10;
     int arr[Size][Size];
     int max;
     int maxi = 0;
     int maxj = 0;
     for (int i = 0; i < Size; i++) {
         int num = 0;
         for (int j = 0; j < Size; j++) {
             arr[i][j] = rand() % 21 - 10;
             cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
             if (num <= arr[i][j]) {
                 num = arr[i][j];
                 maxj = j;
             }
         }
         maxi = i;
         max = arr[maxi][maxj];
         cout << " максимальный элемент -> " << "[" << maxi << "][" << maxj << "] -> " << arr[maxi][maxj] << "\n";
         for (int i = 0; i < Size; i++) {
             for (int j = 0; j < Size; j++) {
                 if (arr[i][j] < 0) {
                     arr[i][j] = max;
                 }
             }
         }
     }

     for (int i = 0; i < Size; i++) {
         for (int j = 0; j < Size; j++) {
             cout << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
         }
     }
     cin.get(); cin.get();
 }
 */
 /*5a) *Написать, программу, которая вычисляет прибыль фирмы за 5 лет. Пользователь вводит прибыль фирмы за каждый месяц.
 Посчитать общую прибыль и прибыль за каждый год.

 5b) **вывести график - сравнительная характеристика прибыли за каждый год:
 1 ++++++++++++++
 2 ++++++++++++++++
 3 ++++
 4 +++++++++++++++
 5 +++++++

 5c) ***вывести вертикальный график*/

 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int const row = 5;
     int const col = 12;
     int arr[row][col];
     int pribylAll = 0;
     int pribylYear[5];
     for (int i = 0; i < row; i++) {
         int count = 0;
         for (int j = 0; j < col; j++) {
             arr[i][j] = rand() % 1000 + 1;
           //  cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
             count += arr[i][j];
         }
         pribylYear[i] = count;
         pribylAll += count;
     }

     for (int i = 0; i < row; i++) {
         cout << "Прибыль за " << i + 1 << " год -> " << pribylYear[i] << "\n";
     }
         cout << "Прибыль за 5 лет -> " << pribylAll << "\n";

     cout << "Cравнительная характеристика прибыли за каждый год (горизонтальный): \n";
     for(int i = 0; i < row; i++){
         int len = (float(pribylYear[i]) / pribylAll) * 100;
         cout << i + 1 << " -> ";
         for (int j = 0; j < len; j++) {
             cout << "+";
         }
         cout << endl;
     }
     cout << endl;
     cout << "Cравнительная характеристика прибыли за каждый год (вертикальный): \n";
     for (int i = 0; i < row; i++) {
         int len = (float(pribylYear[i]) / pribylAll) * 100;
         SetPos(40, 1+i);
         cout << i + 1;
         for (int j = 0; j < len; j++) {
             SetPos(39-j, 1+i);
             cout << "+\n";
         }
         cout << endl;
     }


     cin.get(); cin.get();
 }
 */
 /*Дополнительные задания
 6) **Дана вещественная матрица А(N,M) - двумерный массив N x M дробных чисел.
 Составить программу нахождения:
 a) минимального элемента матрицы и определения его местоположения.
 b) максимального элемента матрицы и определения его местоположения. */
 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int const Size = 10;
     int arr[Size][Size];
     int mini = 0;
     int minj = 0;
     int maxi = 0;
     int maxj = 0;
     int min = 1;
     int max = 1;
     for (int i = 0; i < Size; i++) {
         for (int j = 0; j < Size; j++) {
             arr[i][j] = rand() % 20 + 1;
             cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
             if (min >= arr[i][j]) {
                 min = arr[i][j];
                 mini = i;
                 minj = j;
             }
             if (max <= arr[i][j]) {
                 max = arr[i][j];
                 maxi = i;
                 maxj = j;
             }
         }
     }
     cout << "минимальный элемент -> " << "[" << mini << "][" << minj << "] -> " << min << "\n";
     cout << "максимальный элемент -> " << "[" << maxi << "][" << maxj << "] -> " << max << "\n";

     cin.get(); cin.get();
 }
 */
 /*7) **Пользователь вводит с клавиатуры числа N, M и матрицу размера N x M.
Вычислите и выведите на экран:
a) Сумму всех положительных чисел в массиве;
b) Количество четных чисел;
c) Строку с минимальной суммой элементов в ней;
d) Строку с максимальной суммой элементов в ней;
e) Строку с максимальным количеством в ней нечетных чисел.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const Size = 10;
    int arr[Size][Size];
    int sumPolChisel = 0;
    int countChetClisel = 0;
    int mini = 0;
    int maxi = 0;

    int maxSum = 0;
    int minSum = 0;
    for (int i = 0; i < Size; i++) {
        int count = 0;
        for (int j = 0; j < Size; j++) {
            arr[i][j] = rand() % 20 - 10;
            cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
            count += arr[i][j];
            if (arr[i][j] >= 0) {
                sumPolChisel += arr[i][j]; //a) Сумму всех положительных чисел в массиве;
            }
            if (arr[i][j] % 2 == 0) {
                countChetClisel++; //b) Количество четных чисел;
            }

            if (maxSum <= count) {
                maxSum = count; //c) Строку с максимальной суммой элементов в ней;
                //cout << "\ncount = " << count << "\n";
                maxi = i;
            }

            if (minSum >= count) {
                minSum = count; //d) Строку с минимальной суммой элементов в ней;
                //cout << "\ncount = " << count << "\n";
                mini = i;
            }
        }
    }
        cout << "Сумма всех положительных чисел в массиве -> " << sumPolChisel << "\n";
        cout << "Количество четных чисел -> " << countChetClisel << "\n";
        cout << "Строка с минимальной суммой элементов в ней -> " << "[" << mini << "] -> " << minSum << "\n";
        cout << "Строка с максимальной суммой элементов в ней -> " << "[" << maxi << "] -> " << maxSum << "\n";

    cin.get(); cin.get();
}
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const Size = 3;
    int arr[Size][Size];
    int max[Size];
    int maxi = 0;
    int maxj = 0;
    int sumElement = 0;
    int num = 0;
    int countChetElement = 0;
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            arr[i][j] = rand() % 10 + 1;
            cout << setw(2) << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
        }
        if (num <= arr[i][i]) {
            num = arr[i][i];
            maxi = i;
            maxj = i;
        }
        sumElement += arr[i][i]; // Сумма элементов на главной диагонали
        if (arr[i][Size - 1 - i] % 2 == 0) {
            countChetElement++;
        }
    }
    cout << "Сумма элементов на главной диагонали ->" << sumElement << "\n";
    cout << "Максимальный элемент на главной диагонали -> " << "[" << maxi << "][" << maxj << "] -> " << arr[maxi][maxj] << "\n";
    cout << "Количество четных элементов на побочной диагонали -> " << countChetElement << "\n";

    cin.get(); cin.get();
}
*/
/*9) **Пользователь вводит с клавиатуры числа N и М.
Заполнить матрицу размера NxM случайными числами, после чего:
a) Вычислить сумму элементов с четными индексами (a[i][j], где i и j – четные).
b) Поменять местами максимальный и минимальный элементы матрицы.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int row;
    int col;
    cout << "Введите кол.строк массива: " << endl;
    cin >> row;
    cout << "Введите кол.столбцов массива: " << endl;
    cin >> col;
    int** arr = new int* [row];
    int sum = 0;

    //создаем массив, вычисляем сумму элементов с четными индексами
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row];
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10 + 1;
            cout << "arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
            if (i % 2 == 0 && j % 2 == 0) {
                sum += arr[i][j];
                //cout << "\nsum: [" << i << "][" << j << "] -> " << arr[i][j] << " \n";

            }
        }
    }

    // Вычисляем максимальный и минимальный элементы матрицы

    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (min > arr[i][j]) {
                min = arr[i][j];

            }
            if (max < arr[i][j]) {
                max = arr[i][j];

            }
        }
    }
    cout << "\nСумма элементов с четными индексами: " << sum << " \n";

    cout << "\nПоменяны местами максимальный и минимальный элементы матрицы (" << max << " на " << min << ")\n";

    // Меняем максимальный и минимальный элементы матрицы
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == min) {
                arr[i][j] = max;
               // cout << "\narr[i][j] = " << arr[i][j] << " min = " << min << " max = " << max << "\n";
            }
            else if (arr[i][j] == max) {
                arr[i][j] = min;
                //cout << "\narr[i][j] = " << arr[i][j] << " max = " << max << " min = " << min << "\n";

            }
        }
    }
    // Выводим измененный массив
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            cout << "arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
        }
    }
    cin.get(); cin.get();
}
*/

/*10) ***Дана квадратная матрица А(N,N).
Составить программу вычисления суммы элементов, расположенных ниже главной диагонали.*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size;
    cout << "Введите размер массива: " << endl;
    cin >> Size;

    int** arr = new int* [Size];
    int sum = 0;

    //создаем массив, вычисляем сумму элементов ниже главной диагонали
    for (int i = 0; i < Size; i++)
    {
        arr[i] = new int[Size];
        for (int j = 0; j < Size; j++)
        {
            arr[i][j] = rand() % 10 + 1;
            //cout << "arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
            if (i > j) {
                sum += arr[i][j];
                cout << "sum: arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";

            }
        }
    }
    cout << "Сумма элементов, расположенных ниже главной диагонали -> " << sum << "\n";
    cin.get(); cin.get();
}
