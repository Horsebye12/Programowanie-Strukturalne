#include<iostream>

using namespace std;

struct dane{
	char imie[20];
	char nazwisko[20];
};

struct student{
	struct dane dane_studenta;
	double tab[5];
	float srednia;
};

int main(){
	struct student studenci[4]{
		{
			"Dawid",
			"Konpa"
		},
		{
			"David",
			"Konpa"
		},
		{
			"Dave",
			"Konpa"
		},
		{
			"Davidson",
			"Konpa"
		}
	};
	
	int i=0;
	int suma=0;
	float srednia_cala=0;
	
	while(i<4){
		cout<<"Podaj oceny studenta: "<<studenci[i].dane_studenta.imie<<" "<<studenci[i].dane_studenta.nazwisko<<endl;
		for(int j=0; j<5; j++){
			cout<<"Ocena "<<j+1<<": ";
				cin>>studenci[i].tab[j];
			suma=suma+studenci[i].tab[j];
			if(j==4){
				studenci[i].srednia=(suma/5);
				suma=0;
			}
		}
		i++;
	}
	
	for(int i=0; i<4; i++){
		srednia_cala=srednia_cala+studenci[i].srednia;
	}
	srednia_cala=srednia_cala/4;
	
	system("cls");
	
	for(int i=0; i<4; i++){
		cout<<"Student: "<<studenci[i].dane_studenta.imie<<" "<<studenci[i].dane_studenta.nazwisko<<endl;
		cout<<"Oceny: ";
			for(int j=0; j<5; j++){
				cout<<studenci[i].tab[j]<<" ";
			}
			cout<<endl;
			cout<<"Srednia ocen studenta: "<<studenci[i].srednia<<endl;
			cout<<"-------------------------------------------------"<<endl;
			cout<<endl;
	}
	
	cout<<"Srednia ocen wszystkich studentow: "<<srednia_cala<<endl;
	
	return 0;
}
