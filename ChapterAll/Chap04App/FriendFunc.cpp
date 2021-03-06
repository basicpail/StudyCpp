#include <stdio.h>

class Date;
class Time {
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		if (h >= 0 && h < 24)
		{
			hour = h;
		}
		else hour = 0;
		if (m >= 0 && m < 60) { min = m; }
		else min = 0;
		if (s >= 0 && s < 60) { sec = s; }
		else sec = 0;
	}
	void OutToday(Time& t) {
		printf("%d시 %d분 %d초\n",  t.hour, t.min, t.sec);
	}
};

class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, mon, day;
public:
	Date(int y, int m, int d) {
		if (y >= 1990 && y <= 9999) { year = y; }
		else { year = 1900; }
		if (m >= 1 && m <= 12) { mon = m; }
		else { mon = 0; }
		if (d >= 1 && d <= 31) { day = d; }
		else { day = 0; }
	}
	void OutToday(Date& d) {
		printf("%d년 %d월 %d일\n", d.year, d.mon, d.day);
	}
};

int main() {
	Date d(2020, 4, 22);
	Time t(15, 53, 35);
	d.OutToday(d);
	t.OutToday(t);
}