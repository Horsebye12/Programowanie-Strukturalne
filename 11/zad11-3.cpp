#include<iostream>
#define CONST 11

using namespace std;

void wyraz(char *tab, char *tab2, int n){
	int i=0;
	puts("Wprowadz lancuch: ");
	gets(tab);
	
	while(!isspace(*tab)){
		tab2[i]= *tab;
		tab++;
		i++;
	}
	
	for(int j=0; j<i; j++){
		cout<<tab2[j];
	}
	cout<<endl;
}

int main(){
	
	char tab[CONST];
	char tab2[CONST];
	
	wyraz(tab, tab2, CONST);
	
	return 0;
}
