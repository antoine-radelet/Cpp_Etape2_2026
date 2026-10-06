#include "Timimg.h"
#include "Time.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

Timing::Timing(){
	setDay("default");
	setStart(Time ());
	setDuration(Time ());
}

Timing::Timing(string d, Time h, Time dur)
{
setDay(d);
setStart(h);
setDuration(dur);
}

Timing::Timing(const Timing& t){
	setDay(t.day);
	setStart(t.start);
	setDuration(t.duration);
}

Timing::~Timing(){
	cout<<">>> destructeur <<<"<<endl;
}

void Timing::setDay(string d){
	day = d;
}

void Timing::setStart(const Time& t){
	start = t;
}

void Timing::setDuration(const Time& t){
	duration = t;
}

string Timing::getDay()const {
	return day;
}

Time Timing::getDuration()const {
	return duration;
}

Time Timing::getStart()const {
	return start;
}

void Timing::display() const
{
    cout << "Evenement le " << day << " a ";
    start.display();
    cout << "Pendant ";
    duration.display();
}