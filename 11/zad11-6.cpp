#include<iostream>
#define CONST 11

using namespace std;

char *moje_strcpy(char *tab, char *tab2, int n){
	int i=0;
	while(i<n){
		tab[i]=tab2[i];
		i++;
	}
	
	return tab;
}

int main(){
	char tab[CONST];
	char tab2[CONST];
	int n;
	
	cout<<"Wprowadz lancuch: ";
		gets(tab2);
	cout<<"Wprowadz liczbe znakow do przekopiowania: ";
		cin>>n;
		
	moje_strcpy(tab, tab2, n);
	puts(tab);
	
	return 0;
}
