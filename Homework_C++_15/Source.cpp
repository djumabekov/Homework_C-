
/*1. **���������� ������������� ������ ��� ����� ������� � ������� �����������, ���� ������� �������������� ���� ��������� ������ ����; ����� - ���� ������ �����.
��������� ����� ������� �� ����������� � ����������� � �������� �������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");

    int const Size = 18;
    int Size2 = 0;
   // int Size3 = 0;
    int num = 0;
    int count = 0;
   // int arr[Size] = {-18,-17,-16,-15,-14,-13,-12,11,10,9,8,7,6,5,4,3,2,1}; // ������ ����
    int arr[Size] = {18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}; // ������ ����

    cout << "\n---------�������� ������-----------\n";
    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < Size; i++) {
        count += arr[i];
    }
    if (count >= 0) {
       Size2 = Size * 2 / 3;
    }
    else { Size2 = Size * 1 / 3;
    }

    for (int i = 0; i < Size2; i++) {
        for (int j = Size2 - 1; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    for (int i = 0; i < (Size - Size2)/2; i++) {
        swap(arr[Size2 + i], arr[Size - i - 1]);
    }

    cout << "\n---------���������-----------\n";
    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
*/

/*2. **�� ������� ������ ��������� ����������� �����������, ������� ��� �������� ������ ���������� ���������� � ��������� ������.
��������, ��� ��� �������� ���������� �� -100 �� 100 ��������.
����� ������������ ������� �������� �������� ���������� � N ������ ���� �������.
� ���������, ��� �������� ��������� � �������� �������������, ������� �� ������ ��������� �� ����� �����.
�������� �� �������� ������ ������� � ���������� � ���������� ������������.
��� ��������� ������. �� ������ ����������� ����������� �������� �� �����������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    int const Size = 200;
    int arr[Size];

    for (int i = 0; i < Size; i++) {
        arr[i] = rand() % 201 - 100;

    }

    for (int i = 0; i < Size; i++) {
        for (int j = Size - 1; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }

        }
        cout << setw(3) << arr[i] << " ";
    }

    return 0;
}
*/
/*3. *�������� ���������, ������� ������������ ���������� ��������.
��� ������ ������ ��������� ������ ��������� ������� �� ������ ���������� ������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    int const Size = 4;
    int arr[Size];
    string arr2[4] = { "�������","��������","�����","�����" };
    int countBall = 0;
    float num = 0.00;

    cout << "������� �������� ������: \n";
    for (int i = 0; i < Size; i++) {
        cout << Size + 1 - i << " -> ";
        cin >> arr[i];
    }

    cout << "���������� ��������\n������������ �������� \"���\": \n";
    cout << "����� ������: ";
    for (int i = 0; i < Size; i++) {
        countBall += arr[i];
    }
    cout << countBall << " (100%)\n";

    for (int i = 0; i < Size; i++) {
        cout << arr2[i] <<": ";
        num = (arr[i] / float(countBall)) * 100;
        cout << fixed << setprecision(2) << num << "%\n";
    }
    cout << "��� ���������� ��������� ������� <Enter> \n";
    return 0;
}
*/
/*�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������*/
/*
int main()
{
    const int size = 10;
    int mas[size];

    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 10 + 1;
        cout << mas[i] << " ";
    }
    int num;
    int num2;
    for (int i = 1; i < size; i++)
    {
        num = mas[i];
        num2 = i - 1;
        while (num2 >= 0 && mas[num2] > num)
        {
            mas[num2 + 1] = mas[num2];
            mas[num2] = num;
            num2--;
        }
    }
    cout << "\n---------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cin.get(); cin.get();
}
*/

/*12. ***�������� ��������� <����������>. ������� ��� ���������� �������. ����
������ ������ ������ ICQ, ������ - ���������� ������. ����������� ���� ���
������������:
a) ������������� �� ������� ICQ
b) ������������� �� ������� ��������
c) ������� ������ �������������
d) �����*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    bool isWork = true;
    int const Size = 6;
    long long arr1[Size] = { 523456, 423450, 323451, 223452, 123453, 623454 };
    long long arr2[Size] = { 617119, 556699, 424488, 338877, 269977, 173366 };
    string arr3[Size] = { "����", "����", "�����", "����", "�����", "����" };
    int select;
    while (isWork == true)
    {
        cout << "1) ������������� �� ������� ICQ\n";
        cout << "2) ������������� �� ������� ��������\n";
        cout << "3) ������� ������ �������������\n";
        cout << "4) �����\n";
        cout << "�������� ����� ����: ";
        cin >> select;

        switch (select) {
        case 1:
            for (int i = 1; i < Size; ++i)
            {
                int j = i;
                while (j > 0 && arr1[j - 1] > arr1[j])
                {
                    int num = arr1[j - 1];
                    arr1[j - 1] = arr1[j];
                    arr1[j] = num;
                    num = arr2[j - 1];
                    arr2[j - 1] = arr2[j];
                    arr2[j] = num;

                    string num2 = arr3[j - 1];
                    num2 = arr3[j - 1];
                    arr3[j - 1] = arr3[j];
                    arr3[j] = num2;
                    j--;
                }
            }
            break;
        case 2:
            for (int i = 1; i < Size; ++i)
            {
                int j = i;
                while (j > 0 && arr2[j - 1] > arr2[j])
                {
                    int num = arr2[j - 1];
                    arr2[j - 1] = arr2[j];
                    arr2[j] = num;

                    num = arr1[j - 1];
                    arr1[j - 1] = arr1[j];
                    arr1[j] = num;

                    string num2 = arr3[j - 1];
                    num2 = arr3[j - 1];
                    arr3[j - 1] = arr3[j];
                    arr3[j] = num2;

                    j--;
                }
            }
            break;
        case 3:
            for (int i = 0; i < Size; i++) {
                cout << "ICQ: " << arr1[i] << "\tTEL: " << arr2[i] << "\tUSER: " << arr3[i] << "\n";
            }
            break;
        case 4: isWork = false; return 0;
        }
    }
        cin.get(); cin.get();
}
*/

/*8. ***���� ������������������ a1,a2,...,a20.
����������� ������������� �������� ������������������, ������� �� �������� ������ �� �����������.*/
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const Size = 20;
    int arr[Size];// = { 1,9,-3,-10,-5,-6,-7,8,2,4 };
    int num;

    for (int i = 0; i < Size; i++) {
        arr[i] = rand() % 20 - 3;
        cout << arr[i] << " ";
    }

    for (int i = 1; i<(Size/2 + Size % 2)-1; i++) {
        for (int j = i+1; j<Size/2+Size % 2; j++) {
            if ((arr[i*2-1] > 0) && (arr[j*2-1]>0) && (arr[i*2-1]>arr[j*2-1])) {
                num = arr[i * 2 - 1];
                arr[i * 2 - 1] = arr[j * 2 - 1];
                arr[j * 2 - 1] = num;
                }
        }
    }

    cout << endl;

        for (int i = 0; i < Size; i++) {
            cout << arr[i] << " ";
        }
    cin.get(); cin.get();
}
*/
/*
9. **���� ������������������ x1,x2,...,x20.
��������, ������� �� �������� ������, ����������� � ������� �����������, � �� ������ � ������� ��������.*/
/*
int main() {
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int const Size = 20;
    int arr[Size];

    for (int i = 0; i < Size; i++) {
        arr[i] = rand() % 20 - 3;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < Size; i += 2) {
        for (int j = 1; j < Size - i - 1; j += 2) {
            if (arr[j] < arr[j + 2])
                swap(arr[j], arr[j + 2]);
        }
    }
    for (int i = 2; i < Size; i += 2) {
        for (int j = 2; j < Size - i - 1; j += 2) {
            if (arr[j] > arr[j + 2])
                swap(arr[j], arr[j + 2]);
        }
    }

    for (int i = 1; i < Size; i++) {
        cout << arr[i] << " ";
    }
    cin.get(); cin.get();
}
*/
