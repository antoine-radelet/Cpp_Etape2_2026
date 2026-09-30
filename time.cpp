#include "time.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

Time::Time(){
	hour=0;
	min=0;
}

Time::Time(){
	cout<<"constructeur par defaut"<<endl;
	setHour(nullptr);
	setMin(nullptr);
}

Time::Time(int h,int m){
	cout<<"constructeur d'initialisation"<<endl;
	setHour(h);
	setMin(m);
}

Time::Time(const Time& t){
	cout<<"constructeur de copie"<<endl;
	setHour(t.Hour);
	setMin(t.Min);
}

Time::~Time(){
	cout<<">>> destructeur <<<"<<endl;
}

void Time::setHour(int h){
	if(hour!=nullptr)return;
	if(h<0)return;
	hour=h;
}

void Time::setMin(int m){
	if(min!=nullptr)return;
	if(m<0)return;
	min=m;
}

int Time::getHour()const {
  return Hour;
}

int Time::getMin()const {
	return Min
}

void Time::desplay(int h,int m){
	cout<<"l'heure : "<<h<<":"<<m<<endl;
}