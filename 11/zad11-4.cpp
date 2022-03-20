#include<iostream>
#include<cstring>
#define CONST 11
using namespace std;

void wskaznik(char *znak1, char znak2, int i){
	if(*znak1== znak2){
		cout<<"Znak znaleziono na pozycji: "<<i<<endl;
	}
}

int main(){
	char tab[CONST];
	char litera;
	int i=0;
	
	cout<<"Wprowadz lancuch: "<<endl;
		char *wsk = gets(tab);
	cout<<"Wprowadz szukany znak: "<<endl;
		cin>>litera;
	
	while(*wsk != '\0'){
		wskaznik(wsk, litera, i);
		wsk++;
		i++;
	}
	
	return 0;
}
