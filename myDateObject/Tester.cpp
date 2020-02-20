#include "myDate.h"
#include <iostream>
using namespace std;

int main() {
	myDate date = myDate(2,29,2020);
	date.display();
	int jd = Greg2Julian(date.getMonth, date.getDay, date.getYear);
	cout << "\n";
	cout << jd;
	return 0;
}