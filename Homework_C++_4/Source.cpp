/*
15. ***������������ ������ � ���������� ������ ������ ������ � ���������� � �������� ��������-���������� � ����� � �������.
    ���������, �� ������� �����, ����� � ������ ��������� �����.
*/
int main()
{
    double FilmSizeAtGb;
    long long FilmSizeAtBit;
    int InternetSpeedAtBitOfSec;

    double CountSecForDownloadFilm;
    int FullSumOfSales;

    double H;
    double M;
    int S;

    cout << "Vvedite razmer filma v Gb : \n";
    cin >> FilmSizeAtGb;

    cout << "Vvedite skorost interneta Bit/Sec : \n";
    cin >> InternetSpeedAtBitOfSec;

    FilmSizeAtBit = FilmSizeAtGb * 1024 * 1024 * 1024 * 8; // perevodim razmer filma v bit'y

    cout << "Razmer filma v Bit :" << FilmSizeAtBit << "\n";

    CountSecForDownloadFilm = FilmSizeAtBit / InternetSpeedAtBitOfSec; // Kolichestvo secund neobhodimogo na skachivaniya filma

    cout << "Kolichestvo secund neobhodimogo na skachivanie filma :" << long(CountSecForDownloadFilm) << "\n";

    H = CountSecForDownloadFilm / 3600; //Vychislyaem chasy

    M = (double(H) - int(H)) * 60; //Vychislyaem minuty

    S = (double(M) - int(M)) * 60; //Vychislyaem secundy

    cout << "Vremya skachivaniya filma = " << int(H) << ":" << int(M) << ":" << int(S) << "\n";

    return 0;
}
***********************************************************************************
/* 26. ***������������ ������ � ���������� ������� �����.
   ��������� ��� �� ���� ������ ����� ������� � ������� �� �����.
   ������������� ���������� �� ��������, �� ����,
   ����� ����� 12.341 ����������� �� 12.34,
   � ����� 12.345 - �� 12.35*/

#include <iostream>
    using namespace std;

int main()
{

    float DrobnoeChislo;

    cout << "������� � ���������� ������� �����" << endl;
    cin >> DrobnoeChislo;//12.345

    int CeloeChislo = DrobnoeChislo;
    float ChisloPosleZapyatoi = (DrobnoeChislo - CeloeChislo) * 1000;

    if (int(ChisloPosleZapyatoi) % 10 >= 5)
    {
        ChisloPosleZapyatoi += 10;
    }

    ChisloPosleZapyatoi = int(ChisloPosleZapyatoi) / 10;

    DrobnoeChislo = CeloeChislo + ChisloPosleZapyatoi / 100;
    cout << "DrobnoeChislo = " << DrobnoeChislo << endl;

    return 0;
}

***********************************************************************************
/* 29. **������������ ������ ����� �����, ��������� � ����������� ��� ������� �����.
    ��������� ��� ����� � ����������. (��������, �����: 2 3/8 � ���������� ����: 2.375)*/

    int main()
{

    int CeloeChislo;
    int Chislitel;
    int Znamenatel;
    cout << "������� � ���������� ����� �����" << endl;
    cin >> CeloeChislo;//2
    cout << "������� � ���������� ���������" << endl;
    cin >> Chislitel;//3
    cout << "������� � ���������� �����������" << endl;
    cin >> Znamenatel;//8

    float PerevodVDesyatichnoe = float(Chislitel) / Znamenatel;
    PerevodVDesyatichnoe += CeloeChislo;
    cout << "PerevodVDesyatichnoe = " << PerevodVDesyatichnoe << endl;

    return 0;
}
***********************************************************************************
/*42. *������������ ������ � ���������� ���������� ��������� � ���������� � ������� ���������� �����, ������� �������� � ���� �� ������� � ������ ��������� �� ������.
    ���������, ������� ������� ������� ���������� ��������������� ������� � ������ 8-�������� �������� ��� � ������������ �������� �� ����.*/

#include <iostream>
    using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int KolKontaktov;
    int KolMinut;
    int VremyaNaTelegram;
    int RabVremya = 8; //�����
    int Obed = 30; // �����

    cout << "������� ���������� ���������" << endl;
    cin >> KolKontaktov;//10
    cout << "������� ���������� �����" << endl;
    cin >> KolMinut;//5

    RabVremya = RabVremya * 60; //480 �����

    VremyaNaTelegram = KolKontaktov * KolMinut; //50 �����

    RabVremya = RabVremya - VremyaNaTelegram - Obed; //����� �� ������

    if (VremyaNaTelegram / 60 >= 1) {
        cout << "����� �� �������� = " << VremyaNaTelegram / 60 << " ����� ";
        if (VremyaNaTelegram % 60 > 0) {
            cout << VremyaNaTelegram % 60 << " �����" << endl;
        }
    }
    else {
        cout << "����� �� �������� = " << VremyaNaTelegram % 60 << " �����" << endl;

    };

    if (RabVremya / 60 >= 1) {
        cout << "\n����� �� ������ = " << RabVremya / 60 << " ����� ";
        if (RabVremya % 60 > 0) {
            cout << RabVremya % 60 << " �����" << endl;
        }
    }
    else {

        cout << "\n����� �� ������ = " << RabVremya % 60 << " �����" << endl;

    }
    cout << "���� = " << Obed << " �����" << endl;

    return 0;
}

***********************************************************************************
/*16. ***������������ ����� Windows Vista Business ����� 145$.
    ������������ ������ ���������� �������������� �����, ������� ������ ����� ����, �� ���� � ������� �� �����, � ���������� �����, ������� �� �� �� ������� �������� ������ ����� ������� �����������.
    ��� ��������� ������� ����� 60 ��� � ��������� ��������� ������ 1,20 �� 1 ���� ��������� ������ ������� ������ ���� � �������������� ������� ����� Microsoft.*/

    int main()
{

    int const StoimostWVB = 145;

    int const StoimostDiska = 60;

    float const StoimostZapisi = 1.20;

    int KolNelicKopiy;

    int CenaNelicKopiy;

    int RazdalBesplatno;

    float ChistayaPribyl;

    float UbytokMS;

    cout << "Vvedite kol-vo nelic kopiy WVB: \n";
    cin >> KolNelicKopiy;

    cout << "Vvedite cenu nelic kopiy WVB: \n";
    cin >> CenaNelicKopiy;

    cout << "Kol-vo kopiy WVB rozdannyh besplatno: \n";
    cin >> RazdalBesplatno;

    cout << "Chistaya pribyl pirata Vasi:" << ((KolNelicKopiy - RazdalBesplatno) * CenaNelicKopiy) - (KolNelicKopiy * StoimostDiska * StoimostZapisi) << "\n";
    cout << "Ubytok MS:" << KolNelicKopiy * StoimostWVB << "\n";

    return 0;
}

***********************************************************************************
/*6.  ***�������� ���������, ����������� ��������, � ������� ����� �������� ���������.
    ������������� ��� ������ �� ����� ���������� ��������� �������� ����:
���������� �������� ����.
������� ����� ��������� (������) -> 1000
������� ����� (�����.������)-> 3.25
����������:
���������: 1000 �
�����: 3 ��� 25 ��� = 205 ���
�� ������ �� ��������� 17.56 ��/���
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int DlinaDistancii; //����
    float Vremya; //�����.���
    float V; //��������

    cout << "������� ����� ��������� � ������" << endl;
    cin >> DlinaDistancii;//1000
    cout << "������� ���������� ����� � ������" << endl;
    cin >> Vremya;//3.25

    int VremyaMin = Vremya; //3

    float VremyaSec = (Vremya - float(VremyaMin)) * 100; //25

    cout << "�����:  = " << VremyaMin << " ��� " << VremyaSec << " ��� " << endl;

    Vremya = VremyaMin * 60 + VremyaSec; //��������� � ���

    V = (float(DlinaDistancii) / Vremya) * 3.6;

    int V2 = V;
    int V3 = (V - V2) * 100;
    V = float(V2) + (float(V3) / 100); //����������� �� ������� ����� ����� �������

    cout << "�� ������ �� ���������  = " << V << " ��/���" << endl;

    return 0;
}

***********************************************************************************
/*
32. ***��������� ������� � ��������� - 90 �����. ���������� ������� ���� - 20. ���������� ������� - 10.
    �� ���� 50% ������� ��������� ��������� ���������, 30% - ��������� ������ ������� �����, 20% - �������� ������� ���� �����.
�) ������������ ������ ���������� ������� �� ����, ��������� ����� �������.
�) ������������ ������ ���������� ����� �������, ��������� ������� � ������ �������.
   ��������� ������� � ������ �������� �� ������.
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int const Stoimost = 90;
    int const KolSidyachihMest = 20;
    int const KolStoyachuhMest = 10;

    int KolPoezdokVDen;
    int Rastoyanie;
    int StoimostBenzina;
    int RashodBenzina;

    cout << "������� ���������� �������" << endl;
    cin >> KolPoezdokVDen;//10
    cout << "������� ��������� ����� �������, ��" << endl;
    cin >> Rastoyanie;//10
    cout << "������� ��������� �������" << endl;
    cin >> StoimostBenzina;//160
    cout << "������� ������ ������� �� 100 ��" << endl;
    cin >> RashodBenzina;//12

    int DohodPolnostuZapolnena = (KolPoezdokVDen * 0.5) * (KolSidyachihMest + KolStoyachuhMest) * Stoimost; //����� � ������� ����� ��������� ���������
    cout << "����� ����� ��������� ���������  " << DohodPolnostuZapolnena << " �����" << endl;

    int DohodZapolnenaNa30 = (KolPoezdokVDen * 0.3) * KolSidyachihMest * Stoimost; //����� � ������� ����� ��������� �� 30%
    cout << "����� ����� ��������� ������ ������� ����� " << DohodZapolnenaNa30 << " �����" << endl;

    int DohodZapolnenaNa20 = (KolPoezdokVDen * 0.2) * (KolSidyachihMest * 0.5) * Stoimost; //����� � ������� ����� ��������� �� 30%
    cout << "����� ����� ��������� ������� ����� ��������� �� �������� " << DohodZapolnenaNa20 << " �����" << endl;

    int RashodVDen = StoimostBenzina * ((KolPoezdokVDen * Rastoyanie) / 100 * RashodBenzina);
    cout << "������� �� ������ � ���� " << RashodVDen << " �����" << endl;

    int Itogo = (DohodPolnostuZapolnena + DohodZapolnenaNa30 + DohodZapolnenaNa20) - RashodVDen;

    cout << "������ ������� � ������ �������� �� ������ " << Itogo << " �����" << endl;

    return 0;
}

