/*Доделать работу в классе "0-Работа в классе.txt"

13. ***Написать программу, которая рисует
прямоугольные треугольники 4х видов.
Размер одной стороны прямоугольника задает пользователь.
Реализовать вывод всех 4-х треугольников в ряд по горизонтали*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int size;

    cout << "Введите длину катета: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == i) { cout << "* "; }
            else { cout << "*"; }
        }
        for (int j = 0; j < size - (i + 1); j++) {
            if (j == size) { cout << "  "; }
            else { cout << " "; }
        }
        for (int s = 0; s < size - (i + 1); s++) {
            if (s == size) { cout << "  "; }
            else { cout << " "; }
        }
        for (int k = 0; k < i + 1; k++) {
            if (k == i) { cout << "* "; }
            else { cout << "*"; }
        }
        for (int m = 0; m < size - i; m++) {
            cout << "*";
        }
        for (int r = 0; r < i + 1; r++) {
            cout << " ";
        }
        for (int q = 0; q < i + 1; q++) {
            if (q == i) { cout << ""; }
            else { cout << " "; }
        }
        for (int p = 0; p < size - i; p++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}