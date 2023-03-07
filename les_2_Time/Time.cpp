#include "Time.h"
#include<iostream>

Time::Time()
{
	hour = 0;
	minute = 0;
	hour = 0;
}
Time::Time(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
void Time::setHour(int hour)
{
	if (hour < 0 || hour > 24) {
		throw std::exception("Not valid hour");
	}
	this->hour = hour;
}
int Time::getHour()
{
	return hour;
}
void Time::setMinute(int minute)
{
	if (minute < 0 || minute>60) {
		throw std::exception("Not valid minute");
	}
	this->minute = minute;
}
int Time::getMinute()
{
	return minute;
}
void Time::setSecond(int second)
{
	if (second < 0 || second>60) {
		throw std::exception("Note valid second");
	}
	this->second = second;
}
int Time::getSecond()
{
	return second;
}
void Time::print() const
{
	std::cout << hour << " " << minute << " " << second; 
}