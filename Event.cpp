#include "Event.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
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
namespace planning{

int Event::currentCode = 1 ;

Event::Event(){
  cout<<"constructeur par defaut"<<endl;
  setCode(1);
  setTitle("default");
  timing=nullptr;
}

Event::Event(int c, const string t){
  cout << "constructeur d'initialisation (sans timing)" << endl;
  setCode(c);
  setTitle(t);
  timing=nullptr;
}

Event::Event(int c,const string t,const Timing& p){
  cout<<"constructeur d'initialisation"<<endl;
  setCode(c);
  setTitle(t);
  setTiming(p);
}

Event::Event(const Event& e){
  cout<<"constructeur de copie"<<endl;
  setTitle(e.getTitle());
  setCode(e.getCode());
  setTiming(e.getTiming());
}

Event::~Event(){
  cout<<">>> destructeur <<<"<<endl;
}
    
void Event::setTitle(const string t){
  title=t;
}

void Event::setCode(int c){
  if(c<=0)return;
  code=c;
}

void Event::setTiming(const Timing& t)
{
  if (&t == timing) return;    // auto-affectation
  Timing* nouveau = new Timing(t);
  delete timing;
  timing = nouveau;
}

const string Event::getTitle()const {
  return title;
}

int Event::getCode()const {
  return code;
}

const Timing& Event::getTiming() const{
  return *timing;
}

void Event::display() const{
  cout<<"le code : "<<code<<endl;
  cout<<"le titre : "<<title<<endl;
  if (timing != nullptr)
    timing->display();
  else
    cout << "pas de timing associe" << endl;
}

}//end namespace