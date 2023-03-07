#ifndef TIME_H
#define TIME_H

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	Time(int sethours, int setminutes, int setseconds);
	void setHour(int sethour);
	int getHour();
	void setMinute(int setminute);
	int getMinute();
	void setSecond(int setsecond);
	int getSecond();
	Time find_difference(const Time other_time) const;
	void print();
};

#endif // !TIME