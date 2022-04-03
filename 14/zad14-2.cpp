#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

struct miesiace{
	char skrot[4];
	char nazwa[20];
	int dni;
	int numer;
};

int oblicz2(const struct miesiace * wsk, int dzien, int n){
	int wynik = 0;
	
	for(int i=0; i<n; i++){
		wynik = wynik + (wsk[i].dni);
	}
	wynik=wynik+dzien;
	
	return wynik;
}

int main(){
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
	
	int dzien;
	int rok;
	char mies[10];
	int nrmies;
	int check = 0;
	int przest = 0;
	int i=0;
	
	puts("Wprowadz dzien: ");
		cin>>dzien;
	puts("Wprowadz miesiac, numer lub nazwa lub skrot: ");
		cin>>mies;
	puts("Wprowadz rok: ");
		cin>>rok;
		
	if(rok%4 == 0 || rok%400 == 0)
		przest = 1;
	
	if(przest == 1){
		cout<<"Wprowadzony rok jest przestepny"<<endl;
		miesiac[1].dni = 29;
	}
	
	if(isdigit(*mies)){
		nrmies = atoi(mies);
		while(check == 0 && i< 12){
			if(nrmies == miesiac[i].numer){
				check = 1;
			}
			if(check == 0){
				i++;
			}
		}
	}
	
	if(strlen(mies)==3){
		while(check == 0 && i<12){
			if(strcmp(miesiac[i].skrot, mies) == 0)
			{
				check = 1;
			}
			if(check == 0){
				i++;
			}
		}
	}
	else{
		while(check == 0 && i<12){
			if(strcmp(miesiac[i].nazwa, mies) == 0){
				check = 1;
			}
			if(check == 0){
				i++;
			}
		}
	}
	
	if(dzien > miesiac[i].dni){
		cout<<"Dzien ktory wprowadziles jest za duzy dla "<<miesiac[i].nazwa<<endl;
		exit(1);
	}
	
	if(check == 1){
		cout<<"Calkowita liczba dni w roku do podanego dnia wlacznie: "<<oblicz2(miesiac, dzien, i)<<endl;
	}
	else{
		cout<<"Nie znaleziono takiego miesiaca"<<endl;
	}
		
	return 0;
}
