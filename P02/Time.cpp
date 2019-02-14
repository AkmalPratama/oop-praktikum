#include <iostream>
#include "Time.h"

using namespace std;

int Time::n_time = 0;

//ctor tanpa parameter
Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
	n_time++;
}

//ctor dengan parameter
Time::Time(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
	n_time++;
}

//cctor
Time::Time(const Time& T) {
	hour = T.hour;
	minute = T.minute;
	second = T.second;
	n_time++;
}

//dtor
Time::~Time() {
	
}

//Setter & Getter
void Time::setHour(int hour) {
	this->hour = hour;
}

void Time::setMinute(int minute) {
	this->minute = minute;
}

void Time::setSecond(int second) {
	this->second = second; 
}

int Time::getHour() const {
	return hour;
}

int Time::getMinute() const {
	return minute;
}

int Time::getSecond() const {
	return second;
}

//Static function
int Time::countTimeInstance() {
	return n_time;
}

//Konversi ke detik
int Time::convertToSecond() const {
	return 3600 * hour + 60 * minute + second;
}

//Menuliskan waktu ke layar (format: hh:mm:ss)
void Time::printTime() {
	if (hour < 10) {
		cout << 0;
	}
	cout << hour << ":";
	if (minute < 10) {
		cout << 0;
	}
	cout << minute << ":";
	if (second < 10) {
		cout << 0;
	}
	cout << second << endl;
}

//Time Operation
void Time::addTime(const Time& T) {
	int sum = convertToSecond() + T.convertToSecond();
	hour = (sum / 3600) % 24;
	sum -= hour * 3600;
	minute = (sum / 60) % 60;
	sum -= minute * 60;
	second = sum % 60;
}

void Time::decreaseTime(const Time& T) {
	if (!earlierThan(T)) {
		int sum = convertToSecond() - T.convertToSecond();
		hour = (sum / 3600) % 24;
		sum -= hour * 3600;
		minute = (sum / 60) % 60;
		sum -= minute * 60;
		second = sum % 60;
	}
}

bool Time::earlierThan(const Time& T) {
	return convertToSecond() < T.convertToSecond();
}

bool Time::laterThan(const Time& T) {
	return convertToSecond() > T.convertToSecond();
}

