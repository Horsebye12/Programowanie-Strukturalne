#include<iostream>
#define CONST 11

using namespace std;

int zawiera(char *tab, char znak){
	int i=0;
	while(*tab != '\0'){
		if(*tab == znak){
			i++;
		}
		
		*tab++;
	}
	
	if(i==0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	char tab[CONST];
	char znak;
	
	cout<<"Wprowadz lancuch: ";
		gets(tab);
	cout<<"Wprowadz szukany znak: ";
		cin>>znak;
	
	cout<<zawiera(tab, znak)<<endl;
	
	return 0;
}
