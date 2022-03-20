#include<iostream>
#include<cstring>
#define CONST 11

using namespace std;

void odwroc(char *tab){
	char tmp[CONST];
	strcpy(tmp, tab);
	
	int dl=strlen(tab);
	char *string1 = tab;
	char *string2 =tmp+dl-1;
	
	while(*string1){
		*string1= *string2;
		string1++;
		string2--;
	}
	
}

int main(){
	char tab[CONST];
	
	cout<<"Wprowadz lancuch: ";
		gets(tab);
	
	odwroc(tab);
	
	cout<<"Odwrocony lancuch: "<<tab<<endl;
	
	
	return 0;
}
