
/*47. *Написать программу, которая заполняет массив 5х5 случайными числами в диапазоне от a до b.
Значения a и b вводит пользователь. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    int a;
    int b;
    cout << "Введите мин. число массива: " << endl;
    cin >> a;
    cout << "Введите макс. число диапазона: " << endl;
    cin >> b;
    int arr [5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % ((b - a) + 1) + a;
            cout << "arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
        }
    }
    cin.get(); cin.get();
}
*/
/*31. *Напишите программу, в которой объявляется три массива одинакового размера.
Первые два массива заполняются случайными числами в диапазоне от 0 до 20,
третий массив заполняется как поэлементная сумма элементов первых двух массивов.
Содержимое всех трех массивов выводиться на консоль. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size = 5;

    int** arr1 = new int* [Size];
    int** arr2 = new int* [Size];
    int** arr3 = new int* [Size];
    for (int i = 0; i < Size; i++)
    {
        arr1[i] = new int[Size];
        arr2[i] = new int[Size];
        arr3[i] = new int[Size];
        for (int j = 0; j < Size; j++)
        {
            arr1[i][j] = rand() % 10 + 1;
            arr2[i][j] = rand() % 10 + 1;

            arr3[i][j] = arr1[i][j] + arr2[i][j];

            cout << "arr1" << "[" << i << "][" << j << "] (" << arr1[i][j] << ") + ";
            cout << "arr2" << "[" << i << "][" << j << "] (" << arr2[i][j] << ") => ";
            cout << "arr3" << "[" << i << "][" << j << "] (" << arr3[i][j] << ")\n";
        }
    }
    cin.get(); cin.get();
}
*/

/*37. **Написать программу, которая опрашивает прибыль фирмы за 3 года (двухмерный массив 3х12) и за каждый месяц.
Необходимо вычислить год, у которого присутствует месяц с минимальной прибылью.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const SizeYear = 3;
    int const SizeMonth = 12;
    int minPribyl = 0;
    int mini = 0;
    int minj = 0;
    int arr [SizeYear][SizeMonth];
    for (int i = 0; i < SizeYear; i++)
    {
        for (int j = 0; j < SizeMonth; j++)
        {
            arr[i][j] = rand() % 1000 + 100;
            if (i == 0) {
                minPribyl = arr[0][0];
            }
            cout << "Год: " << i+1 << ", Мес: " << j+1 << " -> " << arr[i][j] << "\n";
            if (minPribyl > arr[i][j]) {
                minPribyl = arr[i][j];
                mini = i;
                minj = j;
            }
        }
        if (i == 2) {
            cout << "\nМин. прибыль: Год: " << mini+1 << ", Мес: " << minj+1 << " -> " << arr[mini][minj] << "\n";
        }
    }


    cin.get(); cin.get();
}
*/

/*39. **Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
Выполните сортировку элементов в каждой строке массива.
Полученный результат покажите на экран. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const Size1 = 3;
    int const Size2 = 12;

    int arr[Size1][Size2];
    for (int i = 0; i < Size1; i++)
    {
        for (int j = 0; j < Size2; j++)
        {
            arr[i][j] = rand() % 100 + 1;

            if (j > 0 && arr[i][j-1] > arr[i][j]) {
                swap(arr[i][j-1], arr[i][j]);
            }
            cout << "arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
        }
    }
    cin.get(); cin.get();
}
*/

/*Дополнительные задания
*
33. **Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.
Первый массив заполняется случайными числами, в диапазоне от 0 до 50.
Второй массив заполняется по следующему принципу:
первый элемент второго массива равен сумме первого и второго элемента первого массива,
второй элемент второго массива равен сумму третьего и четвертого элемента первого массива и т.д.
Содержимое всех массивов выводиться на консоль.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int arr1 [5][10];
    int arr2 [5][5];

    cout << "Массив 1: \n";
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            arr1[i][j] = rand() % 50 + 0;
            cout << "arr1" << "[" << i << "][" << j << "] -> " << arr1[i][j] << "\n";
            if (j > 0) {
                arr2[i][j/2] = arr1[i][j-1] + arr1[i][j];
            }
        }
    }
    cout << "\nМассив 2: \n";

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << "arr2" << "[" << i << "][" << j << "] -> " << arr2[i][j] << "\n";
        }
    }
    cin.get(); cin.get();
}
*/

/*38. ***Создайте двухмерный массив. Заполните его случайными числами и покажите
на экран. Пользователь выбирает количество сдвигов и положение (влево, вправо,
вверх, вниз). Выполнить сдвиг массива и показать на экран полученный результат.
Сдвиг циклический.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(0));
    const int num = 7; //1 2 0 4 6 7 9
    int sdvig;
    int polozhenie; //влево-вправо
    int arr1[num];
    int arr2[num];
    for (int i = 0; i < num; i++) {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
    }
    cout << "Случайные числа: " << endl;
    for (int i = 0; i < num; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < num; i++) {
        cout << arr2[i] << " ";
    }
    cout << "\nВыберите количество сдвигов: ";
    cin >> sdvig;

    cout << "\nВыберите положение (1-влево, 2-вправо, 3-вниз, 4-вверх): ";
    cin >> polozhenie;
    if (polozhenie == 1) {
        for (int i = 0; i < num - sdvig; i++) {
            cout << arr1[i + sdvig] << " ";
        }
        for (int i = 0; i < sdvig; i++) {

            cout << arr1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < num - sdvig; i++) {
            cout << arr2[i + sdvig] << " ";
        }
        for (int i = 0; i < sdvig; i++) {
            cout << arr2[i] << " ";
        }
    }
    else if(polozhenie == 2){
        for (int i = 0; i < sdvig; i++) {
            cout << arr1[i + num - sdvig] << " ";
        }
        for (int i = 0; i < num - sdvig; i++) {
            cout << arr1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < sdvig; i++) {
            cout << arr2[i + num - sdvig] << " ";
        }
        for (int i = 0; i < num - sdvig; i++) {
            cout << arr2[i] << " ";
        }

    }
    else if (polozhenie == 3 || polozhenie == 4) {
        for (int i = 0; i < sdvig; i++) {
            for(int j = 0; j < num; j++){
                swap(arr1[j], arr2[j]);}

        }
        for (int i = 0; i < num; i++) {
            cout << arr1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < num; i++) {
            cout << arr2[i] << " ";
        }
    }

    cin.get(); cin.get();
}
*/

/*40. ***Создайте двухмерный массив. Заполните его случайными числами и покажите
на экран. Выполните сортировку массива. Полученный результат покажите на
экран.
Пример: пусть у нас есть массив
2 8 4
0 1 9
7 8 3
4 5 6
После сортировки получим:
0 1 2
3 4 4
5 6 7
8 8 9*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const Size1 = 4;
    int const Size2 = 3;

    int arr[Size1][Size2];
    for (int i = 0; i < Size1; i++)
    {
        for (int j = 0; j < Size2; j++)
        {
            arr[i][j] = rand() % 10 + 0;
            cout << setw(2) << arr[i][j] << " ";

        }
        cout << endl;
    }
    //сортировка
    for (int i = 0; i < Size1 * Size2 - 1; i++)
    {
        for (int i = 0, j = 0; j < Size1 * Size2 - 1; j++)
        {
            if (arr[i][j] > arr[i][j + 1]) {
                swap(arr[i][j+1], arr[i][j]);
            }
        }
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < Size1; i++)
    {
        for (int j = 0; j < Size2; j++)
        {
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }
    cin.get(); cin.get();
}
*/

/*41. ***Создайте двухмерный массив. Заполните его случайными числами и покажите
на экран. Для каждой строки посчитайте сумму элементов и покажите на экран.
Переставьте в массиве строки так, чтобы суммы строк были отсортированы по
возрастанию.*/
/*
int main()
{
setlocale(LC_ALL, "Rus");
srand(time(0));
int const Size1 = 4;
int const Size2 = 3;
int tmpArr[Size1];
int arr[Size1][Size2];
for (int i = 0; i < Size1; i++)
{
    int sum = 0;
    for (int j = 0; j < Size2; j++)
    {
        arr[i][j] = rand() % 10 + 0;
        cout << setw(2) << arr[i][j];
        sum += arr[i][j];
    }
    tmpArr[i] = sum;
    cout << " | " << tmpArr[i] << endl;
}
cout << endl;

for (int i = 0; i < Size1; i++) {
    for (int j = 0; j < Size2; j++) {
        if (tmpArr[j] > tmpArr[j + 1]) {
            swap(tmpArr[j], tmpArr[j + 1]);
            for (int k = 0; k < Size2; k++) {
                swap(arr[j][k], arr[j + 1][k]);
            }
        }
        cout << setw(2) << arr[i][j];
    }
    cout << " | " << tmpArr[i] << endl;
}

cin.get(); cin.get();
}
*/
/*46. ***Написать программу «Подсчет единичных островов». Заполнить двухмерный
массив 12х12 0 и 1. 0 – это вода, 1 – это земля. Воды должно быть в три раза
больше, чем земли. Необходимо посчитать количество единичных островов.
Единичным островом считается 1, окруженная со всех сторон 0.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int const Size = 12;
    int arr[Size][Size];
    //Заполняем нулями
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            arr[i][j] = rand() % 1 + 0;
            //cout << setw(2) << arr[i][j];
        }
        //cout << endl;
    }
    //Заполняем единицами
    for (int i = 0; i < Size/3; i++)
    {
        for (int j = 0; j < Size/3; j++)
        {
            arr[rand() % Size][rand() % Size] = 1;
            //cout << setw(2) << arr[i][j];
        }
        //cout << endl;
    }
    // Выводим на экран
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            cout << setw(2) << arr[i][j];
        }
       cout << endl;
    }
    cout << endl;

    // Считаем островки
    int count = 0;
    for (int i = 1; i < Size - 1; ++i)
    {
        for (int j = 1; j < Size - 1; ++j)
        {
            if (arr[i][j] == 1) {
                if ((arr[i - 1][j - 1] | arr[i - 1][j] | arr[i - 1][j + 1] |
                    arr[i][j - 1] | arr[i][j + 1] | arr[i + 1][j - 1] |
                    arr[i + 1][j] | arr[i + 1][j + 1]) == 0) {
                    count += 1;
                }
            }
        }
        //cout << endl;
    }
    cout << "Кол-во островков: " << count;

    cin.get(); cin.get();
}
*/
