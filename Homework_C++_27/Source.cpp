
/*15. **Напишите программу "Телефонный справочник".
Разработайте структуру, содержащую имена абонентов и их телефоны.
Создайте массив экземпляров этой структуры и реализуйте следующую функциональность:
- Печать всего справочника;
- Добавление нового абонента;
- Удаление выбранного абонента;
- Сортировка справочника по имени абонентов;
- Сортировка справочника по номеру телефона;
*** Поле имя для этой задачи храните в динамической памяти. */
/*
struct Phonebook {
	string Name;
	long long PhoneNum;
};

void Input(Phonebook& Pb, Phonebook*& PhonebookArr, int& count);
void PrintAll(Phonebook*& PhonebookArr, int& count);
void DeleteStr(Phonebook& Pb, Phonebook*& PhonebookArr, int& count);
void Add(Phonebook& Pb, Phonebook*& PhonebookArr, int& count);

void SortByName(Phonebook*& PhonebookArr, int& count);
void SortByNum(Phonebook*& PhonebookArr, int& count);

int main()
{
	system("chcp 1251 > nul");
	int count;
	Phonebook Pb;
	cout << "Введите количество абонентов: ";
	cin >> count;
	Phonebook* PhonebookArr = new Phonebook[count];

	Input(Pb, PhonebookArr, count); // создать список

	PrintAll(PhonebookArr, count); // печать всего списка

	DeleteStr(Pb, PhonebookArr, count); // удалить запись

	Add(Pb, PhonebookArr, count);// добавить запись

	SortByName(PhonebookArr, count); // Сортировка по имени

	SortByNum(PhonebookArr, count); // Сортировка по номеру

	cin.get(); cin.get();
}

void DeleteStr(Phonebook& Pb, Phonebook*& PhonebookArr, int& count) {
	cout << "---------------------Всего " << count << " людей -----------------------" << endl;
	cout << "Введите номер на удаление: ";
	int num;
	cin >> num;
	cin.ignore(); // убрать символ <ENTER> после работы cin

	if (num > count) {
		cout << "Номер превышает количество!" << endl;
		DeleteStr(Pb, PhonebookArr, count);
	}
	else {
		count--;
		Phonebook* tmpArr = new Phonebook[count];
		for (int i = 0; i < num - 1; i++) {
			tmpArr[i] = PhonebookArr[i];
		}
		for (int j = num - 1; j < count; j++) {
			tmpArr[j] = PhonebookArr[j + 1];
		}
		delete[]PhonebookArr;
		PhonebookArr = tmpArr;
		cout << endl << "Осталось: " << count << endl;
		PrintAll(PhonebookArr, count);
	}
}

void Add(Phonebook& Pb, Phonebook*& PhonebookArr, int& count) { // *Написать функции для заполнения и печати одного экземпляра структуры.
	cout << "---------------------Всего " << count << " абонентов -----------------------" << endl;
	cout << "---------------------Добавить нового абонента----------------------" << endl;

	long long PhoneNum;
	bool dubl = false;
	cout << "Введите номер телефона: ";
	cin >> PhoneNum;
	cin.ignore();
	for (int i = 0; i < count; i++) {
		if (PhoneNum == PhonebookArr[i].PhoneNum) {
			dubl = true;
			break;
		}
	}
	if (dubl == true) {
		cout << "Такой номер абонента уже существует. Введите другой номер! \n";
		Add(Pb, PhonebookArr, count);
	}
	else {
		count++;
		Phonebook* tmpArr = new Phonebook[count];
		for (int i = 0; i < count-1; i++) {
			tmpArr[i] = PhonebookArr[i];
		}
		cout << "Введите имя абонента: ";
		cin >> tmpArr[count-1].Name;
		cin.ignore();
		tmpArr[count-1].PhoneNum = PhoneNum;

		delete[]PhonebookArr;
		PhonebookArr = tmpArr;
		PrintAll(PhonebookArr, count);
	}
}
void Input(Phonebook& Pb, Phonebook*& PhonebookArr, int& count) { // *Написать функции для заполнения и печати одного экземпляра структуры.
	cin.ignore(); // убрать символ <ENTER> после работы cin

	for (int i = 0; i < count; i++) {
		cout << "№ " << i + 1 << endl;

		cout << "Введите имя абонента: ";
		getline(cin, Pb.Name);

		cout << "Введите номер абонента: ";
		cin >> Pb.PhoneNum;
		cin.ignore(); // убрать символ <ENTER> после работы cin

		PhonebookArr[i] = Pb;
	}
}

void PrintAll(Phonebook*& PhonebookArr, int& count) {// печать всего списка студентов.
	cout << endl << "--------------Общий список(нажмите Enter)------------------- " << endl;
	cin.get();
	for (int i = 0; i < count; i++) {
		Phonebook Pb = PhonebookArr[i];
		cout << endl
			<< "№ " << i + 1 << endl
			<< "Имя : " << Pb.Name << endl
			<< "Номер абонента: " << Pb.PhoneNum << endl
			<< endl;
	}
}

void SortByName(Phonebook*& PhonebookArr, int& count) {// Вывод информации с сортировкой по фамилии
	cout << "--------------Вывод информации с сортировкой по имени(нажмите Enter)----------------" << endl;
	cin.get();
	Phonebook* tmpArr = new Phonebook[count];
	for (int i = 0; i < count; i++) {
		tmpArr[i] = PhonebookArr[i];
	}

	for (int i = 0; i < count; i++) {
		for (int j = count - 1; j > 0; j--) {
			Phonebook Pb = tmpArr[j];
			Phonebook Pb2 = tmpArr[j - 1];
			if (unsigned(int(Pb.Name[0])) < unsigned(int(Pb2.Name[0]))) {
				swap(tmpArr[j], tmpArr[j - 1]);
			}
		}
	}

	for (int i = 0; i < count; i++) {
		Phonebook Pb = tmpArr[i];
		cout << endl
			<< "№ " << i + 1 << endl
			<< "Имя : " << Pb.Name << endl
			<< "Номер абонента: " << Pb.PhoneNum << endl
			<< endl;
	}
}

void SortByNum(Phonebook*& PhonebookArr, int& count) {// Вывод информации с сортировкой по фамилии

	cout << "------------------Вывод информации с сортировкой по номеру(нажмите Enter)------------------" << endl;
	cin.get();
	Phonebook* tmpArr = new Phonebook[count];
	for (int i = 0; i < count; i++) {
		tmpArr[i] = PhonebookArr[i];
	}

	for (int i = 0; i < count; i++) {
		for (int j = count - 1; j > 0; j--) {
			Phonebook Pb = tmpArr[j];
			Phonebook Pb2 = tmpArr[j - 1];
			if (unsigned(int(Pb.PhoneNum)) < unsigned(int(Pb2.PhoneNum))) {
				swap(tmpArr[j], tmpArr[j - 1]);
			}
		}
	}


	for (int i = 0; i < count; i++) {
		Phonebook Pb = tmpArr[i];
		cout << endl
			<< "№ " << i + 1 << endl
			<< "Имя : " << Pb.Name << endl
			<< "Номер абонента: " << Pb.PhoneNum << endl
			<< endl;
	}
}
*/

/*13.*Создайте структуру, описывающую точку в двумерной системе координат (x, y).
С помощью этой структуры задайте две точки.
Проверьте, будет ли прямая, проходящая через эти точки параллельна оси ординат или оси абсцисс? */
/*
struct Point
{
	int x, y;
};
void CheckPoint(Point a, Point b);

int main()
{
	system("chcp 1251 > nul");
	Point a, b;
	cout << "Введите точку А: ";
	cin >> a.x;
	cout << "Введите точку B: ";
	cin >> b.x;
	CheckPoint(a, b);

	cin.get(); cin.get();
}

void CheckPoint(Point a, Point b) {
	if (a.x == b.x) {
		cout << "Параллельна оси ординат" << endl;
	};
	if (a.y == b.y) {
		cout << "Параллельна оси абсцисс" << endl;
	}
}
*/

/*16.*Создайте структуру, описывающую простую дробь: числитель и знаменатель.
Реализуйте функции или методы для арифметических операций с дробями:
 сумму двух дробей,
 разность двух дробей,
 умножение двух дробей,
 деление одной дроби на другую.
**Учесть возможность сокращения дробей и перевод из неправильной дроби в простую.
Примечание. Числитель и знаменатель дроби должны быть целыми типами.*/
/*
struct Drob
{
	int ch, zn;
};
Drob Oper(Drob a, Drob b, char oper);
Drob RedDrob(Drob res);// сокращения дробей
int main()
{
	system("chcp 1251 > nul");
	Drob a, b;
	char oper;
	cout << "Введите числитель для первого числа: ";
	cin >> a.ch;
	cout << "Введите знаменатель для первого числа: ";
	cin >> a.zn;

	cout << "Введите числитель для второго числа: ";
	cin >> b.ch;
	cout << "Введите знаменатель для второго числа: ";
	cin >> b.zn;

	//cout << "Введите оператор(+, - , * или /): ";
	//cin >> oper;
	Drob res;

	res = Oper(a, b, '+');
	cout << "При сложении: \n" << "Числитель: " << res.ch << " Знаменатель: " << res.zn << endl << endl;

	res = Oper(a, b, '-');
	cout << "При вычитании: \n" << "Числитель: " << res.ch << " Знаменатель: " << res.zn << endl << endl;

	res = Oper(a, b, '*');
	cout << "При умножении: \n" << "Числитель: " << res.ch << " Знаменатель: " << res.zn << endl << endl;

	res = Oper(a, b, '/');
	cout << "При делении: \n" << "Числитель: " << res.ch << " Знаменатель: " << res.zn << endl << endl;

	cin.get(); cin.get();
}

Drob Oper(Drob a, Drob b, char oper) {
	Drob res;
	int num = 2;
	switch (oper) {
	case '+':
		if (a.zn == b.zn) {
			res.ch = a.ch + b.ch;
			res.zn = b.zn;
		}
		else {
			while (num % a.zn != 0 || num % b.zn != 0) {
				num++;
			}
			res.ch = (a.ch * (num / a.zn)) + (b.ch * (num / b.zn));
			res.zn = num;
		}
		break;
	case '-':
		if (a.zn == b.zn) {
			res.ch = a.ch - b.ch;
			res.zn = b.zn;
		}
		else {
			while (num % a.zn != 0 || num % b.zn != 0) {
				num++;

			}
			res.ch = (a.ch * (num / a.zn)) - (b.ch * (num / b.zn));
			res.zn = num;
		}
		break;
	case '*':
		res.ch = a.ch * b.ch;
		res.zn = b.zn * b.zn; break;
	case '/':
		res.ch = a.ch * b.zn;
		res.zn = b.ch * a.zn; break;
	}

	return RedDrob(res);


}

Drob RedDrob(Drob res) { // сокращения дробей
	int num = 1, limit;

	if (res.ch > res.zn) { // определяем лимит итераций цикла на основе наименьшего числа
		limit = res.zn;
	}
	else {
		limit = res.ch;
	}
	if (limit < 0) limit = abs(limit); //в случае отрицательного числа избавляемся от минуса

	for (int i = 2; i <= limit; i++) {
		if (res.ch % i == 0 && res.zn % i == 0) {
			num = i;
		}
	}

	res.ch = res.ch / num;
	res.zn = res.zn / num;


	return res;
}
*/
