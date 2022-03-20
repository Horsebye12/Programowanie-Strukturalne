#include<iostream>
#include<cstring>
#define CONST 11

using namespace std;

char *zawiera_lan(char *tab, char *tab2){
	char *znaki;
	if((strcmp(tab2, tab))>=0){
		while(*tab != '\0'){
			if(*tab == *tab2){
				znaki=tab;
			}
			tab++;
		}
	}
	else{
		znaki=NULL;
	}
	
	return znaki;
}

int main(){
	char *check;
	char tab[CONST];
	char tab2[CONST];
	puts("Wprowadz pierwszy lancuch: ");
		gets(tab);
	puts("Wprowadz drugi lancuch: ");
		gets(tab2);
		
	check=zawiera_lan(tab, tab2);
	
	if(check==NULL){
		cout<<"Lancuch 2 nie zawiera sie w lancuchu 1"<<endl;
	}
	else{
		cout<<"Lancuch 2 zawiera sie w lancuchu 1"<<endl;
	}
	
	return 0;
}
