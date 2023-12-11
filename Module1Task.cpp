// Module1Task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int second;
    int hour;
    int minute;
};

void Set(Date *d,int day, int month, int year)
{
    if(day >= 1 && day <= 31)
        d->day = day;
    else cout << "Day are in wrong range (1 to 31)" << endl;
    if(month >= 1 && month <= 12)
        d->month = month;
    else cout << "Month are in wrong range (1 to 12)" << endl;
    if(year >=1900 && year <=2100)
        d->year = year;
    else cout << "Year are in wrong range (1900 to 2100)" << endl;
}

void Print(Date *d)
{
    setlocale(LC_ALL, "Russian");
    cout << "Дата: " << d->day << '.' << d->month << '.' << d->year << endl;
}

void Read(Date *d)
{
    int day, month, year;
    cout << "Введите день: ";
    cin >> day;
    cout << "Введите месяц: ";
    cin >> month;
    cout << "Введите год: ";
    cin >> year;
    Set(d, day, month, year);
}

void Set(Time* t, int hour, int minute, int second = 0)
{
    if (second >= 0 && second <= 59)
        t->second = second;
    else cout << "Seconds are in wrong range (0 to 59)" << endl;
    if(minute >= 0 && minute <= 59)
        t->minute = minute;
    else cout << "Minutes are in wrong range (0 to 59)" << endl;
    if(hour >= 0 && hour <= 23)
        t->hour = hour;
    else cout << "Hours are in wrong range (0 to 23)" << endl;
}

void Print(Time* t)
{
    setlocale(LC_ALL, "Russian");
    cout << "Время: " << t->hour << ':' << t->minute << ':' <<t->second << endl;
}

void Read(Time* t)
{
    int hour, minute, second;
    cout << "Введите часы: ";
    cin >> hour;
    cout << "Введите минуты: ";
    cin >> minute;
    cout << "Введите секунды: ";
    cin >> second;
    Set(t, hour, minute, second);
}

int main()
{
    Date* d1 = new Date;
    Set(d1, 1, 12, 2018);
    Print(d1);
    Time* t1 = new Time;
    Set(t1, 17, 12,66);
    Print(t1);
    Read(d1);
    Print(d1);
    Read(t1);
    Print(t1);
    delete d1;
    delete t1;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
