
/*47. *�������� ���������, ������� ��������� ������ 5�5 ���������� ������� � ��������� �� a �� b.
�������� a � b ������ ������������. */
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    int a;
    int b;
    cout << "������� ���. ����� �������: " << endl;
    cin >> a;
    cout << "������� ����. ����� ���������: " << endl;
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
/*31. *�������� ���������, � ������� ����������� ��� ������� ����������� �������.
������ ��� ������� ����������� ���������� ������� � ��������� �� 0 �� 20,
������ ������ ����������� ��� ������������ ����� ��������� ������ ���� ��������.
���������� ���� ���� �������� ���������� �� �������. */
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

/*37. **�������� ���������, ������� ���������� ������� ����� �� 3 ���� (���������� ������ 3�12) � �� ������ �����.
���������� ��������� ���, � �������� ������������ ����� � ����������� ��������.*/
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
            cout << "���: " << i+1 << ", ���: " << j+1 << " -> " << arr[i][j] << "\n";
            if (minPribyl > arr[i][j]) {
                minPribyl = arr[i][j];
                mini = i;
                minj = j;
            }
        }
        if (i == 2) {
            cout << "\n���. �������: ���: " << mini+1 << ", ���: " << minj+1 << " -> " << arr[mini][minj] << "\n";
        }
    }


    cin.get(); cin.get();
}
*/

/*39. **�������� ���������� ������. ��������� ��� ���������� ������� � �������� �� �����.
��������� ���������� ��������� � ������ ������ �������.
���������� ��������� �������� �� �����. */
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

/*�������������� �������
*
33. **�������� ���������, � ������� ����������� ������ �������� 5�10 � ������ �������� 5�5.
������ ������ ����������� ���������� �������, � ��������� �� 0 �� 50.
������ ������ ����������� �� ���������� ��������:
������ ������� ������� ������� ����� ����� ������� � ������� �������� ������� �������,
������ ������� ������� ������� ����� ����� �������� � ���������� �������� ������� ������� � �.�.
���������� ���� �������� ���������� �� �������.
*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int arr1 [5][10];
    int arr2 [5][5];

    cout << "������ 1: \n";
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
    cout << "\n������ 2: \n";

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

/*38. ***�������� ���������� ������. ��������� ��� ���������� ������� � ��������
�� �����. ������������ �������� ���������� ������� � ��������� (�����, ������,
�����, ����). ��������� ����� ������� � �������� �� ����� ���������� ���������.
����� �����������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(0));
    const int num = 7; //1 2 0 4 6 7 9
    int sdvig;
    int polozhenie; //�����-������
    int arr1[num];
    int arr2[num];
    for (int i = 0; i < num; i++) {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
    }
    cout << "��������� �����: " << endl;
    for (int i = 0; i < num; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < num; i++) {
        cout << arr2[i] << " ";
    }
    cout << "\n�������� ���������� �������: ";
    cin >> sdvig;

    cout << "\n�������� ��������� (1-�����, 2-������, 3-����, 4-�����): ";
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

/*40. ***�������� ���������� ������. ��������� ��� ���������� ������� � ��������
�� �����. ��������� ���������� �������. ���������� ��������� �������� ��
�����.
������: ����� � ��� ���� ������
2 8 4
0 1 9
7 8 3
4 5 6
����� ���������� �������:
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
    //����������
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

/*41. ***�������� ���������� ������. ��������� ��� ���������� ������� � ��������
�� �����. ��� ������ ������ ���������� ����� ��������� � �������� �� �����.
����������� � ������� ������ ���, ����� ����� ����� ���� ������������� ��
�����������.*/
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
/*46. ***�������� ��������� �������� ��������� ��������. ��������� ����������
������ 12�12 0 � 1. 0 � ��� ����, 1 � ��� �����. ���� ������ ���� � ��� ����
������, ��� �����. ���������� ��������� ���������� ��������� ��������.
��������� �������� ��������� 1, ���������� �� ���� ������ 0.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int const Size = 12;
    int arr[Size][Size];
    //��������� ������
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            arr[i][j] = rand() % 1 + 0;
            //cout << setw(2) << arr[i][j];
        }
        //cout << endl;
    }
    //��������� ���������
    for (int i = 0; i < Size/3; i++)
    {
        for (int j = 0; j < Size/3; j++)
        {
            arr[rand() % Size][rand() % Size] = 1;
            //cout << setw(2) << arr[i][j];
        }
        //cout << endl;
    }
    // ������� �� �����
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            cout << setw(2) << arr[i][j];
        }
       cout << endl;
    }
    cout << endl;

    // ������� ��������
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
    cout << "���-�� ���������: " << count;

    cin.get(); cin.get();
}
*/
