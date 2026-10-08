#include "Timing.h"


#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

Timing::Timing(){
	//cout<<"Timing constructeur par defaut"<<endl;
	setDay("pas de jour");
	setStart(Time ());
	setDuration(Time ());
}

Timing::Timing(string d, Time h, Time dur){
	//cout<<"Timing constructeur d'initialisation de Timing"<<endl;
	setDay(d);
	setStart(h);
	setDuration(dur);
}

Timing::Timing(const Timing& t){
	//cout<<"Timing constructeur de copie"<<endl;
	setDay(t.day);
	setStart(t.start);
	setDuration(t.duration);
}

Timing::~Timing(){
	//cout<<">>> Timing destructeur <<<"<<endl;
}

void Timing::setDay(string d){
	day = d;
}

void Timing::setStart(Time t){
	start = t;
}

void Timing::setDuration(Time t){
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
    cout << "Evenement le " << day << " à ";
    start.display();
    cout << "pendant ";
    duration.display();
}