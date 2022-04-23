#include<iostream>

using namespace std;

void zamiana(int& a, int* b);

int main(){
	int a, b;
	
	cout<<"Podaj wartosc referencji: ";
		cin>>a;
	cout<<"Podaj wartosc wskaznika: ";
		cin>>b;
	
	int &ref = a;
	int *wsk = &b;
	
	zamiana(ref, wsk);
	
	return 0;
}


void zamiana(int& a, int* b){
	cout<<"Przed zamiana(referencja): "<<a<<endl;
	cout<<"Przed zamiana(wskaznik): "<<*b<<endl;

	int c;
	c=*b;
	*b=a;
	a=c;
	
	cout<<"Po zamianie(referencja): "<<a<<endl;
	cout<<"Po zamianie(wskaznik): "<<*b<<endl;
}
