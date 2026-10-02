#include "Time.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

Time::Time(){
	cout<<"constructeur par defaut"<<endl;
	setHour(0);
	setMin(0);
}

Time::Time(int h,int m){
	cout<<"constructeur d'initialisation"<<endl;
	setHour(h);
	setMin(m);
}

Time::Time(const Time& t){
	cout<<"constructeur de copie"<<endl;
	setHour(t.hour);
	setMin(t.min);
}

Time::~Time(){
	cout<<">>> destructeur <<<"<<endl;
}

void Time::setHour(int h){
	if(h<0)return;
	hour=h;
}

void Time::setMin(int m){
	if(m<0)return;
	min=m;
}

int Time::getHour()const {
  return hour;
}

int Time::getMin()const {
	return min;
}

void Time::desplay(int h,int m){
	cout<<"l'heure : "<<h<<":"<<m<<endl;
}