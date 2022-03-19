#include<iostream>
#include<cstring>
#define CONST 11
using namespace std;


int main(){
	char a;
	char tab[CONST];
	
	cout<<"Jakiego znaku szukasz?: ";
		cin>>a;
	
	cout<<"Wprowadz lancuch: ";
		for(int i=0; i<CONST; i++){
			tab[i]=getchar();
		}
		
	if(char* ch=strchr(tab, a)){
		cout<< ch - tab<<endl;
	}
	else{
		return 0;
	}
	


	
	
	return 0;
}
