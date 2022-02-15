/*5. **Описать структуру Student с полями: фамилия, группа, успеваемость (массив из 5 int).
Создать массив студентов и написать программу, позволяющую:
- динамически изменять размер массива;
- выводить список отличников(>75% отл оценок);
- выводить список двоечников(>50% оценок 2 и 3); */
/*
struct Student {
	string FIO;
	int Group;
	int Perfom[5];
};

void Input(Student& St, Student*& StudentsArr, int count);
//void Print(OZU &Ozu);
void PrintAll(Student*& StudentsArr, int count);
void Remand(Student& St, Student*& StudentsArr, int& count);

void SelectBestPrint(Student*& StudentsArr, int& count);
void SelectBadPrint(Student*& StudentsArr, int& count);

int main()
{
	system("chcp 1251 > nul");
	int count;
	Student St;
	cout << "Введите количество студентов: ";
	cin >> count;
	Student* StudentsArr = new Student[count];

	Input(St, StudentsArr, count); // создать список студентов

	PrintAll(StudentsArr, count); // печать всего списка студентов

	Remand(St, StudentsArr, count); // отчислить студента (динамически задавать и изменять размер массива)

	SelectBestPrint(StudentsArr, count); // выводить список отличников(>75% отл оценок)

	SelectBadPrint(StudentsArr, count); // выводить список двоечников(>50% оценок 2 и 3)

	cin.get(); cin.get();
}

void Remand(Student& St, Student*& StudentsArr, int& count) {
	cout << "Всего " << count << " студентов " << endl;
	cout << "Введите номер студента на отчисление: ";
	int num;
	cin >> num;
	if (num > count) {
		cout << "Номер студента превышает количество студентов!" << endl;
		Remand(St, StudentsArr, count);
	}
	else {
		count--;
		Student* tmpArr = new Student[count];
		for (int i = 0; i < num - 1; i++) {
			tmpArr[i] = StudentsArr[i];
		}
		for (int j = num - 1; j < count; j++) {
			tmpArr[j] = StudentsArr[j + 1];
		}
		delete[]StudentsArr;
		StudentsArr = tmpArr;
		cout << endl << "Осталось студентов: " << count << endl;
		PrintAll(StudentsArr, count);
	}
}

void Input(Student& St, Student*& StudentsArr, int count) { // *Написать функции для заполнения и печати одного экземпляра структуры.
	cin.ignore(); // убрать символ <ENTER> после работы cin>>
	for (int i = 0; i < count; i++) {
		cout << "Студент № " << i + 1 << endl;
		cout << "Введите ФИО: ";
		getline(cin, St.FIO);

		cout << "Введите группу: ";
		cin >> St.Group;
		cin.ignore(); // убрать символ <ENTER> после работы cin>>

		cout << "Введите успеваемость (оценки от 1 до 5): " << endl;
		for (int i = 0; i < size(St.Perfom); i++) {
			cout << "Оценка " << i + 1 << ": ";
			cin >> St.Perfom[i];
			cout << endl;
		}
		cin.ignore(); // убрать символ <ENTER> после работы cin>>

		StudentsArr[i] = St;
	}
}

void SelectBestPrint(Student*& StudentsArr, int& count) {
	cout << "Вывести список список отличников(>75% отл оценок): " << endl;
	for (int i = 0; i < count; i++) {
		Student St = StudentsArr[i];
		int BestBall = 0;
		int size = sizeof(St.Perfom) / sizeof(St.Perfom[0]);
		for (int j = 0; j < size; j++) {
			if (St.Perfom[j] == 5) {
				BestBall++;
			}
		}
		if (float((BestBall / 5) * 100) >= 75) {
			cout << endl
				<< "Студент № " << i + 1 << endl
				<< "ФИО: " << St.FIO << endl
				<< "Группа : " << St.Group << endl
				<< "% 5 : " << float((BestBall / 5) * 100) << endl
				<< endl;
		}
	}
}
void SelectBadPrint(Student*& StudentsArr, int& count) {
	cout << "Вывести список двоечников(>50% оценок 2 и 3): " << endl;
	for (int i = 0; i < count; i++) {
		Student St = StudentsArr[i];
		int BadBall = 0;
		int size = sizeof(St.Perfom) / sizeof(St.Perfom[0]);
		for (int j = 0; j < size; j++) {
			if (St.Perfom[j] == 2 || St.Perfom[j] == 3) {
				BadBall++;
			}
		}
		if (float((BadBall/5)*100) >= 50) {
			cout << endl
				<< "Студент № " << i + 1 << endl
				<< "ФИО: " << St.FIO << endl
				<< "Группа : " << St.Group << endl
				<< "% 2 и 3: " << float((BadBall / 5) * 100) << endl
				<< endl;
		}
	}
}
void PrintAll(Student*& StudentsArr, int count) {// печать всего списка студентов.
	cout << "Общий список студентов: " << endl;
	for (int i = 0; i < count; i++) {
		Student St = StudentsArr[i];
		float MaxBall = 25;
		float TotBall = 0;
		for (int j = 0; j < size(St.Perfom); j++) {
				TotBall += St.Perfom[j];
		}
		TotBall = (TotBall / MaxBall) * 100;
		cout << endl
			<< "Студент № " << i + 1 << endl
			<< "ФИО: " << St.FIO << endl
			<< "% успеваемости : " << TotBall << endl
			<< endl;
	}
}
*/

/*7. **Описать структуру Rabotnik(Фамилия, должность, дата поступления на работу).
Создать массив из 10 работников. Предусмотреть:
- Заполнение массива из 10 элементов;
- Вывод информации о достижении пенсионного возраста работниками с указанием фамилии, возраста и должности.
- Вывод информации о стаже работы сотрудников на указанный год в порядке убывания. */

/*
struct Date {
	int DD;
	int MM;
	int YYYY;
};

struct Rabotnik {
	string Surname;
	string Position;
	Date Date;
};

void Input(Rabotnik& Rb, Rabotnik*& RabotnikArr, int count);
//void Print(OZU &Ozu);
void PrintAll(Rabotnik*& RabotnikArr, int count);
void SelectPensionPrint(Rabotnik*& RabotnikArr, int& count);
void SortByExp(Rabotnik*& RabotnikArr, int count);

int main()
{
	system("chcp 1251 > nul");
	int count;
	Rabotnik Rb;
	cout << "Введите количество работников: ";
	cin >> count;
	Rabotnik* RabotnikArr = new Rabotnik[count];

	Input(Rb, RabotnikArr, count); // создать список

	PrintAll(RabotnikArr, count); // печать всего списка

	SelectPensionPrint(RabotnikArr, count); // Поиск по имени

	SortByExp(RabotnikArr, count); // Сортировка по фамилии

	cin.get(); cin.get();
}

void Input(Rabotnik& Rb, Rabotnik*& RabotnikArr, int count) { // *Написать функции для заполнения и печати одного экземпляра структуры.
	srand(time(0));
	for (int i = 0; i < count; i++) {

		cout << endl << "№ " << i + 1 << endl;

		Rb.Surname = "МояФамилия";
		cout << "Фамилия: " << Rb.Surname << endl;

		Rb.Position = "МояДолжность";
		cout << "Должность: " << Rb.Position << endl;

		Rb.Date.DD = rand() % 30 + 1;
		Rb.Date.MM = rand() % 12 + 1;
		Rb.Date.YYYY = rand() % 70 + 1950;
		cout << "Дата поступления на работу: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl;

		RabotnikArr[i] = Rb;
	}
}

void SelectPensionPrint(Rabotnik*& RabotnikArr, int& count) {//Вывод списка именинников месяца с указанием даты рождения.
	cout << "--------Вывод информации о достижении пенсионного возраста работниками проработавших более 35 лет. Нажмите Enter--------" << endl;
	cin.get();
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int Expirions = 35; // стаж по достижению которого на пенсию
	int YYYY = (1970 + ltm->tm_year) - 70;
	cout << "Текущий год: " << (1970 + ltm->tm_year) - 70 << endl;

	for (int i = 0; i < count; i++) {
		Rabotnik Rb = RabotnikArr[i];
		if ((YYYY - Rb.Date.YYYY) > Expirions) {
			cout << endl
				<< "№ " << i + 1 << endl
				<< "Фамилия: " << Rb.Surname << endl
				<< "Должность : " << Rb.Position << endl
				<< "Дата поступления на работу: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl
				<< endl;
		}
	}
}

void PrintAll(Rabotnik*& RabotnikArr, int count) {// печать всего списка студентов.
	cout << endl << "--------Общий список. Нажмите Enter--------" << endl;
	cin.get();
	for (int i = 0; i < count; i++) {
		Rabotnik Rb = RabotnikArr[i];
		cout << endl
			<< "№ " << i + 1 << endl
			<< "Фамилия: " << Rb.Surname << endl
			<< "Должность : " << Rb.Position << endl
			<< "Дата поступления на работу: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl
			<< endl;
	}
}

void SortByExp(Rabotnik*& RabotnikArr, int count) {// Вывод информации с сортировкой по фамилии
	cout << "--------Вывод информации о стаже работы сотрудников на указанный год в порядке убывания. Нажмите Enter--------" << endl;
	cin.get();
	Rabotnik* tmpArr = new Rabotnik[count];

	time_t now = time(0);
	tm* ltm = localtime(&now);
	int YYYY = (1970 + ltm->tm_year) - 70;
	cout << "Текущий год " << (1970 + ltm->tm_year) - 70 << endl;

	for (int i = 0; i < count; i++) {
		tmpArr[i] = RabotnikArr[i];
	}


	for (int i = 0; i < count; i++) {
		for (int j = count - 1; j > 0; j--) {
			Rabotnik Rb = tmpArr[j];
			Rabotnik Rb2 = tmpArr[j - 1];
			if ((YYYY - Rb.Date.YYYY) < (YYYY - Rb2.Date.YYYY)) {
				swap(tmpArr[j], tmpArr[j - 1]);
			}
		}
	}

	for (int i = 0; i < count; i++) {
		Rabotnik Rb = tmpArr[i];
		cout << endl
			<< "№ " << i + 1 << endl
			<< "Фамилия: " << Rb.Surname << endl
			<< "Должность : " << Rb.Position << endl
			<< "Дата поступления на работу: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl
			<< "Стаж: " << YYYY - Rb.Date.YYYY << " лет" << endl
			<< endl;
	}
}

*/


/*Дополнительные задания

20. ***Разработайте структуру "Квартира" (номер квартиры, кол-во комнат, общая площадь).
Разработайте структуру "Дом" (номер дома, кол-во квартир, массив квартир).
Создайте экземпляр структуры и реализуйте для него следующие функции:
- Печать всех квартир;
- Добавление квартиры;
- Удаление квартиры;
Примечание: массив квартир можно сделать статическим. */
/*
struct Kvartira {
	int NumKv;
	int KolKomn;
	int Ploshad;
};
struct Dom {
	int NumDom;
	int KolKv;
	Kvartira KvartiraArr;
};

void Input(Dom& Dm, Kvartira*& KvartiraArr, int &count); //добавление кв
void PrintAll(Kvartira*& KvartiraArr, int& count); //печать всех кв
void DeleteStr(Dom& Dm, Kvartira*& KvartiraArr, int& count); //удаление кв
void Add(Dom& Dm, Kvartira*& KvartiraArr, int &count);
int main()
{
	system("chcp 1251 > nul");
	int count;
	Dom Dm;
	cout << "Введите номер дома: ";
	cin >> Dm.NumDom;
	cin.ignore(); // убрать символ <ENTER> после работы cin

	cout << "Введите количество квартир: ";
	cin >> Dm.KolKv;
	cin.ignore(); // убрать символ <ENTER> после работы cin

	Kvartira * KvartiraArr = new Kvartira[Dm.KolKv];

	Input(Dm, KvartiraArr, Dm.KolKv); // создать список

	PrintAll(KvartiraArr, Dm.KolKv); // печать всего списка

	DeleteStr(Dm, KvartiraArr, Dm.KolKv); // удалить запись

	Add(Dm, KvartiraArr, Dm.KolKv);// добавить запись

	cin.get(); cin.get();
}

void DeleteStr(Dom& Dm, Kvartira*& KvartiraArr, int& count) {
	cout << "---------------------Всего " << count << " квартир -----------------------" << endl;
	cout << "Введите номер квартиры на удаление: ";
	int num;
	cin >> num;
	cin.ignore(); // убрать символ <ENTER> после работы cin

	if (num > count) {
		cout << "Номер квартиры превышает количество!" << endl;
		DeleteStr(Dm, KvartiraArr, count);
	}
	else {
		count--;
		Kvartira* tmpArr = new Kvartira[count];
		for (int i = 0; i < num - 1; i++) {
			tmpArr[i] = KvartiraArr[i];
		}
		for (int j = num - 1; j < count; j++) {
			tmpArr[j] = KvartiraArr[j + 1];
		}
		delete[] KvartiraArr;
		KvartiraArr = tmpArr;
		cout << endl << "Осталось: " << count << " квартир" << endl;
		PrintAll(KvartiraArr, count);
	}
}

void Add(Dom& Dm, Kvartira*& KvartiraArr, int &count) { // *Написать функции для заполнения и печати одного экземпляра структуры.
	cout << "---------------------Всего " << count << " квартир -----------------------" << endl;
	cout << "---------------------Добавить новую квартиру----------------------" << endl;

	int numKv;
	bool dubl = false;
		cout << "Введите номер квартиры: ";
		cin >> numKv;
		cin.ignore();
		for (int i = 0; i < count; i++) {
			if (numKv == KvartiraArr[i].NumKv) {
			dubl = true;
			break;
			}
		}
		if (dubl == true) {
				cout << "Такой номер квартиры уже существует. Введите другой номер! \n";
				Add(Dm, KvartiraArr, count);
		} else{
			count++;
			Kvartira* tmpArr = new Kvartira[count];
			for (int i = 0; i < count-1; i++) {
				tmpArr[i] = KvartiraArr[i];
			}

			tmpArr[count - 1].NumKv = numKv;

			cout << "Введите количество комнат: ";
			cin >> tmpArr[count-1].KolKomn;
			cin.ignore();

			cout << "Введите общую площадь: ";
			cin >> tmpArr[count-1].Ploshad;
			cin.ignore();

			delete[]KvartiraArr;
			KvartiraArr = tmpArr;
			PrintAll(KvartiraArr, count);
		}
}

void Input(Dom& Dm, Kvartira*& KvartiraArr, int &count) { // *Написать функции для заполнения и печати одного экземпляра структуры.

	for (int i = 0; i < count; i++) {

		Dm.KvartiraArr.NumKv = i+1; //номер квартиры

		Dm.KvartiraArr.KolKomn = rand() % 5 + 1;//количество комнат

		Dm.KvartiraArr.Ploshad = rand() % 100 + 30;//общую площадь

		KvartiraArr[i] = Dm.KvartiraArr;
	}
}

void PrintAll(Kvartira*& KvartiraArr, int &count) {// печать всего списка студентов.
	cout << endl << "--------------Общий список всех квартир(нажмите Enter)------------------- " << endl;
	cin.get();
	for (int i = 0; i < count; i++) {
		Kvartira Kv = KvartiraArr[i];
		cout << endl
			<< "№ квартиры: " << KvartiraArr[i].NumKv << endl
			<< "Кол-во комнат: " << KvartiraArr[i].KolKomn << endl
			<< "Общая площадь : " << KvartiraArr[i].Ploshad << endl
			<< endl;
	}
}
*/

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
	cout << "---------------------Всего " << count << " абонентов -----------------------" << endl;
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

void PrintAll(Phonebook*& PhonebookArr, int& count) {// печать всего списка.
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

void SortByName(Phonebook*& PhonebookArr, int& count) {// Вывод информации с сортировкой по имени
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

void SortByNum(Phonebook*& PhonebookArr, int& count) {// Вывод информации с сортировкой по номеру

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
