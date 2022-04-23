#include<iostream>

using namespace std;

void poczatek(int n){
	double blok[n];
	double *wartosc = &blok[0];
	
	cout<<"Poczatek bloku pamieci: "<<wartosc<<endl;
}

int main(){
	int a;
	
	cout<<"Podaj dodatnia liczbe calkowita: "<<endl;
		cin>>a;
	if(a<=0){
		cout<<"Wprowadzona liczba nie jest dodatnia"<<endl;
		return 0;
	}
	else{
		poczatek(a);
	}
	
	
	return 0;
}
