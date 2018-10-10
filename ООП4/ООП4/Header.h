#pragma once
#include <iostream>
#include <atltime.h>
#include <string>
#include <Windows.h>
#include <iomanip>
class Time : public CTime {
	CTime t;	
public:
	Time();
	int GetHour();
	int GetMinute();
	int GetSecond();
	int GetDay();
	int GetDayOfWeek();
	int GetMonth();
	int GetYear();
	std::string time_day();
};