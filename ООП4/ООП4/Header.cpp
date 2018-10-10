#include "Header.h"

Time::Time() {
	t = CTime::GetCurrentTime();
};

std::string Time::time_day() {
	std::string output;
	int a = t.GetHour();
	switch (a) {
	case 22:
	case 23:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		output = "Ноченька";
		break;
	case 7:
	case 8:
	case 9:
	case 10:
		output = "Утречко";
		break;
	case 11:
	case 12:
	case 13:
		output = "Примерно полдень";
		break;
	case 14:
	case 15:
	case 16:
	case 17:
		output = "Денёк";
		break;
	case 18:
	case 19:
	case 20:
	case 21:
		output = "Вечерочек";
		break;
	}
	return output;
};

int Time::GetHour() {
	return t.GetHour();
};

int Time::GetMinute() {
	return t.GetMinute();
};

int Time::GetSecond() {
	return t.GetSecond();
};

int Time::GetDay() {
	return t.GetDay();
};

int Time::GetDayOfWeek() {
	return t.GetDayOfWeek();
};

int Time::GetMonth() {
	return t.GetMonth();
};

int Time::GetYear() {
	return t.GetYear();
};