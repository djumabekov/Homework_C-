
/*3. Записать массив строк в файл, расположив каждый элемент массива на отдельной строке с сохранением порядка.*/

/*4. В конец существующего текстового файла записать строку с текстом "До свиданья люди!".*/

#include <iostream> // Input Outup Stream
#include <iomanip>
#include <fstream>  // File Stream: ofstream, ifstream, fstream
#include <string>   // string, getline()
#include <time.h>
using namespace std;
#pragma warning(disable:4996)
#define RAND(min,max)  (rand()%((max)-(min)+1)+(min))
/*
void WriteToFile(string fName, string*& arr, int& size);
int GetFileSize(string fName, int& size);
void AppendToFile(string fName, string*& arr, int& size);
void PrintFile(string fName);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	int size = 10;
	string FileName; // имя файла
	cout << "Введите имя файла: ";
	getline(cin, FileName); // чтение имени файла
	string * arr = new string [size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand()% 80 + 20;
	}
	// ф-ция для записи строк в файл FileName
	WriteToFile(FileName, arr, size);
	GetFileSize(FileName, size);
	AppendToFile(FileName, arr, size);
	PrintFile(FileName);
	cin.get(); cin.get();
}

void WriteToFile(string fName, string*&arr, int &size)
{
	ofstream file;
	file.open(fName);
	if (!file.is_open()) {
		cout << "Error , cant create file " << endl;
	}
	for (int i = 0; i < size; i++) {
		file << arr[i] << "\n";
	}
	cout << "File writting" << endl;
}

// ф-ция определения размера файла
// long long, size_t
int GetFileSize(string fName, int & size) {
	ifstream file(fName);
	if (!file.is_open()) { return 0; }
	file.seekg(0, ios::end); // встать в конец файла
	size = file.tellg(); // получить текущую позицию в файле
	return size; // вернуть размер файла
} // file.close();

void AppendToFile(string fName, string*& arr, int & size){
	ofstream file;
	file.open(fName, ios::app); // открыть для дозаписи

  if (!file.is_open()) { // if( file.is_open() == false )
	  cout << "Ошибка создания и открытия файла \""
		  << fName << "\" для файла!" << endl;
	  return; // выход из ф-ции по ошибке
  }
	  file << "До свиданья люди!"; // разделить старые и новые данные endl-ом
	  cout << "File append" << endl;
}

void PrintFile(string fName)
{
	ifstream file(fName); // открытие файла для чтения
	if (!file.is_open()) {
		cout << "Ошибка открытия файла \"" << fName
			<< "\" для чтения - файл не найден!" << endl;
		return; // выход по ошибке
	}
	string buf; // строковый буфер для чтения из файла
	int i = 0;
	// eof - End Of File
	while (!file.eof()) // цикл пока не конец файла
	{
		getline(file, buf); // чтение строки из файла
		cout << i + 1 << ") " << buf << endl;
		i++;
	}
	cout << "В файле " << i << " строк\n";
}
*/
/*5. Дан текстовый файл. Необходимо создать новый файл, в который переписать из исходного файла все слова, состоящие не менее чем из семи букв.*/
/*
void FileRW(string filenameread, string filenamewrite);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filenameread;
	string filenamewrite;
	cout << "Введите имя файла для чтения :";
	getline(cin, filenameread);
	cout << "Введите имя файла для запись :";
	getline(cin, filenamewrite);

	FileRW(filenameread, filenamewrite);

	cin.get(); cin.get();
}

void FileRW(string filenameread, string filenamewrite) {
	ofstream filewrite;
	ifstream fileread;

	fileread.open(filenameread);
	if (fileread.is_open() != true)
	{
		cout << "Error file is not found" << endl;
	}
	else {
		filewrite.open(filenamewrite);
		while (!fileread.eof())
		{
			string buf;
			fileread >> buf;
			if (buf.size() >= 7) {
				cout << buf << endl;
				filewrite << buf << endl;
			}
		}
		filewrite.flush(); // сбрасывает данные на диск
	}
	cout << "Data successful copied" << endl;
}
*/

/*6. Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен совпадать с порядком строк в заданном файле.*/
/*

void FileRW(string filenameread, string filenamewrite);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filenameread;
	string filenamewrite;
	cout << "Введите имя файла для чтения :";
	getline(cin, filenameread);
	cout << "Введите имя файла для запись :";
	getline(cin, filenamewrite);

	FileRW(filenameread, filenamewrite);

	cin.get(); cin.get();
}

void FileRW(string filenameread, string filenamewrite) {
	ofstream filewrite;
	ifstream fileread;

	fileread.open(filenameread);
	if (!fileread.is_open())
	{
		cout << "Error file is not found" << endl;
	}
	else {
		filewrite.open(filenamewrite);
		if (filewrite) {
			string buf;
			while (getline(fileread, buf)) {
				cout << buf << endl;
				filewrite << buf << endl;
			}
		}
		filewrite.flush(); // сбрасывает данные на диск
		}
	cout << "Data successful copied" << endl;
}
*/


/*6. 7. Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен быть обратным по отношению к порядку строк в заданном файле.
*/

/*
void FileRW(string filenameread, string filenamewrite);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filenameread;
	string filenamewrite;
	cout << "Введите имя файла для чтения :";
	getline(cin, filenameread);
	cout << "Введите имя файла для запись :";
	getline(cin, filenamewrite);

	FileRW(filenameread, filenamewrite);

	cin.get(); cin.get();
}

void FileRW(string filenameread, string filenamewrite) {
	ofstream filewrite;
	ifstream fileread;

	fileread.open(filenameread);
	if (!fileread.is_open())
	{
		cout << "Error file is not found" << endl;
	}
	else {
		int count = 0;
		filewrite.open(filenamewrite);
		if (filewrite) {
			string buf;

			while (getline(fileread, buf)) {
				count++;
				cout << buf << endl;
				//filewrite << buf << endl;
			}
			string * arr = new string[count];
			fileread.clear(); //сбрасываем состояние потока, иначе seekg не работает
			fileread.seekg(0, ios::beg);
			for (int i = count; i > 0; i--) {
				getline(fileread, arr[i-1]);
				cout << "arr[" << i - 1 << "] = " << arr[i - 1] << endl;

			}
			for (int i = 0; i < count; i++) {
				cout << arr[i] << endl;
				filewrite << arr[i] << endl;
			}
		}
		filewrite.flush(); // сбрасывает данные на диск
		}
	cout << "Data successful copied" << endl;
}

*/

/*8. Дан текстовый файл. Добавить в него строку из двенадцати черточек (------------), поместив ее после последней из строк, в которых нет пробела.
Если таких строк нет, то новая строка должна быть добавлена после всех строк имеющегося файла. Результат записать в другой файл.*/
/*
void FileRW(string filename);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filename;
	cout << "Введите имя файла:";
	getline(cin, filename);

	FileRW(filename);

	cin.get(); cin.get();
}

void FileRW(string filename) {
	ofstream filewrite;
	ifstream fileread;

	fileread.open(filename);
	if (!fileread.is_open())
	{
		cout << "Error file is not found" << endl;
	}
	else {
		int count = 0;
		string buf;
		while (getline(fileread, buf)) {
			count++;
			cout << buf << endl;
			//filewrite << buf << endl;
		}
		string* arr = new string[count];
		string* tmpArr = new string[count + 1];

		fileread.clear(); //сбрасываем состояние потока, иначе seekg не работает
		fileread.seekg(0, ios::beg);
		for (int i = 0; i < count; i++) {
			getline(fileread, arr[i]);
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		//char* str = new char[255];
		int strWithSpace = -1;
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < arr[i].size(); j++) {
				if (arr[i].at(j) == ' ') {
					strWithSpace = i;
				}
			}
		}
		cout << "strWithSpace = " << strWithSpace << endl;

		if (strWithSpace != -1) {
			for (int i = 0; i <= strWithSpace; i++) {
				tmpArr[i] = arr[i];
			}
			tmpArr[strWithSpace+1] = "------------";
			for (int i = strWithSpace+2; i < count + 1; i++) {
				tmpArr[i] = arr[i-1];
			}
		}
		else {
			for (int i = 0; i < count; i++) {
				tmpArr[i] = arr[i];
				}
				tmpArr[count] = "------------";
			}
		filewrite.open(filename);
		if (!filewrite.is_open())
		{
			cout << "Error file is not found" << endl;
		}
		else {
			for (int i = 0; i < count + 1; i++) {
				cout << "tmpArr[" << i << "] = " << tmpArr[i] << endl;
				filewrite << tmpArr[i] << endl;
			}
		}
		filewrite.flush(); // сбрасывает данные на диск
	}
	cout << "Data successful copied" << endl;
}

*/

/*9. Дано два текстовых файла. Выяснить, совпадают ли их строки. Если нет, то вывести несовпадающую строку из каждого файла.*/
/*
void FileRW(string filename1, string filename2);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filename1;
	string filename2;
	cout << "Введите имя первого файла:";
	getline(cin, filename1);
	cout << "Введите имя второго файла:";
	getline(cin, filename2);
	FileRW(filename1, filename2);
	cin.get(); cin.get();
}

void FileRW(string filename1, string filename2) {
	ifstream fileread1;
	ifstream fileread2;

	fileread1.open(filename1);
	fileread2.open(filename2);
	if (!fileread1.is_open() || !fileread2.is_open())
	{
		cout << "Error files is not found" << endl;
	}
	else {
		int count1 = 0;
		int count2 = 0;
		string buf1, buf2;
		while (getline(fileread1, buf1)) {
			count1++;
			cout << buf1 << endl;
		}
		while (getline(fileread2, buf2)) {
			count2++;
			cout << buf2 << endl;
		}

		string* arr1 = new string[count1];
		string* arr2 = new string[count2];

		fileread1.clear(); //сбрасываем состояние потока, иначе seekg не работает
		fileread2.clear(); //сбрасываем состояние потока, иначе seekg не работает
		fileread1.seekg(0, ios::beg);
		fileread2.seekg(0, ios::beg);
		int count = count1 < count2 ? count1 : count2;

		for (int i = 0; i < count1; i++) {
			getline(fileread1, arr1[i]);
			cout << "arr1[" << i << "] = " << arr1[i] << endl;
		}
		for (int i = 0; i < count2; i++) {
			getline(fileread2, arr2[i]);
			cout << "arr2[" << i << "] = " << arr2[i] << endl;
		}
		int limit = 0; //считаем количество несовпадений строк
		for (int i = 0; i < count; i++) {
				int limitStr = arr1[i].size() < arr2[i].size() ? arr1[i].size() : arr2[i].size();
				for (int j = 0; j < limitStr; j++) {
					if (arr1[i].at(j) != '\n' || arr2[i].at(j) != '\n') {
						if (arr1[i].at(j) != arr2[i].at(j)) {
							limit += 2;
							cout << "limit = " << limit << endl;
							break;
						}
					}
				}
		}

		string* tmpArr = new string[limit];

		int k = 0;
		for (int i = 0; i < count; i++) {
			int limitStr = arr1[i].size() < arr2[i].size() ? arr1[i].size() : arr2[i].size();
			for (int j = 0; j < limitStr; j++) {
				if (arr1[i].at(j) != '\n' || arr2[i].at(j) != '\n') {
					if (arr1[i].at(j) != arr2[i].at(j)) {
						tmpArr[k] = arr1[i];
						tmpArr[k + 1] = arr2[i];
						k += 2;
						break;
					}
				}
			}
		}
		cout << "Несовпадающие строки из каждого файла: " << endl;
		for (int i = 0; i < limit; i+=2) {
			cout << tmpArr[i] << " != " << tmpArr[i+1] << endl;
		}

	}
}
*/


/*10. Дан текстовый файл. Подсчитать количество символов в нём.

11. Дан текстовый файл. Подсчитать количество строк в нём.

13. Дан текстовый файл. Найти длину самой длинной строки.

14. Дан текстовый файл. Подсчитать количество слов, начинающихся с символа, который задаёт пользователь.
*/
/*
void FileRW(string filename, char userChar);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filename;
	char userChar;
	cout << "Введите имя файла:";
	getline(cin, filename);

	cout << "Введите символ:";
	cin >> userChar;
	cin.ignore();

	FileRW(filename, userChar);

	cin.get(); cin.get();
}

void FileRW(string filename, char userChar) {
	ifstream fileread;

	fileread.open(filename);
	if (!fileread.is_open())
	{
		cout << "Error file is not found" << endl;
	}
	else {
		int countStr = 0;
		int countChr = 0;
		int maxStr = 0;
		string buf;
		while (getline(fileread, buf)) {
			countStr++;
			cout << buf << endl;
		}
		string* arr = new string[countStr];

		fileread.clear(); //сбрасываем состояние потока, иначе seekg не работает
		fileread.seekg(0, ios::beg);
		for (int i = 0; i < countStr; i++) {
			getline(fileread, arr[i]);
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		string* tmpArr = new string[countStr];

		for (int i = 0; i < countStr; i++) {
			tmpArr[i] = " " + arr[i];
			cout << "tmpArr[" << i << "] = " << tmpArr[i] << endl;

		}

		int countWords = 0;
		for (int i = 0; i < countStr; i++) {
			for (int j = 0; j < tmpArr[i].size()-1; j++) {
				if (tmpArr[i].at(j) == ' ' && tmpArr[i].at(j+1) == userChar){
					countWords++;
				}
			}
		}

		for (int i = 0; i < countStr; i++) {
			for (int j = 0; j < arr[i].size(); j++) {
				if (arr[i].at(j)) {
					countChr++;
				}
			}
		}
		maxStr = arr[0].size();
		for (int i = 0; i < countStr - 1; i++) {
			maxStr = maxStr > arr[i+1].size() ? maxStr : arr[i + 1].size();
		}
		cout << "Количество строк = " << countStr << endl;
		cout << "Количество символов = " << countChr << endl;
		cout << "Длина самой длинной строки = " << maxStr << endl;
		cout << "Количество слов, начинающихся с символа " << "\"" << userChar << "\"" << " = " << countWords << endl;
	}
}
*/

/*12. Дан текстовый файл. Удалить из него последнюю строку. Результат записать в другой файл.

15. Дан текстовый файл. Переписать в другой файл все его строки с заменой в них символа 0 на символ 1 и наоборот.*/

void FileRW(string filenameread, string filenamewrite);
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	string filenameread;
	string filenamewrite;
	cout << "Введите имя файла для чтения :";
	getline(cin, filenameread);
	cout << "Введите имя файла для запись :";
	getline(cin, filenamewrite);

	FileRW(filenameread, filenamewrite);

	cin.get(); cin.get();
}

void FileRW(string filenameread, string filenamewrite) {
	ofstream filewrite;
	ifstream fileread;

	fileread.open(filenameread);
	if (!fileread.is_open())
	{
		cout << "Error file is not found" << endl;
	}
	else {
		int count = 0;
		filewrite.open(filenamewrite);
		if (filewrite) {
			string buf;

			while (getline(fileread, buf)) {
				count++;
				cout << buf << endl;
				//filewrite << buf << endl;
			}
			string* arr = new string[count];
			fileread.clear(); //сбрасываем состояние потока, иначе seekg не работает
			fileread.seekg(0, ios::beg);
			for (int i = 0; i < count; i++) {
				getline(fileread, arr[i]);
				cout << "arr[" << i << "] = " << arr[i] << endl;

			}

			for (int i = 0; i < count; i++) {
				for (int j = 0; j < arr[i].size(); j++) {
					if (arr[i].at(j) == '0') {
						arr[i].at(j) = '1';
					}
					else if (arr[i].at(j) == '1') {
						arr[i].at(j) = '0';
					}
				}
			}

			for (int i = 0; i < count - 1; i++) {
				cout << arr[i] << endl;
				filewrite << arr[i] << endl;
			}
		}
		filewrite.flush(); // сбрасывает данные на диск
	}
	cout << "Data successful copied" << endl;
}
