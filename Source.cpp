#include <iostream>
using namespace std;

class DateClass
{
	int m_day;
	int m_mounth;
	int m_year;
public:
	void setDate(int day, int mounth, int year)
	{
		m_day = day;
		m_mounth = mounth;
		m_year = year;
	}
	void print()
	{
		cout << m_day << "/" << m_mounth << "/" << m_year << "\n";
	}
	void copyFrom(const DateClass& d)
	{
		m_day = d.m_day;
		m_mounth = d.m_mounth;
		m_year = d.m_year;
	}
};

int main()
{
	DateClass date;
	date.setDate(25, 10, 2021);
	DateClass copy;
	copy.copyFrom(date);
	copy.print();
	return 0;
}