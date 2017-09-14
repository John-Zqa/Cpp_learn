#pragma once

#include <iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	void SetDate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void Display()
	{
		cout << this << endl;
		cout << &this->year << " " << &this->month << " " << &this->day << endl;
		cout << year << "-" << month << "-" << day << endl;
	}
	int GetYear()
	{
		return year;
	}
	int GetMonth()
	{
		return month;
	}
	int GetDay()
	{
		return day;
	}
};
