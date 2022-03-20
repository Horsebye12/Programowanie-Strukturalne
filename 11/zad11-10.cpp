#include<iostream>
#include<cstring>
#define CONST 11

using namespace std;

void pierwotna(char *wsk[], int n){
	for(int i=0; i<n; i++){
		cout<<*wsk<<endl;
		wsk++;
	}
}

void ascii(char *wsk[], int x)
{
    int i,j,k =0;
    char *tmp[10];
    char *tmp2[10];
    
    for(i=0; i<x; i++){
        tmp2[i] = wsk[i];
    }
    
    for(i=0; i<x; i++){
        k=0;
        for(j=i+1; j<x-1; j++){
            for(k=0; k<x; k++){
                if(tmp2[i][k] > tmp2[j][k]){
                    tmp[i] = tmp2[i];
                    tmp2[i] = tmp2[j];
                    tmp2[j] = tmp[i];
                }
            }
        }
        
    }
    
    for(i=0; i<x; i++){
        cout<<tmp2[i]<<endl;
    }
    
}

void dlugosc(char *wsk[], int n){
	char *tmp[10];
    char *tmp2[10];
    int i,j;
    
    for(i=0; i<n; i++)
    {
        tmp[i] = wsk[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strlen(tmp[i]) > strlen(tmp[j]))
            {
                tmp2[i] = tmp[i];
                tmp[i] = tmp[j];
                tmp[j] = tmp2[i];
            }
        }
        
    }
    
    for(i=0; i<n; i++)
    {
        cout<<tmp[i]<<endl;
    }
}

int main(){
	char tab[CONST][10];
	char *wsk[CONST];
	int x=0;
	
	cout<<"Podaj 10 lancuchow"<<endl;
	cout<<"Podaj 1 lancuch: ";
	while(x<10 && gets(tab[x])!=NULL && tab[x][0]!='\0'){
		wsk[x]=tab[x];
		x++;
		if(x != 10){
			cout<<"Podaj "<<x+1<<" lancuch: ";
		}
	}
	system("cls");
	
	int a=0, check=0;
	while(check!=1){
		a=0;
		cout<<"Menu"<<endl;
		cout<<"1) Wyswietl pierwotna liczbe"<<endl;
		cout<<"2) Wyswietl znaki w porzadku ASCII"<<endl;
		cout<<"3) Wyswietl lancuchy wg dlugosci"<<endl;
		cout<<"4) Wyswietl lancuchy wg dlugosci 1 slowa"<<endl;
		cout<<"5) Koniec programu"<<endl;
		cin>>a;
		cout<<endl;
		
		system("cls");
		
		switch(a){
			case 1:
				pierwotna(wsk, x);
				break;
			case 2:
				ascii(wsk, x);
				break;
			case 3:
				dlugosc(wsk, x);
				break;
			case 4:
				break;
			case 5:
				check=1;
				break;
			default:
				cout<<"Brak takiej opcji"<<endl;
		}
	}
	
	return 0;
}
