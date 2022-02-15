#include <iostream>
#include <Windows.h>  // Sleep() 
using namespace std;

________________________________________________________________________
/*5. *������� ����������, ������� ������� ���������� � ��������,
� ��������� �������:*/

int main() {

    // char - character - ���� ������

    cout << "Vasa" << "\t\t\t" << "FirstName" << "\n"
        << "Pupkin" << "\t\t\t" << "LastName" << "\n"
        << "25" << "\t\t\t" << "Age" << "\n"
        << "student of computer" << "\t" << "Status" << "\n"
        << "academy \"STEP\"" << "\n";

    cin.get(); // �������� ������� ����� <ENTER>
}

________________________________________________________________________
/*8. * *������� ����������, ������� ������� �� ������� ����� :*/

int main() {

    // char - character - ���� ������

    cout << "U lukomor�a dub zelenij," << "\a" << "\n"; Sleep(1500);
    cout << "Zlataya zep na dupe tom," << "\a" << "\n"; Sleep(1300);
    cout << "I dnem i nochju kot uchenij" << "\a" << "\n"; Sleep(1300);
    cout << "vse hodit po cepi krugom\"" << "\a" << "\n"; Sleep(1300);
    cout << "academy \"STEP\"" << "\a" << "\n"; Sleep(1000);

    cin.get(); // �������� ������� ����� <ENTER>
}
________________________________________________________________________

/*9. **������� ����������, ������� ������� �� ������� �����:*/

int main() {

    // char - character - ���� ������

    cout << "Lish u teba poet" << "\n"
        << "\tKrilatij slova zvuk," << "\n"
        << "\t\thvataet na letu" << "\n"
        << "\t\t\tI zakreplaet vdrug �" << "\n"
        << "\t\t\t\tTo tomnij bred dushi," << "\n"
        << "\t\t\t\t\tto trav neasnij zapah" << "\n";

    cin.get(); // �������� ������� ����� <ENTER>
}
________________________________________________________________________

/*11. **������� ����������, ������� ������� �� ����� ��������� �������:*/

void printHeaderTable()
{
    int i;

    cout << char(43);

    for (i = 1; i <= 8; i++)
    {
        cout << char(45);
    }

    cout << char(43);

    for (i = 1; i <= 32; i++)
    {
        cout << char(45);
    }
    cout << char(43) << "\n";
};

void printFooterTable()
{
    int i;

    cout << char(43);

    for (i = 1; i <= 8; i++)
    {
        cout << char(45);
    }

    cout << char(43);

    for (i = 1; i <= 32; i++)
    {
        cout << char(45);
    }
    cout << char(43) << "\n";
};

void printTextInTable(string simvol, string opisanie)
{
    if (simvol != "Simvol ") {
        cout << "|" << simvol << " \t |";
        cout << opisanie << " \t  |" << "\n";
    }
    else {
        cout << "|" << simvol << " |";
        cout << "\t" << opisanie << " \t  |" << "\n";
    }

};

void printTable()
{
    string simvolArr[9] = {
   "Simvol ", "\\n", "\\r", "\\a",
    "\\b", "\\t", "\\\\",
    "\\\'", "\\\"" };

    string opisanieArr[9] = {
"Opisanie\t", "Perehod no novuyu stroku", "Vozvrat karretki\t",
"Podacha zvukovogo signala", "Zateret odin simvol\t", "Tabulacia\t\t",
"Vivod \\\t\t", "Vivod \\\'\t\t ", "Vivod \\\"\t\t" };

    int i;

    for (i = 0; i < 9; i++) {
        string mySimvol = simvolArr[i];
        string myOpisanie = opisanieArr[i];
        printHeaderTable();
        printTextInTable(mySimvol, myOpisanie);
    };
    printFooterTable();
}

int main() {

    printTable();

    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*10. ������� ����������, ������� ������� �� ����� ��������� �������:
(������������ �������, ������������ ������������������ ���������, �������� � ���������)*/

void printHeaderTable()
{
    int i;

    cout << char(201);

    for (i = 1; i <= 43; i++)
    {
        cout << char(205);
    };

    cout << char(187) << "\n";
};

void printFirstFooterTable()
{
    int i;
    int j;
    cout << char(179);

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 10; j++)
        {
            cout << char(205);
        };

        if (i < 4) {
            cout << char(194);
        }

    };
    cout << char(179) << "\n";
};

void printSecondFooterTable()
{
    int i;

    cout << char(200);

    for (i = 1; i <= 43; i++)
    {
        cout << char(205);
    };

    cout << char(188) << "\n";
};

void printFirstTextInTable(string opisanie)
{

    cout << char(179) << " \t\t" << opisanie << "   \t\t    " << char(179) << "\n";


};

void printSecondTextInTable(string vremyaGoda)
{
    cout << char(179) << "     " << vremyaGoda;

    if (vremyaGoda == "Osen ") {
        cout << char(179) << "\n";
        printSecondFooterTable();
    }
};


void printTable()
{
    string vremyaGodaArr[4] = {
   "Zima ", "Vesna", "Leto ", "Osen "
    };

    string myOpisanie = "Vremena goda";
    int i;

    printHeaderTable();
    printFirstTextInTable(myOpisanie);
    printFirstFooterTable();

    for (i = 0; i <= 4; i++) {
        string myVremyaGoda = vremyaGodaArr[i];
        printSecondTextInTable(myVremyaGoda);
    };

}
int main() {
    printTable();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*��������������� ������ (������� �����, ������� �� ����� � ��) ����� ����������� ��������.*/
/*12. ***����������� ����������, ������� ������� �� ������� ������� (������� �� ��������)*/

void printParus()
{
    int i;

    for (i = 1; i <= 8; i++)
    {
        cout << char(32);
    };

    cout << char(42) << "\n";

    for (i = 1; i <= 7; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(42) << "\n";

    for (i = 1; i <= 6; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(32) << char(32) << char(42) << "\n";
};

void printPaluba()
{
    int i;

    for (i = 1; i <= 17; i++) {
        cout << char(42);
    };
    cout << "\n";
    cout << char(32) << char(42);
    for (i = 1; i <= 13; i++) {
        cout << char(32);
    };
    cout << char(42) << "\n";
    cout << char(32) << char(32);
    for (i = 1; i <= 13; i++) {
        cout << char(42);
    };
};


int main() {
    printParus();
    printPaluba();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*13. *����������� ����������, ������� ������� �� ������� ���� (������� �� ��������)*/

void printRombTop()
{
    int i;

    for (i = 1; i <= 3; i++)
    {
        cout << char(32);
    };

    cout << char(42) << "\n";

    for (i = 1; i <= 2; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(42) << "\n";

    cout << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << "\n";
};

void printRombBot()
{
    int i;

    cout << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << "\n";

    for (i = 1; i <= 2; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(42) << "\n";

    for (i = 1; i <= 3; i++)
    {
        cout << char(32);
    };

    cout << char(42) << "\n";
};


int main() {
    printRombTop();
    printRombBot();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*14. *����������� ����������, ������� ������� �� ������� ����� (������� �� ��������)*/

void printHouseTop()
{
    int i;

    for (i = 1; i <= 4; i++)
    {
        cout << char(32);
    };

    cout << char(42) << "\n";

    for (i = 1; i <= 2; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(32) << char(42) << "\n";

    cout << char(32) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(42) << "\n";

    cout << char(42);
    for (i = 1; i <= 7; i++)
    {
        cout << char(32);
    };
    cout << char(42) << "\n";

    for (i = 1; i <= 9; i++)
    {
        cout << char(42);
    };
    cout << "\n";
};

void printHouseBot()
{
    int i;

    cout << char(42);

    for (i = 1; i <= 7; i++)
    {
        cout << char(32);
    };
    cout << char(42) << "\n";

    cout << char(42);
    for (i = 1; i <= 7; i++)
    {
        cout << char(32);
    };
    cout << char(42) << "\n";
    for (i = 1; i <= 9; i++)
    {
        cout << char(42);
    };

    cout << "\n";
};


int main() {
    printHouseTop();
    printHouseBot();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*15. ***����������� ����������, ������� ������� �� ������� ������ (������� �� ��������)*/

void printPeizazh()
{
    int i;

    for (i = 1; i <= 15; i++)
    {
        cout << char(32);
    };

    cout << char(42) << "\n";

    for (i = 1; i <= 4; i++)
    {
        cout << char(32);
    };
    cout << char(42);

    for (i = 1; i <= 9; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(42) << "\n";

    for (i = 1; i <= 3; i++)
    {
        cout << char(32);
    };
    cout << char(42) << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << "\n";
    cout << char(32) << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << char(32) << char(42) << char(32) << char(42) << char(32) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(42) << "\n";
    cout << char(32) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(42) << char(32) << char(32) << char(32) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32) << char(42) << "\n";

    for (i = 1; i <= 21; i++)
    {
        cout << char(42);
    };
    cout << "\n";
};

int main() {
    printPeizazh();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*16. **����������� ����������, ������� ������� �� ������� ���� (������� �� ��������)*/

void printCicle()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        cout << char(32);
    };

    for (i = 1; i <= 6; i++)
    {
        cout << char(42);
    };

    cout << "\n";


    cout << char(32) << char(32) << char(42) << char(42) << char(42)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(42) << char(42) << char(42) << "\n";
    cout << char(32) << char(42) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(32) << char(32) << char(42) << char(42) << "\n";
    cout << char(42) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32) << char(42) << char(42) << "\n";
    cout << char(32) << char(42) << char(42) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(32) << char(32) << char(42) << char(42) << "\n";
    cout << char(32) << char(32) << char(42) << char(42) << char(42)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(42) << char(42) << char(42) << "\n";

    for (i = 1; i <= 5; i++)
    {
        cout << char(32);
    };

    for (i = 1; i <= 6; i++)
    {
        cout << char(42);
    };

    cout << "\n";

};

int main() {
    printCicle();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*17. **����������� ����������, ������� ������� �� ������� ����, ��������� � ������� (������� �� ��������)*/

void printCicleinSquare()
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        cout << char(42);
    };
    cout << "\n";
    cout << char(42);

    for (i = 1; i <= 6; i++)
    {
        cout << char(32);
    };
    for (i = 1; i <= 6; i++)
    {
        cout << char(42);
    };
    for (i = 1; i <= 6; i++)
    {
        cout << char(32);
    };
    cout << char(42) << "\n";


    cout << char(42) << char(32) << char(32) << char(32) << char(42) << char(42) << char(42)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(42) << char(42) << char(42) << char(32) << char(32) << char(32) << char(42) << "\n";
    cout << char(42) << char(32) << char(32) << char(42) << char(42) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(42) << char(42) << char(32) << char(32) << char(42) << "\n";
    cout << char(42) << char(32) << char(42) << char(42) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(42) << char(42) << char(32) << char(42) << "\n";
    cout << char(42) << char(32) << char(32) << char(42) << char(42) << char(32) << char(32) << char(32)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(42) << char(42) << char(32) << char(32) << char(42) << "\n";
    cout << char(42) << char(32) << char(32) << char(32) << char(42) << char(42) << char(42)
        << char(32) << char(32) << char(32) << char(32) << char(32) << char(32)
        << char(42) << char(42) << char(42) << char(32) << char(32) << char(32) << char(42) << "\n";

    cout << char(42);
    for (i = 1; i <= 6; i++)
    {
        cout << char(32);
    };
    for (i = 1; i <= 6; i++)
    {
        cout << char(42);
    };
    for (i = 1; i <= 6; i++)
    {
        cout << char(32);
    };

    cout << char(42);
    cout << "\n";
    for (i = 1; i <= 20; i++)
    {
        cout << char(42);
    };
    cout << "\n";

};

int main() {
    printCicleinSquare();
    cin.get(); // �������� ������� ����� <ENTER>
};
________________________________________________________________________

/*20. ***����������� ����������, ������� ������� �� ������� ��������� �����:*/
int main() {

    cout << "#include <iostream> //eto biblioteka" << "\n"
        << "using namespace std;" << "\n"
        << "int main()" << "\n"
        << "{" << "\n"
        << "   \cout " << "<<" << "  \"\\" << char(110) << "\\" << char(97) << "\\" << char(97) << "\\" << char(110)
        << "Hello world\"  " << " \<\< " << "endl;" << "\n"
        << "}" << "\n";
    cin.get(); // �������� ������� ����� <ENTER>
}