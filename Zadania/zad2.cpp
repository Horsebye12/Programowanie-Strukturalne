#include<iostream>

using namespace std;

void wpisz(int n, int m){
	int tab[n][m];
	cout<<"Wpisz liczby do tablicy o wymiarach "<<n<<"x"<<m<<" (enter pozwala wpisac kolejna)"<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
		cin>>tab[i][j];
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"["<<tab[i][j]<<"]";
		}
		cout<<endl;
	}
	
	//ujemny element
	
	int min = 0;
	int wiersz, kolumna;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
		if(tab[i][j]<0){
			if(tab[i][j]<min){
				min=tab[i][j];
				wiersz=i;
				kolumna=j;
			}
		}
	}
	
	
	if(min!=0){
		cout<<"Najwiekszy ujemny element: "<<min<<endl;
		cout<<"Lokalizacja (wiersz/kolumna): "<<wiersz+1<<"/"<<kolumna+1<<endl;
	}
	else{
		cout<<"Brak elementu ujemnego, wartosc="<<min<<endl;
	}
}


int main(){
	int n, m;
	
	cout<<"Podaj pierwszy wymiar tablicy (liczby od 1 do 10): ";
		cin>>n;
	cout<<"Podaj drugi wymiar tablicy (liczby od 1 do 10): ";
		cin>>m;
		
	while(n<=0 || n>10 || m<=0 || m>10){
		cout<<"UWAGA: Podaj pierwszy wymiar tablicy (liczby od 1 do 10): ";
			cin>>n;
		cout<<"UWAGA: Podaj drugi wymiar tablicy (liczby od 1 do 10): ";
			cin>>m;
	}
	
	wpisz(n, m);
	
	
	return 0;
}
