#include<iostream>
#include<cstring>

using namespace std;

int n;
int cena;
string marka;

struct auto_i{
	string model;
	string marka;
	int cena;
}tab[100];

void auta();
void ceny_aut();
void wyszukiwarka();

int main(){
	auta();
	ceny_aut();
	wyszukiwarka();
	return 0;
}

void auta(){
	cout<<"Podaj ilosc aut do zapisania: ";
		cin>>n;
	

	for(int i=0; i<n; i++){
		cout<<"Dane auta "<<i+1<<endl;
		cout<<"Model: ";
			cin>>tab[i].model;
		cout<<"Marka: ";
			cin>>tab[i].marka;
		cout<<"Cena: ";
			cin>>tab[i].cena;
		
		system("cls");
	}
	
	for(int i=0; i<n; i++){
		cout<<"Model: "<<tab[i].model<<endl;
		cout<<"Marka: "<<tab[i].marka<<endl;
		cout<<"Cena: "<<tab[i].cena<<endl;
	}
}

void ceny_aut(){
	cout<<"Podaj maksymalna cene auta: "<<endl;
		cin>>cena;
	
	int suma=0;
	
	for(int i=0; i<n; i++){
		if(tab[i].cena < cena){
			cout<<"Model: "<<tab[i].model<<endl;
			cout<<"Marka: "<<tab[i].marka<<endl;
			cout<<"Cena: "<<tab[i].cena<<endl;
			
			suma=suma+1;
		}
		cout<<endl;
	}
	if(suma==0){
		cout<<"Brak aut o cenie nizszej niz podana"<<endl;
	}
}

void wyszukiwarka(){
	cout<<"Podaj marke szukanego auta: "<<endl;
		cin>>marka;
	
	int suma=0;
	
	for(int i=0; i<n; i++){
		if(tab[i].marka == marka){
			cout<<"Model: "<<tab[i].model<<endl;
			cout<<"Marka: "<<tab[i].marka<<endl;
			cout<<"Cena: "<<tab[i].cena<<endl;
			
			suma=suma+1;
		}
		cout<<endl;
	}
	if(suma==0){
		cout<<"Brak aut o podanej nazwie marki"<<endl;
	}
}
