#include<iostream>
#include<cstring>

using namespace std;

struct miesiace{
	char skrot[4];
	char nazwa[20];
	int dni;
	int numer;
};

int oblicz(const struct miesiace * wsk, char * nazwa){
	int check = 0;
	int wynik = 0;
	while(*wsk->nazwa != '\0' && check == 0){
		wynik = wynik + (wsk->dni);
		if(strcmp(wsk->nazwa, nazwa) == 0){
			check = 1;
		}
		
		if(check == 0){
			wsk++;
		}
	}
	
	if(check == 1){
		return wynik;
	}
	else{
		cout<<"Niepoprawna nazwa miesiaca"<<endl;
		exit(1);
	}
}

int main(){
	char nazwa[10];
	
	struct miesiace miesiac[12]{
		{
			"sty",
			"styczen",
			31,
			0
		},
		{
			"lut",
			"luty",
			28,
			1
		},
		{
			"mar",
			"marzec",
			31,
			2
		},
		{
			"kwi",
			"kwiecien",
			30,
			3
		},
		{
			"maj",
			"maj",
			31,
			4
		},
		{
			"cze",
			"czerwiec",
			30,
			5
		},
		{
			"lip",
			"lipiec",
			31,
			6
		},
		{
			"sie",
			"sierpien",
			31,
			7
		},
		{
			"wrz",
			"wrzesien",
			30,
			8
		},
		{
			"paz",
			"pazdziernik",
			31,
			9
		},
		{
			"lis",
			"listopad",
			30,
			10
		},
		{
			"gru",
			"grudzien",
			31,
			11
		}
	};
	
	
	cout<<"Wprowadz nazwe miesiaca, bez polskich znakow: ";
		gets(nazwa);
	
	cout<<"Liczba dni: "<<oblicz(miesiac, nazwa)<<endl;
	
	
	return 0;
}
