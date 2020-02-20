#include "myDate.h"
#include <iostream>
using namespace std;

myDate::myDate(){
	month = 5;
	day = 11;
	year = 1959;
}

myDate::myDate(int M, int D, int Y){
	if ((M <= 12) && (D <= 31) && (Y >= 0)) {
		if (M != 2) {
			if ((M == 4 || M == 6 || M == 9 || M == 11) && (D <= 30)) {
				month = M;
				day = D;
				year = Y;
			}
			else {
				month = M;
				day = D;
				year = Y;
			}
		}
		else {
			if ((Y % 4 == 0) || (Y && 400 == 0) && (D <= 29)) {
				month = M;
				day = D;
				year = Y;
			}
			else if (D <= 28) {
				month = M;
				day = D;
				year = Y;
			}
			else {
				month = 5;
				day = 11;
				year = 1959;
			}
		}
	}
	else {
		month = 5;
		day = 11;
		year = 1959;
	}
}

void myDate::display(){
	string m = "";
	if (month == 1)
		m = "January";
	else if (month == 2)
		m = "February";
	else if (month == 3)
		m = "March";
	else if (month == 4)
		m = "April";
	else if (month == 5)
		m = "May";
	else if (month == 6)
		m = "June";
	else if (month == 7)
		m = "July";
	else if (month == 8)
		m = "August";
	else if (month == 9)
		m = "September";
	else if (month == 10)
		m = "October";
	else if (month == 11)
		m = "November";
	else if (month == 12)
		m = "December";

	cout << m + " " + to_string(day) + ", " + to_string(year);
}

void myDate::increaseDate(int N){
}

void myDate::decreaseDate(int N){
}

int myDate::daysBetween(myDate D){
	return 0;
}

int myDate::getMonth(){
	return month;
}

int myDate::getDay(){
	return day;
}

int myDate::getYear(){
	return year;
}

int myDate::dayOfYear(){
	return 0;
}

std::string myDate::dayName(){
	return std::string();
}

int Greg2Julian(int m, int d, int y){
	int jd = d-32075+1461*(y+4800+(m-14)/12)/4+367*(m-2-(m-14)/12*12)/12-3*((y+4900+(m-14)/12)/100)/4;
	return jd;
}

void Julian2Greg(int jd, int &month, int &day, int &year){
	int L = jd + 68569;
	int N = 4 * L / 146097;
	L = L - (146097 * N + 3) / 4;
	int I = 400 * (L + 1) / 1461001;
	L = L - 1461 * I / 4 + 31;
	int J = 80 * L / 2447;
	int K = L - 2447 * J / 80;
	L = J / 11;
	J = J + 2 - 12 * L;
	I = 100 * (N - 49) + I + L;

	day = K;
	month = J;
	year = I;
}
