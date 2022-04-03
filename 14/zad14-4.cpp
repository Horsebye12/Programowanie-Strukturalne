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

void pokaz(struct czlowiek * lista, int n){
	for(int i=0; i<n; i++){
		cout<<lista[i].dane.nazwisko<<" "<<lista[i].dane.imie<<" "<<lista[i].dane.d_imie<<" -- "<<lista[i].pesel<<endl;
	}
}

int main(){
	struct czlowiek lista[3]{
		{
			"98230500431",
			"Michael",
			"Zbigniew",
			"Jackson"
		},
		{
			"43278583202",
			"Dorota",
			"Anna",
			"Weltmeister"
		},
		{
			"89032480438",
			"Boguslaw",
			"Piotr",
			"Lecina"
		}
	};
	
	pokaz(lista, 3);
	
	return 0;
}
