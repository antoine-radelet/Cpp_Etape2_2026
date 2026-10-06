#include "Time.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

Time::Time(){
	cout<<"constructeur par defaut"<<endl;
	setHour(0);
	setMinute(0);
}

Time::Time(int h,int m){
	cout<<"constructeur d'initialisation d'heure"<<endl;
	setHour(h);
	setMinute(m);
}

Time::Time(int d){
	cout<<"constructeur d'initialisation de durée"<<endl;
	int h=d/60;
	int m=d%60;
	setHour(h);
	setMinute(m);
}

Time::Time(const Time& t){
	cout<<"constructeur de copie"<<endl;
	setHour(t.hour);
	setMinute(t.min);
}

Time::~Time(){
	cout<<">>> destructeur <<<"<<endl;
}

void Time::setHour(int h){
	if(h<0 or h > 23)return;
	hour=h;
}

void Time::setMinute(int m){
	if(m<0 or m > 60)return;
	min=m;
}

int Time::getHour()const {
  return hour;
}

int Time::getMinute()const {
	return min;
}

void Time::display()const{
	cout<<"l'heure : "<<hour<<":"<<min<<endl;
}