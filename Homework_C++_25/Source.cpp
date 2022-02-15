/*1. *Создать структуру, описывающую товар.
 В структуру входят: название товара, цена, описание, фирма изготовитель.
 Реализовать функции для иллюстрации работы с этой структурой.*/
 /*
 struct Goods {
	 string Name;  // название товара
	 int Coast; //цена
	 string Descr;  // описание
	 string Made;  // фирма
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

	 cout << "Введите название товара: ";
	 getline(cin, Product.Name);

	 cout << "Введите цену: ";
	 cin >> Product.Coast;
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>

	 cout << "Введите описание товара: ";
	 getline(cin, Product.Descr);

	 cout << "Введите фирму изготовителя: ";
	 getline(cin, Product.Made);
	 //cin.ignore(); // убрать символ <ENTER> после работы cin>>

 }

 void Print(Goods Product) {
	 cout << endl
		 << "Название товара: " << Product.Name << endl
		 <<  "Цена: " << Product.Coast << endl
		 << "Описание: " << Product.Descr << endl
		 << "Фирма изготовитель: " << Product.Made << endl
		 << endl;
 }
 */

 /*2. *Описать структуру Date для хранения даты.
 Поля структуры: день, месяц, год.
 Написать функции для этой структуры Date для ввода с консоли и печати на консоль*/
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

	 cout << "Введите день: ";
	 cin >> Dt.Day;

	 cout << "Введите месяц: ";
	 cin >> Dt.Month;
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>

	 cout << "Введите год: ";
	 cin >> Dt.Year;

	 Print(Dt);

	 //cin.ignore(); // убрать символ <ENTER> после работы cin>>

 }

 void Print(Date Dt) {
	 if (Dt.Day <= 0 || Dt.Day >= 32 || Dt.Month <= 0 || Dt.Month >= 13 || Dt.Year <= 1970 || Dt.Year >= 2022) {
		 cout << "Введена некоректная дата" << endl;
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

 /*3. *Описать структуру Student с полями: фамилия, группа, дата поступления.
 Проиллюстрировать работу с этой структурой.*/
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

	 cout << "Введите ФИО студента: ";
	 getline(cin, St.FIO);

	 cout << "Введите группу: ";
	 cin >> St.Group;
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>

	 cout << "Введите дату поступления(в формате DD.MM.YYYY): ";
	 getline(cin, St.Date);

	 Print(St);

	 //cin.ignore(); // убрать символ <ENTER> после работы cin>>

 }

 void Print(Student St) {
		 cout << endl
		 << "ФИО студента: " << St.FIO << endl
		 << "Группа: " << St.Group << endl
		 << "Дата поступления: " << St.Date << endl
		 << endl;
 }
 */

 /*Дополнительные задания

 3. Описать структуру билет Ticket с полями: название маршрута, время, дата, стоимость.
 А) *Написать функции для заполнения и печати одного экземпляра структуры Tiket.
 Б) **Создать массив билетов и написать программу, позволяющую:
 - динамически задавать и изменять размер массива билетов;
 - выводить список билетов на конкретную дату;
 - выводить список билетов не дороже определенной суммы;
 - печать всего списка билетов.*/
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
	 //А) *Написать функции для заполнения и печати одного экземпляра структуры Tiket.
	 int count;
	 Ticket Tc;
	 cout << "Введите количество билетов: ";
	 cin >> count;
	 Ticket* TcArr = new Ticket[count];

	 Input(Tc, TcArr, count); // создать билеты

	 PrintAll(TcArr, count); // печать всего списка билетов

	 Buy(Tc, TcArr, count); // купить билеты (динамически задавать и изменять размер массива билетов)

	 SelectDatePrint(TcArr, count); // выводить список билетов на конкретную дату

	 SelectCoastPrint(TcArr, count); // выводить список билетов не дороже определенной суммы

	 cin.get(); cin.get();
 }

 void Buy(Ticket& Tc, Ticket*& TcArr, int &count) {
	 cout << "Всего доступно " << count << " билетов " << endl;
	 cout << "Какой номер билета купить: ";
	 int num;
	 cin >> num;
	 if (num > count) {
		 cout << "Номер билета превышает количество билетов!" << endl;
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
		 cout << endl << "Осталось билетов: " << count << endl;
		 PrintAll(TcArr, count);
	 }
 }

 void Input(Ticket& Tc, Ticket*& TcArr, int count) { // *Написать функции для заполнения и печати одного экземпляра структуры Tiket.
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>
	 for (int i = 0; i < count; i++) {
		 cout << "Билет № " << i+1 << endl;
		 cout << "Введите название маршрута: ";
		 getline(cin, Tc.Name);

		 cout << "Введите время (HH MM): ";
		 cin >> Tc.Time.HH >> Tc.Time.MM;
		 cin.ignore(); // убрать символ <ENTER> после работы cin>>

		 cout << "Введите дату (DD MM YYYY): ";
		 cin >> Tc.Date.DD >> Tc.Date.MM >> Tc.Date.YYYY;
		 cin.ignore(); // убрать символ <ENTER> после работы cin>>

		 cout << "Введите цену: ";
		 cin >> Tc.Coast;
		 cin.ignore(); // убрать символ <ENTER> после работы cin>>

		 TcArr[i] = Tc;
	 }
 }

 void SelectDatePrint(Ticket*& TcArr, int &count) {
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>
	 cout << "Вывести список билетов на конкретную дату: " << endl;
	 int DD, MM, YYYY;
	 cout << "Введите дату (DD MM YYYY): ";
	 cin >> DD >> MM >> YYYY;
	 for (int i = 0; i < count; i++) {
		 Ticket Tc = TcArr[i];
		 if (Tc.Date.DD == DD && Tc.Date.MM == MM && Tc.Date.YYYY == YYYY) {
			 cout << endl
				 << "Билет № " << i + 1 << endl
				 << "Маршрут: " << Tc.Name << endl
				 << "Дата: " << Tc.Date.DD << "\\" << Tc.Date.MM << "\\" << Tc.Date.YYYY << endl
				 << "Время: " << Tc.Time.HH << ":" << Tc.Time.MM << endl
				 << "Цена: " << Tc.Coast << " тенге" << endl
				 << endl;
		 }
	 }
 }
 void SelectCoastPrint(Ticket*& TcArr, int& count) {
	 cout << "Вывести список билетов не дороже определенной суммы: " << endl;
	 int coast;
	 cout << "Введите предельную сумму: ";
	 cin >> coast;
	 for (int i = 0; i < count; i++) {
		 Ticket Tc = TcArr[i];
		 if (Tc.Coast <= coast) {
			 cout << endl
				 << "Билет № " << i + 1 << endl
				 << "Маршрут: " << Tc.Name << endl
				 << "Дата: " << Tc.Date.DD << "\\" << Tc.Date.MM << "\\" << Tc.Date.YYYY << endl
				 << "Время: " << Tc.Time.HH << ":" << Tc.Time.MM << endl
				 << "Цена: " << Tc.Coast << " тенге" << endl
				 << endl;
		 }
	 }
 }
 void PrintAll(Ticket*& TcArr, int count) {// печать всего списка билетов.
	 for (int i = 0; i < count; i++) {
		 Ticket Tc = TcArr[i];
		 cout << endl
			 << "Билет № " << i + 1 << endl
			 << "Маршрут: " << Tc.Name << endl
			 << "Дата: " << Tc.Date.DD << "\\" << Tc.Date.MM << "\\" << Tc.Date.YYYY << endl
			 << "Время: " << Tc.Time.HH << ":" << Tc.Time.MM << endl
			 << "Цена: " << Tc.Coast << " тенге" << endl
			 << endl;
	 }
 }
 */

 /*4. **Описать структуру ОЗУ (фирма, частота, объем). Создать массив
 экземпляров структуры ОЗУ и написать программу, позволяющую:
 - динамически изменять размер массива;
 - выводить список памяти с частотой больше заданной;
 - выводить список памяти с объемом больше заданного; */
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
	 cout << "Введите количество ОЗУ: ";
	 cin >> count;
	 OZU* OzuArr = new OZU[count];

	 Input(Ozu, OzuArr, count); // создать список ОЗУ

	 PrintAll(OzuArr, count); // печать всего списка ОЗУ

	 Buy(Ozu, OzuArr, count); // купить ОЗУ (динамически задавать и изменять размер массива ОЗУ)

	 SelectFreqPrint(OzuArr, count); // выводить список ОЗУ с частотой больше заданной

	 SelectVolumePrint(OzuArr, count); // выводить список памяти с объемом больше заданного

	 cin.get(); cin.get();
 }

 void Buy(OZU& Tc, OZU*& OzuArr, int& count) {
	 cout << "Всего доступно " << count << " ОЗУ " << endl;
	 cout << "Какой номер ОЗУ купить: ";
	 int num;
	 cin >> num;
	 if (num > count) {
		 cout << "Номер ОЗУ превышает количество ОЗУ!" << endl;
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
		 cout << endl << "Осталось ОЗУ: " << count << endl;
		 PrintAll(OzuArr, count);
	 }
 }

 void Input(OZU& Ozu, OZU*& OzuArr, int count) { // *Написать функции для заполнения и печати одного экземпляра структуры Tiket.
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>
	 for (int i = 0; i < count; i++) {
		 cout << "ОЗУ № " << i + 1 << endl;
		 cout << "Введите название ОЗУ: ";
		 getline(cin, Ozu.Firm);

		 cout << "Введите частоту: ";
		 cin >> Ozu.Freq;
		 cin.ignore(); // убрать символ <ENTER> после работы cin>>

		 cout << "Введите объем: ";
		 cin >> Ozu.Volume;
		 cin.ignore(); // убрать символ <ENTER> после работы cin>>

		 OzuArr[i] = Ozu;
	 }
 }

 void SelectFreqPrint(OZU*& OzuArr, int& count) {
	 cin.ignore(); // убрать символ <ENTER> после работы cin>>
	 cout << "Вывести список памяти с частотой больше заданной: " << endl;
	 float Freq;
	 cout << "Введите частоту: ";
	 cin >> Freq;
	 for (int i = 0; i < count; i++) {
		 OZU Ozu = OzuArr[i];
		 if ( Ozu.Freq >= Freq) {
			 cout << endl
				 << "ОЗУ № " << i + 1 << endl
				 << "Фирма: " << Ozu.Firm << endl
				 << "Частота : " << Ozu.Freq << endl
				 << "Объем : " << Ozu.Volume << endl
				 << endl;
		 }
	 }
 }
 void SelectVolumePrint(OZU*& OzuArr, int& count) {
	 cout << "Вывести список памяти с объемом больше заданного: " << endl;
	 int Volume;
	 cout << "Введите объем памяти: ";
	 cin >> Volume;
	 for (int i = 0; i < count; i++) {
		 OZU Ozu = OzuArr[i];
		 if (Ozu.Volume >= Volume) {
			 cout << endl
				 << "ОЗУ № " << i + 1 << endl
				 << "Фирма: " << Ozu.Firm << endl
				 << "Частота : " << Ozu.Freq << endl
				 << "Объем : " << Ozu.Volume << endl
				 << endl;
		 }
	 }
 }
 void PrintAll(OZU*& OzuArr, int count) {// печать всего списка билетов.
	 for (int i = 0; i < count; i++) {
		 OZU Ozu = OzuArr[i];
		 cout << endl
			 << "ОЗУ № " << i + 1 << endl
			 << "Фирма: " << Ozu.Firm << endl
			 << "Частота : " << Ozu.Freq << endl
			 << "Объем : " << Ozu.Volume << endl
			 << endl;
	 }
 }
 */

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
 /*6. ***Описать структуру Man(Фамилия, Имя, Возраст, Дата рождения).
 Создать массив, предусмотреть:
 - Вывод информации с сортировкой по фамилии или имени;
 - Вывод списка именинников месяца с указанием даты рождения.
 - Изменение размеров массива при добавлении и удалении записей;
 - Поиск по фамилии и имени;
 - Редактирование записи.*/
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
	 cout << "Введите количество людей: ";
	 cin >> count;
	 Man* ManArr = new Man[count];

	 Input(Mn, ManArr, count); // создать список

	 PrintAll(ManArr, count); // печать всего списка

	 DeleteStr(Mn, ManArr, count); // удалить запись

	 EditStr(Mn, ManArr, count); // редактировать запись

	 SelectSnamePrint(ManArr, count); // Поиск по фамилии

	 SelectNamePrint(ManArr, count); // Поиск по имени

	 SelectBirthPrint(ManArr, count); // Поиск по имени

	 SortBySName(ManArr, count); // Сортировка по фамилии

	 SortByName(ManArr, count); // Сортировка по имени


	 cin.get(); cin.get();
 }

 void DeleteStr(Man& Mn, Man*& ManArr, int& count) {
	 cout << "---------------------Всего " << count << " людей -----------------------" << endl;
	 cout << "Введите номер на удаление: ";
	 int num;
	 cin >> num;
	 cin.ignore(); // убрать символ <ENTER> после работы cin

	 if (num > count) {
		 cout << "Номер превышает количество!" << endl;
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
		 cout << endl << "Осталось: " << count << endl;
		 PrintAll(ManArr, count);
	 }
 }

 void EditStr(Man& Mn, Man*& ManArr, int& count) { //- Редактирование записи.
	 cout << "--------------------Всего " << count << " людей ----------------------" << endl;
	 cout << "Введите номер на редактирование: ";
	 int num;
	 cin >> num;
	 cin.ignore(); // убрать символ <ENTER> после работы cin

	 if (num > count) {
		 cout << "Номер превышает количество!" << endl;
		 EditStr(Mn, ManArr, count);
	 }
	 else {
		 Man Mn = ManArr[num - 1];
		 cout << "№ " << num << endl;
		 cout << "Введите новую фамилию: ";
		 getline(cin, Mn.Surname);

		 cout << "Введите новое имя: ";
		 cin >> Mn.Name;
		 cin.ignore(); // убрать символ <ENTER> после работы cin

		 cout << "Введите новую дату (DD MM YYYY): ";
		 cin >> Mn.Date.DD >> Mn.Date.MM >> Mn.Date.YYYY;
		 cin.ignore(); // убрать символ <ENTER> после работы cin

		 ManArr[num - 1] = Mn;
		 PrintAll(ManArr, count);
	 }
 }

 void Input(Man& Mn, Man*& ManArr, int count) { // *Написать функции для заполнения и печати одного экземпляра структуры.
	 cin.ignore(); // убрать символ <ENTER> после работы cin

	 for (int i = 0; i < count; i++) {
		 cout << "№ " << i + 1 << endl;
		 cout << "Введите фамилию: ";
		 getline(cin, Mn.Surname);

		 cout << "Введите имя: ";
		 cin >> Mn.Name;

		 Mn.Date.DD = rand() % 30 + 1;
		 Mn.Date.MM = rand() % 12 + 1;
		 Mn.Date.YYYY = rand() % 30 + 1990;
		 cout << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl;
		 cin.ignore(); // убрать символ <ENTER> после работы cin

		 ManArr[i] = Mn;
	 }
 }

 void SelectSnamePrint(Man*& ManArr, int& count) { //Поиск по фамилии;
	 cin.get();
	 cout << "--------------Поиск по фамилии(нажмите Enter)------------------ " << endl;
	 cout << "Введите фамилию: " << endl;
	 string Surname;
	 cin >> Surname;
	 cin.ignore(); // убрать символ <ENTER> после работы cin

	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 if (Mn.Surname == Surname) {
			 cout << endl
				 << "№ " << i + 1 << endl
				 << "Фамилия: " << Mn.Surname << endl
				 << "Имя : " << Mn.Name << endl
				 << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
				 << endl;
		 }
	 }
 }
 void SelectNamePrint(Man*& ManArr, int& count) {//Поиск по имени;
	 cin.get();
	 cout << "------------------Поиск по имени(нажмите Enter)-------------------" << endl;
	 cout << "Введите имя: " << endl;
	 string Name;
	 cin >> Name;
	 cin.ignore(); // убрать символ <ENTER> после работы cin

	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 if (Mn.Name == Name) {
			 cout << endl
				 << "№ " << i + 1 << endl
				 << "Фамилия: " << Mn.Surname << endl
				 << "Имя : " << Mn.Name << endl
				 << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
				 << endl;
		 }
	 }
 }

 void SelectBirthPrint(Man*& ManArr, int& count) {//Вывод списка именинников месяца с указанием даты рождения.
	 cin.get();
	 cout << "-----------Вывод списка именинников месяца(нажмите Enter)------------------- " << endl;
		 cout << "Введите месяц даты рождения: " << endl;
	 int MM;
	 cin >> MM;
	 cin.ignore(); // убрать символ <ENTER> после работы cin

	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 if (Mn.Date.MM == MM) {
			 cout << endl
				 << "№ " << i + 1 << endl
				 << "Фамилия: " << Mn.Surname << endl
				 << "Имя : " << Mn.Name << endl
				 << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
				 << endl;
		 }
	 }
 }

 void PrintAll(Man*& ManArr, int count) {// печать всего списка студентов.
	 cout << endl << "--------------Общий список(нажмите Enter)------------------- " << endl;
	 cin.get();
	 for (int i = 0; i < count; i++) {
		 Man Mn = ManArr[i];
		 cout << endl
			 << "№ " << i + 1 << endl
			 << "Фамилия: " << Mn.Surname << endl
			 << "Имя : " << Mn.Name << endl
			 << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
			 << endl;
	 }
 }

 void SortBySName(Man*& ManArr, int count) {// Вывод информации с сортировкой по фамилии
	 cin.get();
	 cout << "------------------Вывод информации с сортировкой по фамилии(нажмите Enter)------------------" << endl;
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
			 << "№ " << i + 1 << endl
			 << "Фамилия: " << Mn.Surname << endl
			 << "Имя : " << Mn.Name << endl
			 << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
			 << endl;
	 }
 }


 void SortByName(Man*& ManArr, int count) {// Вывод информации с сортировкой по фамилии
	 cout << "--------------Вывод информации с сортировкой по имени(нажмите Enter)----------------" << endl;
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
			 << "№ " << i + 1 << endl
			 << "Фамилия: " << Mn.Surname << endl
			 << "Имя : " << Mn.Name << endl
			 << "Дата: " << Mn.Date.DD << "\\" << Mn.Date.MM << "\\" << Mn.Date.YYYY << endl
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
