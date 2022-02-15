/*5. **������� ��������� Student � ������: �������, ������, ������������ (������ �� 5 int).
������� ������ ��������� � �������� ���������, �����������:
- ����������� �������� ������ �������;
- �������� ������ ����������(>75% ��� ������);
- �������� ������ ����������(>50% ������ 2 � 3); */
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
	cout << "������� ���������� ���������: ";
	cin >> count;
	Student* StudentsArr = new Student[count];

	Input(St, StudentsArr, count); // ������� ������ ���������

	PrintAll(StudentsArr, count); // ������ ����� ������ ���������

	Remand(St, StudentsArr, count); // ��������� �������� (����������� �������� � �������� ������ �������)

	SelectBestPrint(StudentsArr, count); // �������� ������ ����������(>75% ��� ������)

	SelectBadPrint(StudentsArr, count); // �������� ������ ����������(>50% ������ 2 � 3)

	cin.get(); cin.get();
}

void Remand(Student& St, Student*& StudentsArr, int& count) {
	cout << "����� " << count << " ��������� " << endl;
	cout << "������� ����� �������� �� ����������: ";
	int num;
	cin >> num;
	if (num > count) {
		cout << "����� �������� ��������� ���������� ���������!" << endl;
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
		cout << endl << "�������� ���������: " << count << endl;
		PrintAll(StudentsArr, count);
	}
}

void Input(Student& St, Student*& StudentsArr, int count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.
	cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>
	for (int i = 0; i < count; i++) {
		cout << "������� � " << i + 1 << endl;
		cout << "������� ���: ";
		getline(cin, St.FIO);

		cout << "������� ������: ";
		cin >> St.Group;
		cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		cout << "������� ������������ (������ �� 1 �� 5): " << endl;
		for (int i = 0; i < size(St.Perfom); i++) {
			cout << "������ " << i + 1 << ": ";
			cin >> St.Perfom[i];
			cout << endl;
		}
		cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		StudentsArr[i] = St;
	}
}

void SelectBestPrint(Student*& StudentsArr, int& count) {
	cout << "������� ������ ������ ����������(>75% ��� ������): " << endl;
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
				<< "������� � " << i + 1 << endl
				<< "���: " << St.FIO << endl
				<< "������ : " << St.Group << endl
				<< "% 5 : " << float((BestBall / 5) * 100) << endl
				<< endl;
		}
	}
}
void SelectBadPrint(Student*& StudentsArr, int& count) {
	cout << "������� ������ ����������(>50% ������ 2 � 3): " << endl;
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
				<< "������� � " << i + 1 << endl
				<< "���: " << St.FIO << endl
				<< "������ : " << St.Group << endl
				<< "% 2 � 3: " << float((BadBall / 5) * 100) << endl
				<< endl;
		}
	}
}
void PrintAll(Student*& StudentsArr, int count) {// ������ ����� ������ ���������.
	cout << "����� ������ ���������: " << endl;
	for (int i = 0; i < count; i++) {
		Student St = StudentsArr[i];
		float MaxBall = 25;
		float TotBall = 0;
		for (int j = 0; j < size(St.Perfom); j++) {
				TotBall += St.Perfom[j];
		}
		TotBall = (TotBall / MaxBall) * 100;
		cout << endl
			<< "������� � " << i + 1 << endl
			<< "���: " << St.FIO << endl
			<< "% ������������ : " << TotBall << endl
			<< endl;
	}
}
*/

/*7. **������� ��������� Rabotnik(�������, ���������, ���� ����������� �� ������).
������� ������ �� 10 ����������. �������������:
- ���������� ������� �� 10 ���������;
- ����� ���������� � ���������� ����������� �������� ����������� � ��������� �������, �������� � ���������.
- ����� ���������� � ����� ������ ����������� �� ��������� ��� � ������� ��������. */

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
	cout << "������� ���������� ����������: ";
	cin >> count;
	Rabotnik* RabotnikArr = new Rabotnik[count];

	Input(Rb, RabotnikArr, count); // ������� ������

	PrintAll(RabotnikArr, count); // ������ ����� ������

	SelectPensionPrint(RabotnikArr, count); // ����� �� �����

	SortByExp(RabotnikArr, count); // ���������� �� �������

	cin.get(); cin.get();
}

void Input(Rabotnik& Rb, Rabotnik*& RabotnikArr, int count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.
	srand(time(0));
	for (int i = 0; i < count; i++) {

		cout << endl << "� " << i + 1 << endl;

		Rb.Surname = "����������";
		cout << "�������: " << Rb.Surname << endl;

		Rb.Position = "������������";
		cout << "���������: " << Rb.Position << endl;

		Rb.Date.DD = rand() % 30 + 1;
		Rb.Date.MM = rand() % 12 + 1;
		Rb.Date.YYYY = rand() % 70 + 1950;
		cout << "���� ����������� �� ������: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl;

		RabotnikArr[i] = Rb;
	}
}

void SelectPensionPrint(Rabotnik*& RabotnikArr, int& count) {//����� ������ ����������� ������ � ��������� ���� ��������.
	cout << "--------����� ���������� � ���������� ����������� �������� ����������� ������������� ����� 35 ���. ������� Enter--------" << endl;
	cin.get();
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int Expirions = 35; // ���� �� ���������� �������� �� ������
	int YYYY = (1970 + ltm->tm_year) - 70;
	cout << "������� ���: " << (1970 + ltm->tm_year) - 70 << endl;

	for (int i = 0; i < count; i++) {
		Rabotnik Rb = RabotnikArr[i];
		if ((YYYY - Rb.Date.YYYY) > Expirions) {
			cout << endl
				<< "� " << i + 1 << endl
				<< "�������: " << Rb.Surname << endl
				<< "��������� : " << Rb.Position << endl
				<< "���� ����������� �� ������: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl
				<< endl;
		}
	}
}

void PrintAll(Rabotnik*& RabotnikArr, int count) {// ������ ����� ������ ���������.
	cout << endl << "--------����� ������. ������� Enter--------" << endl;
	cin.get();
	for (int i = 0; i < count; i++) {
		Rabotnik Rb = RabotnikArr[i];
		cout << endl
			<< "� " << i + 1 << endl
			<< "�������: " << Rb.Surname << endl
			<< "��������� : " << Rb.Position << endl
			<< "���� ����������� �� ������: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl
			<< endl;
	}
}

void SortByExp(Rabotnik*& RabotnikArr, int count) {// ����� ���������� � ����������� �� �������
	cout << "--------����� ���������� � ����� ������ ����������� �� ��������� ��� � ������� ��������. ������� Enter--------" << endl;
	cin.get();
	Rabotnik* tmpArr = new Rabotnik[count];

	time_t now = time(0);
	tm* ltm = localtime(&now);
	int YYYY = (1970 + ltm->tm_year) - 70;
	cout << "������� ��� " << (1970 + ltm->tm_year) - 70 << endl;

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
			<< "� " << i + 1 << endl
			<< "�������: " << Rb.Surname << endl
			<< "��������� : " << Rb.Position << endl
			<< "���� ����������� �� ������: " << Rb.Date.DD << "\\" << Rb.Date.MM << "\\" << Rb.Date.YYYY << endl
			<< "����: " << YYYY - Rb.Date.YYYY << " ���" << endl
			<< endl;
	}
}

*/


/*�������������� �������

20. ***������������ ��������� "��������" (����� ��������, ���-�� ������, ����� �������).
������������ ��������� "���" (����� ����, ���-�� �������, ������ �������).
�������� ��������� ��������� � ���������� ��� ���� ��������� �������:
- ������ ���� �������;
- ���������� ��������;
- �������� ��������;
����������: ������ ������� ����� ������� �����������. */
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

void Input(Dom& Dm, Kvartira*& KvartiraArr, int &count); //���������� ��
void PrintAll(Kvartira*& KvartiraArr, int& count); //������ ���� ��
void DeleteStr(Dom& Dm, Kvartira*& KvartiraArr, int& count); //�������� ��
void Add(Dom& Dm, Kvartira*& KvartiraArr, int &count);
int main()
{
	system("chcp 1251 > nul");
	int count;
	Dom Dm;
	cout << "������� ����� ����: ";
	cin >> Dm.NumDom;
	cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	cout << "������� ���������� �������: ";
	cin >> Dm.KolKv;
	cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	Kvartira * KvartiraArr = new Kvartira[Dm.KolKv];

	Input(Dm, KvartiraArr, Dm.KolKv); // ������� ������

	PrintAll(KvartiraArr, Dm.KolKv); // ������ ����� ������

	DeleteStr(Dm, KvartiraArr, Dm.KolKv); // ������� ������

	Add(Dm, KvartiraArr, Dm.KolKv);// �������� ������

	cin.get(); cin.get();
}

void DeleteStr(Dom& Dm, Kvartira*& KvartiraArr, int& count) {
	cout << "---------------------����� " << count << " ������� -----------------------" << endl;
	cout << "������� ����� �������� �� ��������: ";
	int num;
	cin >> num;
	cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	if (num > count) {
		cout << "����� �������� ��������� ����������!" << endl;
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
		cout << endl << "��������: " << count << " �������" << endl;
		PrintAll(KvartiraArr, count);
	}
}

void Add(Dom& Dm, Kvartira*& KvartiraArr, int &count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.
	cout << "---------------------����� " << count << " ������� -----------------------" << endl;
	cout << "---------------------�������� ����� ��������----------------------" << endl;

	int numKv;
	bool dubl = false;
		cout << "������� ����� ��������: ";
		cin >> numKv;
		cin.ignore();
		for (int i = 0; i < count; i++) {
			if (numKv == KvartiraArr[i].NumKv) {
			dubl = true;
			break;
			}
		}
		if (dubl == true) {
				cout << "����� ����� �������� ��� ����������. ������� ������ �����! \n";
				Add(Dm, KvartiraArr, count);
		} else{
			count++;
			Kvartira* tmpArr = new Kvartira[count];
			for (int i = 0; i < count-1; i++) {
				tmpArr[i] = KvartiraArr[i];
			}

			tmpArr[count - 1].NumKv = numKv;

			cout << "������� ���������� ������: ";
			cin >> tmpArr[count-1].KolKomn;
			cin.ignore();

			cout << "������� ����� �������: ";
			cin >> tmpArr[count-1].Ploshad;
			cin.ignore();

			delete[]KvartiraArr;
			KvartiraArr = tmpArr;
			PrintAll(KvartiraArr, count);
		}
}

void Input(Dom& Dm, Kvartira*& KvartiraArr, int &count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.

	for (int i = 0; i < count; i++) {

		Dm.KvartiraArr.NumKv = i+1; //����� ��������

		Dm.KvartiraArr.KolKomn = rand() % 5 + 1;//���������� ������

		Dm.KvartiraArr.Ploshad = rand() % 100 + 30;//����� �������

		KvartiraArr[i] = Dm.KvartiraArr;
	}
}

void PrintAll(Kvartira*& KvartiraArr, int &count) {// ������ ����� ������ ���������.
	cout << endl << "--------------����� ������ ���� �������(������� Enter)------------------- " << endl;
	cin.get();
	for (int i = 0; i < count; i++) {
		Kvartira Kv = KvartiraArr[i];
		cout << endl
			<< "� ��������: " << KvartiraArr[i].NumKv << endl
			<< "���-�� ������: " << KvartiraArr[i].KolKomn << endl
			<< "����� ������� : " << KvartiraArr[i].Ploshad << endl
			<< endl;
	}
}
*/

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
	cout << "---------------------����� " << count << " ��������� -----------------------" << endl;
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

void PrintAll(Phonebook*& PhonebookArr, int& count) {// ������ ����� ������.
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

void SortByName(Phonebook*& PhonebookArr, int& count) {// ����� ���������� � ����������� �� �����
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

void SortByNum(Phonebook*& PhonebookArr, int& count) {// ����� ���������� � ����������� �� ������

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
