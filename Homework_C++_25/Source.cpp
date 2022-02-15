/*1. *������� ���������, ����������� �����.
 � ��������� ������: �������� ������, ����, ��������, ����� ������������.
 ����������� ������� ��� ����������� ������ � ���� ����������.*/
 /*
 struct Goods {
	 string Name;  // �������� ������
	 int Coast; //����
	 string Descr;  // ��������
	 string Made;  // �����
 };

 void Input(Goods& Product);
 void Print(Goods Product);

 int main()
 {
	 system("chcp 1251 > nul");

	 Goods Product1;
	 Goods Product2;

	 Input(Product1);
	 Print(Product1);

	 Input(Product2);
	 Print(Product2);

	 cin.get(); cin.get();
 }

 void Input(Goods& Product) {

	 cout << "������� �������� ������: ";
	 getline(cin, Product.Name);

	 cout << "������� ����: ";
	 cin >> Product.Coast;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

	 cout << "������� �������� ������: ";
	 getline(cin, Product.Descr);

	 cout << "������� ����� ������������: ";
	 getline(cin, Product.Made);
	 //cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

 }

 void Print(Goods Product) {
	 cout << endl
		 << "�������� ������: " << Product.Name << endl
		 <<  "����: " << Product.Coast << endl
		 << "��������: " << Product.Descr << endl
		 << "����� ������������: " << Product.Made << endl
		 << endl;
 }
 */

 /*2. *������� ��������� Date ��� �������� ����.
 ���� ���������: ����, �����, ���.
 �������� ������� ��� ���� ��������� Date ��� ����� � ������� � ������ �� �������*/
 /*
 struct Date {
	 int Day;  //
	 int Month; //
	 int Year;  //
 };

 void Input(Date& Dt);
 void Print(Date Dt);

 int main()
 {
	 system("chcp 1251 > nul");

	 Date Dt1;
	 Date Dt2;

	 Input(Dt1);
	 Input(Dt2);

	 cin.get(); cin.get();
 }

 void Input(Date& Dt) {

	 cout << "������� ����: ";
	 cin >> Dt.Day;

	 cout << "������� �����: ";
	 cin >> Dt.Month;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

	 cout << "������� ���: ";
	 cin >> Dt.Year;

	 Print(Dt);

	 //cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

 }

 void Print(Date Dt) {
	 if (Dt.Day <= 0 || Dt.Day >= 32 || Dt.Month <= 0 || Dt.Month >= 13 || Dt.Year <= 1970 || Dt.Year >= 2022) {
		 cout << "������� ����������� ����" << endl;
		 Input(Dt);
	 }
	 else {
		 cout << endl
			 << Dt.Day << "\\"
			 << Dt.Month << "\\"
			 << Dt.Year << endl
			 << endl;
	 }
 }
 */

 /*3. *������� ��������� Student � ������: �������, ������, ���� �����������.
 ����������������� ������ � ���� ����������.*/
 /*
 struct Student {
	 string FIO;  //
	 string Group; //
	 string Date;  //
 };

 void Input(Student& St);
 void Print(Student St);

 int main()
 {
	 system("chcp 1251 > nul");

	 Student St1;
	 Student St2;

	 Input(St1);
	 Input(St2);

	 cin.get(); cin.get();
 }

 void Input(Student& St) {

	 cout << "������� ��� ��������: ";
	 getline(cin, St.FIO);

	 cout << "������� ������: ";
	 cin >> St.Group;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

	 cout << "������� ���� �����������(� ������� DD.MM.YYYY): ";
	 getline(cin, St.Date);

	 Print(St);

	 //cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

 }

 void Print(Student St) {
		 cout << endl
		 << "��� ��������: " << St.FIO << endl
		 << "������: " << St.Group << endl
		 << "���� �����������: " << St.Date << endl
		 << endl;
 }
 */

 /*�������������� �������

 3. ������� ��������� ����� Ticket � ������: �������� ��������, �����, ����, ���������.
 �) *�������� ������� ��� ���������� � ������ ������ ���������� ��������� Tiket.
 �) **������� ������ ������� � �������� ���������, �����������:
 - ����������� �������� � �������� ������ ������� �������;
 - �������� ������ ������� �� ���������� ����;
 - �������� ������ ������� �� ������ ������������ �����;
 - ������ ����� ������ �������.*/
 /*
 struct Time {
		 int HH;
		 int MM;
		 };
 struct Date {
		 int DD;
		 int MM;
		 int YYYY;
 };
 struct Ticket {
	 string Name;
	 Time Time;
	 Date Date;
	 float Coast;
 };

 void Input(Ticket& Tc, Ticket*& TcArr, int count);
 //void Print(Ticket &Tc);
 void PrintAll(Ticket*& TcArr, int count);
 void Buy(Ticket& Tc, Ticket*& TcArr, int &count);
 void SelectDatePrint(Ticket*& TcArr, int& count);
 void SelectCoastPrint(Ticket*& TcArr, int& count);
 int main()
 {
	 system("chcp 1251 > nul");
	 //�) *�������� ������� ��� ���������� � ������ ������ ���������� ��������� Tiket.
	 int count;
	 Ticket Tc;
	 cout << "������� ���������� �������: ";
	 cin >> count;
	 Ticket* TcArr = new Ticket[count];

	 Input(Tc, TcArr, count); // ������� ������

	 PrintAll(TcArr, count); // ������ ����� ������ �������

	 Buy(Tc, TcArr, count); // ������ ������ (����������� �������� � �������� ������ ������� �������)

	 SelectDatePrint(TcArr, count); // �������� ������ ������� �� ���������� ����

	 SelectCoastPrint(TcArr, count); // �������� ������ ������� �� ������ ������������ �����

	 cin.get(); cin.get();
 }

 void Buy(Ticket& Tc, Ticket*& TcArr, int &count) {
	 cout << "����� �������� " << count << " ������� " << endl;
	 cout << "����� ����� ������ ������: ";
	 int num;
	 cin >> num;
	 if (num > count) {
		 cout << "����� ������ ��������� ���������� �������!" << endl;
		 Buy(Tc, TcArr, count);
	 }
	 else {
		 count--;
		 Ticket* tmpArr = new Ticket[count];
		 for (int i = 0; i < num - 1; i++) {
			 tmpArr[i] = TcArr[i];
		 }
		 for (int j = num - 1; j < count; j++) {
			 tmpArr[j] = TcArr[j + 1];
		 }
		 delete[]TcArr;
		 TcArr = tmpArr;
		 cout << endl << "�������� �������: " << count << endl;
		 PrintAll(TcArr, count);
	 }
 }

 void Input(Ticket& Tc, Ticket*& TcArr, int count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ��������� Tiket.
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>
	 for (int i = 0; i < count; i++) {
		 cout << "����� � " << i+1 << endl;
		 cout << "������� �������� ��������: ";
		 getline(cin, Tc.Name);

		 cout << "������� ����� (HH MM): ";
		 cin >> Tc.Time.HH >> Tc.Time.MM;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		 cout << "������� ���� (DD MM YYYY): ";
		 cin >> Tc.Date.DD >> Tc.Date.MM >> Tc.Date.YYYY;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		 cout << "������� ����: ";
		 cin >> Tc.Coast;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		 TcArr[i] = Tc;
	 }
 }

 void SelectDatePrint(Ticket*& TcArr, int &count) {
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>
	 cout << "������� ������ ������� �� ���������� ����: " << endl;
	 int DD, MM, YYYY;
	 cout << "������� ���� (DD MM YYYY): ";
	 cin >> DD >> MM >> YYYY;
	 for (int i = 0; i < count; i++) {
		 Ticket Tc = TcArr[i];
		 if (Tc.Date.DD == DD && Tc.Date.MM == MM && Tc.Date.YYYY == YYYY) {
			 cout << endl
				 << "����� � " << i + 1 << endl
				 << "�������: " << Tc.Name << endl
				 << "����: " << Tc.Date.DD << "\\" << Tc.Date.MM << "\\" << Tc.Date.YYYY << endl
				 << "�����: " << Tc.Time.HH << ":" << Tc.Time.MM << endl
				 << "����: " << Tc.Coast << " �����" << endl
				 << endl;
		 }
	 }
 }
 void SelectCoastPrint(Ticket*& TcArr, int& count) {
	 cout << "������� ������ ������� �� ������ ������������ �����: " << endl;
	 int coast;
	 cout << "������� ���������� �����: ";
	 cin >> coast;
	 for (int i = 0; i < count; i++) {
		 Ticket Tc = TcArr[i];
		 if (Tc.Coast <= coast) {
			 cout << endl
				 << "����� � " << i + 1 << endl
				 << "�������: " << Tc.Name << endl
				 << "����: " << Tc.Date.DD << "\\" << Tc.Date.MM << "\\" << Tc.Date.YYYY << endl
				 << "�����: " << Tc.Time.HH << ":" << Tc.Time.MM << endl
				 << "����: " << Tc.Coast << " �����" << endl
				 << endl;
		 }
	 }
 }
 void PrintAll(Ticket*& TcArr, int count) {// ������ ����� ������ �������.
	 for (int i = 0; i < count; i++) {
		 Ticket Tc = TcArr[i];
		 cout << endl
			 << "����� � " << i + 1 << endl
			 << "�������: " << Tc.Name << endl
			 << "����: " << Tc.Date.DD << "\\" << Tc.Date.MM << "\\" << Tc.Date.YYYY << endl
			 << "�����: " << Tc.Time.HH << ":" << Tc.Time.MM << endl
			 << "����: " << Tc.Coast << " �����" << endl
			 << endl;
	 }
 }
 */

 /*4. **������� ��������� ��� (�����, �������, �����). ������� ������
 ����������� ��������� ��� � �������� ���������, �����������:
 - ����������� �������� ������ �������;
 - �������� ������ ������ � �������� ������ ��������;
 - �������� ������ ������ � ������� ������ ���������; */
 /*
 struct OZU {
	 string Firm;
	 float Freq;
	 int Volume;
 };

 void Input(OZU& Tc, OZU*& OzuArr, int count);
 //void Print(OZU &Ozu);
 void PrintAll(OZU*& OzuArr, int count);
 void Buy(OZU& Tc, OZU*& OzuArr, int& count);

 void SelectFreqPrint(OZU*& OzuArr, int& count);
 void SelectVolumePrint(OZU*& OzuArr, int& count);

 int main()
 {
	 system("chcp 1251 > nul");
	 int count;
	 OZU Ozu;
	 cout << "������� ���������� ���: ";
	 cin >> count;
	 OZU* OzuArr = new OZU[count];

	 Input(Ozu, OzuArr, count); // ������� ������ ���

	 PrintAll(OzuArr, count); // ������ ����� ������ ���

	 Buy(Ozu, OzuArr, count); // ������ ��� (����������� �������� � �������� ������ ������� ���)

	 SelectFreqPrint(OzuArr, count); // �������� ������ ��� � �������� ������ ��������

	 SelectVolumePrint(OzuArr, count); // �������� ������ ������ � ������� ������ ���������

	 cin.get(); cin.get();
 }

 void Buy(OZU& Tc, OZU*& OzuArr, int& count) {
	 cout << "����� �������� " << count << " ��� " << endl;
	 cout << "����� ����� ��� ������: ";
	 int num;
	 cin >> num;
	 if (num > count) {
		 cout << "����� ��� ��������� ���������� ���!" << endl;
		 Buy(Tc, OzuArr, count);
	 }
	 else {
		 count--;
		 OZU* tmpArr = new OZU[count];
		 for (int i = 0; i < num - 1; i++) {
			 tmpArr[i] = OzuArr[i];
		 }
		 for (int j = num - 1; j < count; j++) {
			 tmpArr[j] = OzuArr[j + 1];
		 }
		 delete[]OzuArr;
		 OzuArr = tmpArr;
		 cout << endl << "�������� ���: " << count << endl;
		 PrintAll(OzuArr, count);
	 }
 }

 void Input(OZU& Ozu, OZU*& OzuArr, int count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ��������� Tiket.
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>
	 for (int i = 0; i < count; i++) {
		 cout << "��� � " << i + 1 << endl;
		 cout << "������� �������� ���: ";
		 getline(cin, Ozu.Firm);

		 cout << "������� �������: ";
		 cin >> Ozu.Freq;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		 cout << "������� �����: ";
		 cin >> Ozu.Volume;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>

		 OzuArr[i] = Ozu;
	 }
 }

 void SelectFreqPrint(OZU*& OzuArr, int& count) {
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin>>
	 cout << "������� ������ ������ � �������� ������ ��������: " << endl;
	 float Freq;
	 cout << "������� �������: ";
	 cin >> Freq;
	 for (int i = 0; i < count; i++) {
		 OZU Ozu = OzuArr[i];
		 if ( Ozu.Freq >= Freq) {
			 cout << endl
				 << "��� � " << i + 1 << endl
				 << "�����: " << Ozu.Firm << endl
				 << "������� : " << Ozu.Freq << endl
				 << "����� : " << Ozu.Volume << endl
				 << endl;
		 }
	 }
 }
 void SelectVolumePrint(OZU*& OzuArr, int& count) {
	 cout << "������� ������ ������ � ������� ������ ���������: " << endl;
	 int Volume;
	 cout << "������� ����� ������: ";
	 cin >> Volume;
	 for (int i = 0; i < count; i++) {
		 OZU Ozu = OzuArr[i];
		 if (Ozu.Volume >= Volume) {
			 cout << endl
				 << "��� � " << i + 1 << endl
				 << "�����: " << Ozu.Firm << endl
				 << "������� : " << Ozu.Freq << endl
				 << "����� : " << Ozu.Volume << endl
				 << endl;
		 }
	 }
 }
 void PrintAll(OZU*& OzuArr, int count) {// ������ ����� ������ �������.
	 for (int i = 0; i < count; i++) {
		 OZU Ozu = OzuArr[i];
		 cout << endl
			 << "��� � " << i + 1 << endl
			 << "�����: " << Ozu.Firm << endl
			 << "������� : " << Ozu.Freq << endl
			 << "����� : " << Ozu.Volume << endl
			 << endl;
	 }
 }
 */

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
 /*6. ***������� ��������� Man(�������, ���, �������, ���� ��������).
 ������� ������, �������������:
 - ����� ���������� � ����������� �� ������� ��� �����;
 - ����� ������ ����������� ������ � ��������� ���� ��������.
 - ��������� �������� ������� ��� ���������� � �������� �������;
 - ����� �� ������� � �����;
 - �������������� ������.*/
 /*
 struct Date {
	 int DD;
	 int MM;
	 int YYYY;
 };
 struct Man {
	 string Surname;
	 string Name;
	 Date Date;
 };

 void Input(Man& St, Man*& ManArr, int count);
 //void Print(OZU &Ozu);
 void PrintAll(Man*& ManArr, int count);
 void DeleteStr(Man& St, Man*& ManArr, int& count);
 void EditStr(Man& Mn, Man*& ManArr, int& count);
 void SelectSnamePrint(Man*& ManArr, int& count);
 void SelectNamePrint(Man*& ManArr, int& count);
 void SelectBirthPrint(Man*& ManArr, int& count);
 void SortBySName(Man*& ManArr, int count);
 void SortByName(Man*& ManArr, int count);

 int main()
 {
	 system("chcp 1251 > nul");
	 int count;
	 Man Mn;
	 cout << "������� ���������� �����: ";
	 cin >> count;
	 Man* ManArr = new Man[count];

	 Input(Mn, ManArr, count); // ������� ������

	 PrintAll(ManArr, count); // ������ ����� ������

	 DeleteStr(Mn, ManArr, count); // ������� ������

	 EditStr(Mn, ManArr, count); // ������������� ������

	 SelectSnamePrint(ManArr, count); // ����� �� �������

	 SelectNamePrint(ManArr, count); // ����� �� �����

	 SelectBirthPrint(ManArr, count); // ����� �� �����

	 SortBySName(ManArr, count); // ���������� �� �������

	 SortByName(ManArr, count); // ���������� �� �����


	 cin.get(); cin.get();
 }

 void DeleteStr(Man& Mn, Man*& ManArr, int& count) {
	 cout << "---------------------����� " << count << " ����� -----------------------" << endl;
	 cout << "������� ����� �� ��������: ";
	 int num;
	 cin >> num;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	 if (num > count) {
		 cout << "����� ��������� ����������!" << endl;
		 DeleteStr(Mn, ManArr, count);
	 }
	 else {
		 count--;
		 Man* tmpArr = new Man[count];
		 for (int i = 0; i < num - 1; i++) {
			 tmpArr[i] = ManArr[i];
		 }
		 for (int j = num - 1; j < count; j++) {
			 tmpArr[j] = ManArr[j + 1];
		 }
		 delete[]ManArr;
		 ManArr = tmpArr;
		 cout << endl << "��������: " << count << endl;
		 PrintAll(ManArr, count);
	 }
 }

 void EditStr(Man& Mn, Man*& ManArr, int& count) { //- �������������� ������.
	 cout << "--------------------����� " << count << " ����� ----------------------" << endl;
	 cout << "������� ����� �� ��������������: ";
	 int num;
	 cin >> num;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	 if (num > count) {
		 cout << "����� ��������� ����������!" << endl;
		 EditStr(Mn, ManArr, count);
	 }
	 else {
		 Man Mn = ManArr[num - 1];
		 cout << "� " << num << endl;
		 cout << "������� ����� �������: ";
		 getline(cin, Mn.Surname);

		 cout << "������� ����� ���: ";
		 cin >> Mn.Name;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

		 cout << "������� ����� ���� (DD MM YYYY): ";
		 cin >> Mn.Date.DD >> Mn.Date.MM >> Mn.Date.YYYY;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

		 ManArr[num - 1] = Mn;
		 PrintAll(ManArr, count);
	 }
 }

 void Input(Man& Mn, Man*& ManArr, int count) { // *�������� ������� ��� ���������� � ������ ������ ���������� ���������.
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	 for (int i = 0; i < count; i++) {
		 cout << "� " << i + 1 << endl;
		 cout << "������� �������: ";
		 getline(cin, Mn.Surname);

		 cout << "������� ���: ";
		 cin >> Mn.Name;

		 Mn.Date.DD = rand() % 30 + 1;
		 Mn.Date.MM = rand() % 12 + 1;
		 Mn.Date.YYYY = rand() % 30 + 1990;
		 cout << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl;
		 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

		 ManArr[i] = Mn;
	 }
 }

 void SelectSnamePrint(Man*& ManArr, int& count) { //����� �� �������;
	 cin.get();
	 cout << "--------------����� �� �������(������� Enter)------------------ " << endl;
	 cout << "������� �������: " << endl;
	 string Surname;
	 cin >> Surname;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 if (Mn.Surname == Surname) {
			 cout << endl
				 << "� " << i + 1 << endl
				 << "�������: " << Mn.Surname << endl
				 << "��� : " << Mn.Name << endl
				 << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
				 << endl;
		 }
	 }
 }
 void SelectNamePrint(Man*& ManArr, int& count) {//����� �� �����;
	 cin.get();
	 cout << "------------------����� �� �����(������� Enter)-------------------" << endl;
	 cout << "������� ���: " << endl;
	 string Name;
	 cin >> Name;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 if (Mn.Name == Name) {
			 cout << endl
				 << "� " << i + 1 << endl
				 << "�������: " << Mn.Surname << endl
				 << "��� : " << Mn.Name << endl
				 << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
				 << endl;
		 }
	 }
 }

 void SelectBirthPrint(Man*& ManArr, int& count) {//����� ������ ����������� ������ � ��������� ���� ��������.
	 cin.get();
	 cout << "-----------����� ������ ����������� ������(������� Enter)------------------- " << endl;
		 cout << "������� ����� ���� ��������: " << endl;
	 int MM;
	 cin >> MM;
	 cin.ignore(); // ������ ������ <ENTER> ����� ������ cin

	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 if (Mn.Date.MM == MM) {
			 cout << endl
				 << "� " << i + 1 << endl
				 << "�������: " << Mn.Surname << endl
				 << "��� : " << Mn.Name << endl
				 << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
				 << endl;
		 }
	 }
 }

 void PrintAll(Man*& ManArr, int count) {// ������ ����� ������ ���������.
	 cout << endl << "--------------����� ������(������� Enter)------------------- " << endl;
	 cin.get();
	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 cout << endl
			 << "� " << i + 1 << endl
			 << "�������: " << Mn.Surname << endl
			 << "��� : " << Mn.Name << endl
			 << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
			 << endl;
	 }
 }

 void SortBySName(Man*& ManArr, int count) {// ����� ���������� � ����������� �� �������
	 cin.get();
	 cout << "------------------����� ���������� � ����������� �� �������(������� Enter)------------------" << endl;
	 Man* tmpArr = new Man[count];
	 for (int i = 0; i < count; i++) {
		 tmpArr[i] = ManArr[i];
	 }

 for (int i = 0; i < count; i++) {
		 for(int j = count-1; j > 0; j--){
			 Man Mn = tmpArr[j];
			 Man Mn2 = tmpArr[j - 1];
			 if (unsigned(int(Mn.Surname[0])) < unsigned(int(Mn2.Surname[0]))) {
				 swap(tmpArr[j], tmpArr[j - 1]);
			 }
		 }
	 }


	 for (int i = 0; i < count; i++) {
		 Man Mn = tmpArr[i];
		 cout << endl
			 << "� " << i + 1 << endl
			 << "�������: " << Mn.Surname << endl
			 << "��� : " << Mn.Name << endl
			 << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
			 << endl;
	 }
 }


 void SortByName(Man*& ManArr, int count) {// ����� ���������� � ����������� �� �������
	 cout << "--------------����� ���������� � ����������� �� �����(������� Enter)----------------" << endl;
	 cin.get();
	 Man* tmpArr = new Man[count];
	 for (int i = 0; i < count; i++) {
		 tmpArr[i] = ManArr[i];
	 }

	 for (int i = 0; i < count; i++) {
		 for (int j = count - 1; j > 0; j--) {
			 Man Mn = tmpArr[j];
			 Man Mn2 = tmpArr[j - 1];
			 if (unsigned(int(Mn.Name[0])) < unsigned(int(Mn2.Name[0]))) {
				 swap(tmpArr[j], tmpArr[j - 1]);
			 }
		 }
	 }

	 for (int i = 0; i < count; i++) {
		 Man Mn = tmpArr[i];
		 cout << endl
			 << "� " << i + 1 << endl
			 << "�������: " << Mn.Surname << endl
			 << "��� : " << Mn.Name << endl
			 << "����: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
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
