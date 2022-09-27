#include "Time.h"
#include <iostream>
using namespace std;

void Time::Read()
{
	int x, y;
	cout << "first = ";
	cin >> x;
	cout << "second = ";
	cin >> y;
	Init(x, y);
}
bool Time::Init(int x, int y)
{
	first = x;
	second = y;
	if (first <= 0 || second <= 0) {
		first = 0;
		second = 0;
		cout << "Wrong arguments to Init!" << endl;
		return false;
	}
	else {
		return true;
	}
}
void Time::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Time::minutes(int n)
{
	first *= n;
	minut = first + second;
}
void Time::Display2() const
{
	cout << "minutes = " << minut<< endl;
}