#include<iostream>
#include<cstring>

using namespace std;

void zawiera(int a, char znak){
	char tab[a];
	for(int i=0; i<a; i++){
		tab[i]=getchar();
	}
	
	bool check;
	
	if(char* ch=strchr(tab, znak)){
		check=true;
	}
	else{
		check=false;
	}
	
	cout<<check;
}

int main(){
	char znak;
	int x;
	
	cout<<"Podaj dlugosc tablicy: ";
		cin>>x;
	cout<<"Wprowadz szukany znak: ";
		cin>>znak;
	cout<<"Wprowadz lancuch: ";
	
	zawiera(x, znak);
	
	return 0;
}
