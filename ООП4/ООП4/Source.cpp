#include "Header.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Time t;
	cout << "Сегодня " << t.GetDay() << "." << t.GetMonth() << "." << t.GetYear() << endl;
	cout << setfill('0');
	cout << setw(2) << t.GetHour() << ":"  << setw(2) << t.GetMinute() << ":" << setw(2) << t.GetSecond() << endl;
	cout << t.time_day() << endl;
	system("PAUSE");
	return 0;
}