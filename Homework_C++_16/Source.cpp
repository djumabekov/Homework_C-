/*1) *� ��������� ������� ����� ����� ���������:
 a) ����� ���� ��������� �������;
 b) ������� �������������� ���� ��������� �������;
 c) ����������� ������� - �������� � ���������� �������� � ������� - ����� ������, ��������;
 d) ������������ ������� - �������� � ���������� �������� � ������� - ����� ������, ��������.*/
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
     cout << "����� ���� ��������� ������� -> " << sum << "\n";
     cout << "������� �������������� ���� ��������� ������� -> " << (float(sum) / (Size * Size)) << "\n";
     cout << "����������� ������� -> " << "[" << mini << "][" << minj << "] -> " << min << "\n";
     cout << "������������ ������� -> " << "[" << maxi << "][" << maxj << "] -> " << max << "\n";

     cin.get(); cin.get();
 }
 */

 /*2) *�������� ���������, ������� ������� ���������� ������ � ��������� ��� �� ���������� ��������:
 ������������ ������ ����� (��������, 3) ������ ������� ������� ��������� �������� ����� �����, ����������� ������� ������� ��������� �������� ����� ����� + 1 (�.�. 4 ��� ������ �������), ������ ������� ������� ���������� ������� + 1 (�.�. 5 ��� ������ �������).
 ��������� ������ ������� �� �����. */
 /*
 int main()
 {
     setlocale(LC_ALL, "Rus");
     srand(time(0));
     int Size = 3;
     int num;
     cout << "������� �����: " << endl;
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
 /*3) **� ��������� ������� ����� � ������� �� ����� ������������ �������� �� ������ ������.*/
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
         cout << " ������������ ������� -> " << "[" << maxi << "][" << maxj << "] -> " << arr[maxi][maxj] << "\n";
     }
     cin.get(); cin.get();
 }
 */

 /*4) **���� ������������ ������� �(N,M) - ��������� ������ N x M ������� �����.
 ��������� ��������� ������ ���� ������������� ��������� ������� �� �������, ������� ������������ ��������.*/
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
         cout << " ������������ ������� -> " << "[" << maxi << "][" << maxj << "] -> " << arr[maxi][maxj] << "\n";
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
 /*5a) *��������, ���������, ������� ��������� ������� ����� �� 5 ���. ������������ ������ ������� ����� �� ������ �����.
 ��������� ����� ������� � ������� �� ������ ���.

 5b) **������� ������ - ������������� �������������� ������� �� ������ ���:
 1 ++++++++++++++
 2 ++++++++++++++++
 3 ++++
 4 +++++++++++++++
 5 +++++++

 5c) ***������� ������������ ������*/

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
         cout << "������� �� " << i + 1 << " ��� -> " << pribylYear[i] << "\n";
     }
         cout << "������� �� 5 ��� -> " << pribylAll << "\n";

     cout << "C������������ �������������� ������� �� ������ ��� (��������������): \n";
     for(int i = 0; i < row; i++){
         int len = (float(pribylYear[i]) / pribylAll) * 100;
         cout << i + 1 << " -> ";
         for (int j = 0; j < len; j++) {
             cout << "+";
         }
         cout << endl;
     }
     cout << endl;
     cout << "C������������ �������������� ������� �� ������ ��� (������������): \n";
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
 /*�������������� �������
 6) **���� ������������ ������� �(N,M) - ��������� ������ N x M ������� �����.
 ��������� ��������� ����������:
 a) ������������ �������� ������� � ����������� ��� ��������������.
 b) ������������� �������� ������� � ����������� ��� ��������������. */
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
     cout << "����������� ������� -> " << "[" << mini << "][" << minj << "] -> " << min << "\n";
     cout << "������������ ������� -> " << "[" << maxi << "][" << maxj << "] -> " << max << "\n";

     cin.get(); cin.get();
 }
 */
 /*7) **������������ ������ � ���������� ����� N, M � ������� ������� N x M.
��������� � �������� �� �����:
a) ����� ���� ������������� ����� � �������;
b) ���������� ������ �����;
c) ������ � ����������� ������ ��������� � ���;
d) ������ � ������������ ������ ��������� � ���;
e) ������ � ������������ ����������� � ��� �������� �����.*/
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
                sumPolChisel += arr[i][j]; //a) ����� ���� ������������� ����� � �������;
            }
            if (arr[i][j] % 2 == 0) {
                countChetClisel++; //b) ���������� ������ �����;
            }

            if (maxSum <= count) {
                maxSum = count; //c) ������ � ������������ ������ ��������� � ���;
                //cout << "\ncount = " << count << "\n";
                maxi = i;
            }

            if (minSum >= count) {
                minSum = count; //d) ������ � ����������� ������ ��������� � ���;
                //cout << "\ncount = " << count << "\n";
                mini = i;
            }
        }
    }
        cout << "����� ���� ������������� ����� � ������� -> " << sumPolChisel << "\n";
        cout << "���������� ������ ����� -> " << countChetClisel << "\n";
        cout << "������ � ����������� ������ ��������� � ��� -> " << "[" << mini << "] -> " << minSum << "\n";
        cout << "������ � ������������ ������ ��������� � ��� -> " << "[" << maxi << "] -> " << maxSum << "\n";

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
        sumElement += arr[i][i]; // ����� ��������� �� ������� ���������
        if (arr[i][Size - 1 - i] % 2 == 0) {
            countChetElement++;
        }
    }
    cout << "����� ��������� �� ������� ��������� ->" << sumElement << "\n";
    cout << "������������ ������� �� ������� ��������� -> " << "[" << maxi << "][" << maxj << "] -> " << arr[maxi][maxj] << "\n";
    cout << "���������� ������ ��������� �� �������� ��������� -> " << countChetElement << "\n";

    cin.get(); cin.get();
}
*/
/*9) **������������ ������ � ���������� ����� N � �.
��������� ������� ������� NxM ���������� �������, ����� ����:
a) ��������� ����� ��������� � ������� ��������� (a[i][j], ��� i � j � ������).
b) �������� ������� ������������ � ����������� �������� �������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int row;
    int col;
    cout << "������� ���.����� �������: " << endl;
    cin >> row;
    cout << "������� ���.�������� �������: " << endl;
    cin >> col;
    int** arr = new int* [row];
    int sum = 0;

    //������� ������, ��������� ����� ��������� � ������� ���������
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

    // ��������� ������������ � ����������� �������� �������

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
    cout << "\n����� ��������� � ������� ���������: " << sum << " \n";

    cout << "\n�������� ������� ������������ � ����������� �������� ������� (" << max << " �� " << min << ")\n";

    // ������ ������������ � ����������� �������� �������
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
    // ������� ���������� ������
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            cout << "arr" << "[" << i << "][" << j << "] -> " << arr[i][j] << "\n";
        }
    }
    cin.get(); cin.get();
}
*/

/*10) ***���� ���������� ������� �(N,N).
��������� ��������� ���������� ����� ���������, ������������� ���� ������� ���������.*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size;
    cout << "������� ������ �������: " << endl;
    cin >> Size;

    int** arr = new int* [Size];
    int sum = 0;

    //������� ������, ��������� ����� ��������� ���� ������� ���������
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
    cout << "����� ���������, ������������� ���� ������� ��������� -> " << sum << "\n";
    cin.get(); cin.get();
}
