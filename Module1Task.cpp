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

//установка даты
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

//вывод даты в консоль
void Print(Date *d)
{
    setlocale(LC_ALL, "Russian");
    cout << "Дата: " << d->day << '.' << d->month << '.' << d->year << endl;
}

//запись даты с клавиатуры
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

//установка времени
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

//вывод времени в консоль
void Print(Time* t)
{
    setlocale(LC_ALL, "Russian");
    cout << "Время: " << t->hour << ':' << t->minute << ':' <<t->second << endl;
}

//запись даты с клавиатуры
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
    std::cout << "Deploy updated successfuly" << std::endl;
    Date* d1 = new Date; //создаем объект Date
    Set(d1, 1, 12, 2018);
    Print(d1);
    Time* t1 = new Time; // создаем объект Time
    Set(t1, 17, 12,66);
    Print(t1);
    Read(d1);
    Print(d1);
    Read(t1);
    Print(t1);
    delete d1; //очищаем память
    delete t1; //очищаем память
}
