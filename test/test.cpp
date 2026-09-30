#include <cstring>
#include <iostream>
#include <stdlib.h>
using namespace std;


class Event
{

private:
	int code;
	char* titre;
public:

	Event(){ //constructeur par defaut
		titre=new char[30];
		code=1;
		strcpy(titre,"defauls");
	}

	Event(int c,const char* t){ //constructeur d'initialisation
		titre=new char[30];
		code=c;
		strcpy(titre,t);
	}

	~Event(){
		delete[] titre;
		cout<<"destructeur"<<endl;
	}
	
	void setcode(int c){
		if(c<=0)return;
		code =c;
	} 
	
	void settitre(const char* t){
		if ( strlen(t) == 0 ) return;
		strcpy(titre,t);
	}

	int getcode(){
		return code;
	}

	char* gettitre(){
		return titre;
	}

	void display(){
		cout<<code<<endl;
		cout<<titre<<endl;
	}

};

int main()
{
	Event e;

	e.display();

	e.setcode(-6);
	e.settitre("labo cpp");

	e.display();

	Event e2(5,"clinux");
	e2.display();
}

