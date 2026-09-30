#include "Event.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;


// Quelques conseils avant de commencer...
// * N'oubliez pas de tracer (cout << ...) tous les constructeurs et le destructeur !!! Ca, c'est pas un conseil,
//   c'est obligatoire :-)
// * N'essayez pas de compiler ce programme entierement immediatement. Mettez tout en commentaires
//   sauf le point (1) et creez votre classe (dans ce fichier pour commencer) afin de compiler et tester 
//   le point (1). Une fois que cela fonctionne, decommentez le point (2) et modifier votre classe en 
//   consequence. Vous developpez, compilez et testez donc etape par etape. N'attendez pas d'avoir encode 
//   300 lignes pour compiler...
// * Une fois que tout le programme compile et fonctionne correctement, creez le .h contenant la declaration
//   de la classe, le .cpp contenant la definition des methodes, et ensuite le makefile permettant de compiler
//   le tout grace a la commande make 


Event::Event():title(nullptr){
  cout<<"constructeur par defaut"<<endl;
  setCode(1);
  setTitle("default");
}

Event::Event(int c,const char* t):title(nullptr){
  cout<<"constructeur d'initialisation"<<endl;
  setCode(c);
  setTitle(t);
}

Event::Event(const Event& e):title(nullptr){
  cout<<"constructeur de copie"<<endl;
  setTitle(e.getTitle());
  setCode(e.getCode());
}

Event::~Event(){
  if (title !=nullptr)delete title;
  cout<<">>> destructeur <<<"<<endl;
}
    
void Event::setTitle(const char* t){
  if(strlen(t)==0)return;
  if (title != nullptr) delete title;
  title=new char[strlen(t) + 1];
  strcpy(title,t);
}

void Event::setCode(int c){
  if(c<=0)return;
  code=c;
}

const char* Event::getTitle()const {
  return title;
}

int Event::getCode()const {
  return code;
}

void Event::display() const{
  cout<<"le code : "<<code<<endl;
  cout<<"le titre : "<<title<<endl;
}
