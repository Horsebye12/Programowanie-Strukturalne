#include<iostream>
#include<list>

using namespace std;
int tab[10];

struct Lista{
	int _var;
	Lista *_wsk;
};

void addItem(Lista *&start);
void printList(Lista *&start);
void printPointer(Lista *&start);
void listLength(Lista *&start);

int main(){
	Lista *start;
	start = nullptr;
		
	cout<<"Podaj elementy listy"<<endl;
	for(int i=0; i<10; i++){
		cin>>tab[i];
	}
	
	addItem(start);
	printList(start);
	printPointer(start);
	listLength(start);
	
	return 0;
}

void addItem(Lista *&start){
	Lista *p;
	for(int i=0; i<=10; i++){
		p = new Lista;
		p->_var=tab[10-i];
		p->_wsk=start;
		start=p;
	}
};

void printList(Lista *&start){
	Lista *p;
	p=start;
	while(p){
		cout<< p->_var<<" ";
		p=p->_wsk;
	}
	cout<<endl;
};

void printPointer(Lista *&start){
	Lista *p;
	p=start;
	while(p){
		cout<< &p->_var<<" ";
		p=p->_wsk;
	}
	cout<<endl;
};

void listLength(Lista *&start){
	Lista *p;
	p=start;
	int c=0;
	
	while(p){
		c++;
		p=p->_wsk;
	}
	cout<<"Dlugosc listy: "<<c<<endl;	
};
