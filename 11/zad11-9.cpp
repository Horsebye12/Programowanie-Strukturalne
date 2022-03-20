#include<iostream>
#include<cstring>
#define CONST 11

using namespace std;

void bez_odstep(char *tab){
	int i=0;
	
	while(*tab){
		if(*tab==' '){
			*tab=*(tab+1);
		}
		else{
			*tab=*tab;
		}
		
		tab++;
	}
	
	puts(tab);
}

int main(){
	char tab[CONST];
	cout<<"Wprowadz lancuch: ";
	
	
	while(gets(tab) && isalpha(*tab)){
		bez_odstep(tab);
		puts(tab);
	}
	
	
	return 0;
}
