#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

struct bibl{
	char tytul[40];
	char autor[40];
	
	float cena;
};

int main(){
	char swap_tit[40];
	char swap_aut[40];
	float swap_cena;
	int ilosc=3;
	int i=0;

//	cout<<"Ile chcesz wprowadzic ksiazek?: "<<endl;
//		cin>>ilosc;
	
	struct bibl spis[ilosc];
	
	cout<<"Jezeli chcesz zakonczyc wcisnij enter na poczatku wiersza"<<endl;
	cout<<"Podaj tytul ksiazki: "<<endl;
	while(i<100 && gets(spis[i].tytul) != NULL && spis[i].tytul[0] != '\0'){
		cout<<"Podaj autora: ";
			gets(spis[i].autor);
		cout<<"Podaj wartosc: ";
			cin>>spis[i].cena;
		
	
		
		while(getchar() != '\n')
			continue;
		
		i++;
		system("cls");
		cout<<"Jezeli chcesz zakonczyc wcisnij enter na poczatku wiersza"<<endl;
		cout<<"Podaj kolejny tytul: ";
	}
	
	system("cls");
	
	for(int x=0; x<i-1; x++){
		for(int y=0; y<i-x-1; y++){
			if(strcmp(spis[y].tytul, spis[y+1].tytul)>0){
				strcpy(swap_tit, spis[y].tytul);
				strcpy(spis[y].tytul, spis[y+1].tytul);
				strcpy(spis[y+1].tytul, swap_tit);
				
				strcpy(swap_aut, spis[y].autor);
				strcpy(spis[y].autor, spis[y+1].autor);
				strcpy(spis[y+1].autor, swap_aut);
				
				swap_cena=spis[y].cena;
				spis[y].cena=spis[y+1].cena;
				spis[y+1].cena=swap_cena;
			}
		}
	}
	
	
	cout<<"Lista ksiazek: "<<endl;
	for(int x=0; x<i; x++){
		cout<<"Tytul: "<<spis[x].tytul<<" autor: "<<spis[x].autor<<" cena: "<<spis[x].cena<<endl;
	}
	
	return 0;
}
