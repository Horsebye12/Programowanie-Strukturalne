#include<iostream>

using namespace std;

struct czlowiek {
	char pesel[12];
	struct dane{
		char imie[20];
		char d_imie[20];
		char nazwisko[20];
	}dane;
};

void pokaz(struct czlowiek lista){
	cout<<lista.dane.nazwisko<<" "<<lista.dane.imie<<" "<<lista.dane.d_imie<<" -- "<<lista.pesel<<endl;
}

int main(){
	struct czlowiek czlowiek1{
			"98230500431",
			"Michael",
			"Zbigniew",
			"Jackson"
		};
	
	struct czlowiek czlowiek2{
			"43278583202",
			"Dorota",
			"Anna",
			"Weltmeister"
		};
		
	struct czlowiek czlowiek3{
			"89032480438",
			"Boguslaw",
			"Piotr",
			"Lecina"
		};
	
	
	pokaz(czlowiek1);
	pokaz(czlowiek2);
	pokaz(czlowiek3);
	
	return 0;
}
