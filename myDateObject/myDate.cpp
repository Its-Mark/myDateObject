#include "myDate.h"

myDate::myDate(){
	month = 5;
	day = 11;
	year = 1959;
}

myDate::myDate(int M, int D, int Y){
	month = M;
	day = D;
	year = Y;
}

void myDate::display(){
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
