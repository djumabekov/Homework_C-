
/*15. **�������� ��������� "���������� ����������".
������������ ���������, ���������� ����� ��������� � �� ��������.
�������� ������ ����������� ���� ��������� � ���������� ��������� ����������������:
- ������ ����� �����������;
- ���������� ������ ��������;
- �������� ���������� ��������;
- ���������� ����������� �� ����� ���������;
- ���������� ����������� �� ������ ��������;
*** ���� ��� ��� ���� ������ ������� � ������������ ������. */
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
	cout << "������� ���������� ���������: ";
	cin >> count;
	Phonebook* PhonebookArr = new Phonebook[count];

	Input(Pb, PhonebookArr, count); // ������� ������

	PrintAll(PhonebookArr, count); // ������ ����� ������

	DeleteStr(Pb, PhonebookArr, count); // ������� ������

	Add(Pb, PhonebookArr, count);// �������� ������

	SortByName(PhonebookArr, count); // ���������� �� �����

	SortByNum(PhonebookArr, count); // ���������� �� ������

	cin.get(); cin.get();
}

void DeleteStr(Phonebook& Pb, Phonebook*& PhonebookArr, int& count) {
	cout << "---------------------����� " << count << " ����� -----------------------" << endl;
	cout << "������� ����� �� ��������: ";
	int num;
	cin >> num;
	cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	if (num > count) {
		cout << "����� ��������� ����������!" << endl;
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
		cout << endl << "��������: " << count << endl;
		PrintAll(PhonebookArr, count);
	}
}

void Add(Phonebook& Pb, Phonebook*& PhonebookArr, int& count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.
	cout << "---------------------����� " << count << " ��������� -----------------------" << endl;
	cout << "---------------------�������� ������ ��������----------------------" << endl;

	long long PhoneNum;
	bool dubl = false;
	cout << "������� ����� ��������: ";
	cin >> PhoneNum;
	cin.ignore();
	for (int i = 0; i < count; i++) {
		if (PhoneNum == PhonebookArr[i].PhoneNum) {
			dubl = true;
			break;
		}
	}
	if (dubl == true) {
		cout << "����� ����� �������� ��� ����������. ������� ������ �����! \n";
		Add(Pb, PhonebookArr, count);
	}
	else {
		count++;
		Phonebook* tmpArr = new Phonebook[count];
		for (int i = 0; i < count-1; i++) {
			tmpArr[i] = PhonebookArr[i];
		}
		cout << "������� ��� ��������: ";
		cin >> tmpArr[count-1].Name;
		cin.ignore();
		tmpArr[count-1].PhoneNum = PhoneNum;

		delete[]PhonebookArr;
		PhonebookArr = tmpArr;
		PrintAll(PhonebookArr, count);
	}
}
void Input(Phonebook& Pb, Phonebook*& PhonebookArr, int& count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.
	cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	for (int i = 0; i < count; i++) {
		cout << "� " << i + 1 << endl;

		cout << "������� ��� ��������: ";
		getline(cin, Pb.Name);

		cout << "������� ����� ��������: ";
		cin >> Pb.PhoneNum;
		cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

		PhonebookArr[i] = Pb;
	}
}

void PrintAll(Phonebook*& PhonebookArr, int& count) {// ������ ����� ������ ���������.
	cout << endl << "--------------����� ������(������� Enter)------------------- " << endl;
	cin.get();
	for (int i = 0; i < count; i++) {
		Phonebook Pb = PhonebookArr[i];
		cout << endl
			<< "� " << i + 1 << endl
			<< "��� : " << Pb.Name << endl
			<< "����� ��������: " << Pb.PhoneNum << endl
			<< endl;
	}
}

void SortByName(Phonebook*& PhonebookArr, int& count) {// ����� ���������� � ����������� �� �������
	cout << "--------------����� ���������� � ����������� �� �����(������� Enter)----------------" << endl;
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
			<< "� " << i + 1 << endl
			<< "��� : " << Pb.Name << endl
			<< "����� ��������: " << Pb.PhoneNum << endl
			<< endl;
	}
}

void SortByNum(Phonebook*& PhonebookArr, int& count) {// ����� ���������� � ����������� �� �������

	cout << "------------------����� ���������� � ����������� �� ������(������� Enter)------------------" << endl;
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
			<< "� " << i + 1 << endl
			<< "��� : " << Pb.Name << endl
			<< "����� ��������: " << Pb.PhoneNum << endl
			<< endl;
	}
}
*/

/*13.*�������� ���������, ����������� ����� � ��������� ������� ��������� (x, y).
� ������� ���� ��������� ������� ��� �����.
���������, ����� �� ������, ���������� ����� ��� ����� ����������� ��� ������� ��� ��� �������? */
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
	cout << "������� ����� �: ";
	cin >> a.x;
	cout << "������� ����� B: ";
	cin >> b.x;
	CheckPoint(a, b);

	cin.get(); cin.get();
}

void CheckPoint(Point a, Point b) {
	if (a.x == b.x) {
		cout << "����������� ��� �������" << endl;
	};
	if (a.y == b.y) {
		cout << "����������� ��� �������" << endl;
	}
}
*/

/*16.*�������� ���������, ����������� ������� �����: ��������� � �����������.
���������� ������� ��� ������ ��� �������������� �������� � �������:
 ����� ���� ������,
 �������� ���� ������,
 ��������� ���� ������,
 ������� ����� ����� �� ������.
**������ ����������� ���������� ������ � ������� �� ������������ ����� � �������.
����������. ��������� � ����������� ����� ������ ���� ������ ������.*/
/*
struct Drob
{
	int ch, zn;
};
Drob Oper(Drob a, Drob b, char oper);
Drob RedDrob(Drob res);// ���������� ������
int main()
{
	system("chcp 1251 > nul");
	Drob a, b;
	char oper;
	cout << "������� ��������� ��� ������� �����: ";
	cin >> a.ch;
	cout << "������� ����������� ��� ������� �����: ";
	cin >> a.zn;

	cout << "������� ��������� ��� ������� �����: ";
	cin >> b.ch;
	cout << "������� ����������� ��� ������� �����: ";
	cin >> b.zn;

	//cout << "������� ��������(+, - , * ��� /): ";
	//cin >> oper;
	Drob res;

	res = Oper(a, b, '+');
	cout << "��� ��������: \n" << "���������: " << res.ch << " �����������: " << res.zn << endl << endl;

	res = Oper(a, b, '-');
	cout << "��� ���������: \n" << "���������: " << res.ch << " �����������: " << res.zn << endl << endl;

	res = Oper(a, b, '*');
	cout << "��� ���������: \n" << "���������: " << res.ch << " �����������: " << res.zn << endl << endl;

	res = Oper(a, b, '/');
	cout << "��� �������: \n" << "���������: " << res.ch << " �����������: " << res.zn << endl << endl;

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

Drob RedDrob(Drob res) { // ���������� ������
	int num = 1, limit;

	if (res.ch > res.zn) { // ���������� ����� �������� ����� �� ������ ����������� �����
		limit = res.zn;
	}
	else {
		limit = res.ch;
	}
	if (limit < 0) limit = abs(limit); //� ������ �������������� ����� ����������� �� ������

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
