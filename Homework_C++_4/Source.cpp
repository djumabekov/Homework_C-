/*
15. ***Пользователь вводит с клавиатуры размер одного фильма в гигабайтах и скорость интернет-соединения в битах в секунду.
    Посчитать, за сколько часов, минут и секунд скачается фильм.
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
/* 26. ***Пользователь вводит с клавиатуры дробное число.
   Округлить его до двух знаков после запятой и вывести на экран.
   Предусмотреть округление по правилам, то есть,
   чтобы число 12.341 округлялось до 12.34,
   а число 12.345 - до 12.35*/

#include <iostream>
    using namespace std;

int main()
{

    float DrobnoeChislo;

    cout << "Введите с клавиатуры дробное число" << endl;
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
/* 29. **Пользователь вводит целую часть, числитель и знаменатель для простой дроби.
    Перевести эту дробь в десятичную. (Например, дробь: 2 3/8 в десятичном виде: 2.375)*/

    int main()
{

    int CeloeChislo;
    int Chislitel;
    int Znamenatel;
    cout << "Введите с клавиатуры целую часть" << endl;
    cin >> CeloeChislo;//2
    cout << "Введите с клавиатуры числитель" << endl;
    cin >> Chislitel;//3
    cout << "Введите с клавиатуры знаменатель" << endl;
    cin >> Znamenatel;//8

    float PerevodVDesyatichnoe = float(Chislitel) / Znamenatel;
    PerevodVDesyatichnoe += CeloeChislo;
    cout << "PerevodVDesyatichnoe = " << PerevodVDesyatichnoe << endl;

    return 0;
}
***********************************************************************************
/*42. *Пользователь вводит с клавиатуры количество контактов в телеграмме и среднее количество минут, которое тратится в день на общение с каждым человеком их списка.
    Посчитать, сколько времени человек занимается непосредственно работой с учетом 8-часового рабочего дня и получасового перерыва на обед.*/

#include <iostream>
    using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int KolKontaktov;
    int KolMinut;
    int VremyaNaTelegram;
    int RabVremya = 8; //Часов
    int Obed = 30; // Минут

    cout << "Введите количество контактов" << endl;
    cin >> KolKontaktov;//10
    cout << "Введите количество минут" << endl;
    cin >> KolMinut;//5

    RabVremya = RabVremya * 60; //480 минут

    VremyaNaTelegram = KolKontaktov * KolMinut; //50 минут

    RabVremya = RabVremya - VremyaNaTelegram - Obed; //Время на работу

    if (VremyaNaTelegram / 60 >= 1) {
        cout << "Время на телеграм = " << VremyaNaTelegram / 60 << " часов ";
        if (VremyaNaTelegram % 60 > 0) {
            cout << VremyaNaTelegram % 60 << " минут" << endl;
        }
    }
    else {
        cout << "Время на телеграм = " << VremyaNaTelegram % 60 << " минут" << endl;

    };

    if (RabVremya / 60 >= 1) {
        cout << "\nВремя на работу = " << RabVremya / 60 << " часов ";
        if (RabVremya % 60 > 0) {
            cout << RabVremya % 60 << " минут" << endl;
        }
    }
    else {

        cout << "\nВремя на работу = " << RabVremya % 60 << " минут" << endl;

    }
    cout << "Обед = " << Obed << " минут" << endl;

    return 0;
}

***********************************************************************************
/*16. ***Лицензионная копия Windows Vista Business стоит 145$.
    Пользователь вводит количество нелицензионных копий, которые продал пират Вася, их цену в гривнах за штуку, и количество копий, которые он же по доброте душевной раздал своим друзьям забесплатно.
    При стоимости чистого диска 60 коп и примерной стоимости записи 1,20 за 1 диск посчитать чистую прибыль пирата Васи и недополученную прибыль фирмы Microsoft.*/

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
/*6.  ***Написать программу, вычисляющую скорость, с которой бегун пробежал дистанцию.
    Рекомендуемый вид экрана во время выполнения программы приведен ниже:
Вычисление скорости бега.
Введите длину дистанции (метров) -> 1000
Введите время (минут.секунд)-> 3.25
Результаты:
Дистанция: 1000 м
Время: 3 мин 25 сек = 205 сек
Вы бежали со скоростью 17.56 км/час
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int DlinaDistancii; //метр
    float Vremya; //минут.сек
    float V; //скорость

    cout << "Введите длину дистанции в метрах" << endl;
    cin >> DlinaDistancii;//1000
    cout << "Введите количество минут и секунд" << endl;
    cin >> Vremya;//3.25

    int VremyaMin = Vremya; //3

    float VremyaSec = (Vremya - float(VremyaMin)) * 100; //25

    cout << "Время:  = " << VremyaMin << " мин " << VremyaSec << " сек " << endl;

    Vremya = VremyaMin * 60 + VremyaSec; //переводим в сек

    V = (float(DlinaDistancii) / Vremya) * 3.6;

    int V2 = V;
    int V3 = (V - V2) * 100;
    V = float(V2) + (float(V3) / 100); //избавляемся от третьей цифры после запятой

    cout << "Вы бежали со скоростью  = " << V << " км/час" << endl;

    return 0;
}

***********************************************************************************
/*
32. ***Стоимость проезда в маршрутке - 90 тенге. Количество сидячих мест - 20. Количество стоячих - 10.
    За день 50% поездок маршрутка полностью наполнена, 30% - заполнены только сидячие места, 20% - половина сидячих мест пуста.
а) пользователь вводит количество поездок за день, посчитать общую прибыль.
б) пользователь вводит расстояние одной поездки, стоимость бензина и расход бензина.
   Посчитать прибыль с учетом расходов на бензин.
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

    cout << "Введите количество поездок" << endl;
    cin >> KolPoezdokVDen;//10
    cout << "Введите растояние одной поездки, км" << endl;
    cin >> Rastoyanie;//10
    cout << "Введите стоимость бензина" << endl;
    cin >> StoimostBenzina;//160
    cout << "Введите расход бензина на 100 км" << endl;
    cin >> RashodBenzina;//12

    int DohodPolnostuZapolnena = (KolPoezdokVDen * 0.5) * (KolSidyachihMest + KolStoyachuhMest) * Stoimost; //доход с поездок когда полностью заполнена
    cout << "Доход когда полностью заполнена  " << DohodPolnostuZapolnena << " тенге" << endl;

    int DohodZapolnenaNa30 = (KolPoezdokVDen * 0.3) * KolSidyachihMest * Stoimost; //доход с поездок когда заполнена на 30%
    cout << "Доход когда заполнены только сидячие места " << DohodZapolnenaNa30 << " тенге" << endl;

    int DohodZapolnenaNa20 = (KolPoezdokVDen * 0.2) * (KolSidyachihMest * 0.5) * Stoimost; //доход с поездок когда заполнена на 30%
    cout << "Доход когда заполнены сидячие места заполнены на половину " << DohodZapolnenaNa20 << " тенге" << endl;

    int RashodVDen = StoimostBenzina * ((KolPoezdokVDen * Rastoyanie) / 100 * RashodBenzina);
    cout << "Расходы на бензин в день " << RashodVDen << " тенге" << endl;

    int Itogo = (DohodPolnostuZapolnena + DohodZapolnenaNa30 + DohodZapolnenaNa20) - RashodVDen;

    cout << "Чистая прибыль с учетом расходов на бензин " << Itogo << " тенге" << endl;

    return 0;
}

