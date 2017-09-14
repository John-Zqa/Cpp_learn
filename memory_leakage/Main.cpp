// Main.cpp : 定义控制台应用程序的入口点。
//

#include "Date.h"

int main()
{
	Date today, t;
	today.SetDate(2016, 10, 17);
	t.SetDate(2017, 12, 18);
	cout << "One day is:";
	today.Display();
	cout << "the other day is:";
	t.Display();
	cout << sizeof(t) << endl;
	cout << endl;

	void *a;
	a = &t;
	cout << a << endl;
	cout << *((int*)a) << endl;

	a = (int*)a + 1;
	cout << a << endl;
	cout << *((int*)a) << endl;

	a = (int*)a + 1;
	cout << a << endl;
	cout << *((int*)a) << endl;

	a = (int*)a + 1;
	cout << a << endl;
	cout << *((int*)a) << endl;

	a = (int*)a + 1;
	cout << a << endl;
	cout << *((int*)a) << endl;

	a = (int*)a + 1;
	cout << a << endl;
	cout << *((int*)a) << endl;
	
	return 0;
}
