#include<iostream>
#include<cstring>
#include<cstdio>
#include<fstream>

using namespace std;

struct ksiazka{
	char tytul[40];
	char autor[40];
	float cena;
	bool usun;
};

int main(){
	
	struct ksiazka bibl[10];
	struct ksiazka update[10];
	
	int licz=0;
	int usuniete=0;
	char odp;
	int odp2;
	
	for(int i=0; i<10; i++){
		bibl[i].usun = false;
	}
	
	FILE *pksiazki;
	int rozmiar = sizeof(struct ksiazka);
	if((pksiazki=fopen("ksiazki.txt", "r"))==NULL)
	{
		fputs("Nie mozna otworzyc pliku", stderr);
		exit(1);
	}
	
	rewind(pksiazki);
	while(licz<10 && fread(&bibl[licz], rozmiar, 1, pksiazki) == 1){
		if(licz == 0){
			puts("Bierzaca zawartosc pliku: ");
			cout<<"Tytul: "<<bibl[licz].tytul<<" Autor: "<<bibl[licz].autor<<" Cena: "<<bibl[licz].cena<<endl;
			cout<<"Czy chcesz dokonac zmian? (t\\n)"<<endl;
				cin>>odp;
			system("cls");
			while(strchr("tn", odp)==0){
				cout<<"Nieprawidlowa wartosc, wprowadz t lub n"<<endl;
					cin>>odp;
			}
			
			if(odp == 't'){
				cout<<"Zmiany: "<<endl;
				cout<<"a) Zmiana tytulu"<<endl;
				cout<<"b) Zmiana autora"<<endl;
				cout<<"c) Zmiana wartosci"<<endl;
				cout<<"d) Usun pozycje"<<endl;
				cout<<"e) Zapisz lub pozostaw bez zmian"<<endl;
					cin>>odp;
				while(getchar()!='\n')
					continue;
				
				while(strchr("abcde", odp) == NULL){
					cout<<"Nieprawidlowa wartosc"<<endl;
					cout<<"a) Zmiana tytulu"<<endl;
					cout<<"b) Zmiana autora"<<endl;
					cout<<"c) Zmiana wartosci"<<endl;
					cout<<"d) Usun pozycje"<<endl;
					cout<<"e) Zapisz lub pozostaw bez zmian"<<endl;
						cin>>odp;
					while(getchar()!='\n')
						continue;
				}
				
				while(odp != 'e' && bibl[licz].usun == false){
					switch(odp){
						case 'a':
							cout<<"Nowy tytul: ";
								gets(bibl[licz].tytul);
							while(getchar()!='\n')
								continue;
							break;
						case 'b':
							cout<<"Nowy autor: ";
								gets(bibl[licz].autor);
							while(getchar()!='\n')
								continue;
							break;
						case 'c':
							cout<<"Nowa wartosc: ";
								cin>>bibl[licz].cena;
							while(getchar()!='\n')
								continue;
							break;
						case 'd':
							cout<<"Ksiazka usunieta: ";
								bibl[licz].usun = true;
								usuniete++;
							break;
					}
					if(bibl[licz].usun == false){
						cout<<"a) Zmiana tytulu"<<endl;
						cout<<"b) Zmiana autora"<<endl;
						cout<<"c) Zmiana wartosci"<<endl;
						cout<<"d) Usun pozycje"<<endl;
						cout<<"e) Zapisz lub pozostaw bez zmian"<<endl;
							cin>>odp;
						while(getchar()!='\n')
							continue;
					}
				}
			}
			licz++;
		}
	}
	fclose(pksiazki);
	
	int licznikp=licz-usuniete;
	int j=0, gotowe=0;
	
	for(int i=0; i<10; i++){
		while(j < 10 && gotowe == 0)
		{
			if(bibl[j].usun == false){
					strcpy(update[i].autor, bibl[j].autor);
					strcpy(update[i].tytul, bibl[j].tytul);
					update[i].cena=bibl[j].cena;
					gotowe = 1;
				}
				j++;
			}
			gotowe = 0;
		}
	
	
	if(licznikp == 10){
		fputs("Plik jest pelny", stderr);
		exit(2);
	}
	
	puts("Aby zakonczyc, wcisnij enter na poczatku wiersza");
	puts("Podaj nowe tytuly ksiazek: ");
	while(licznikp<10 && gets(update[licznikp].tytul) != NULL && update[licznikp].tytul[0] != '\0'){
		puts("Podaj autora: ");
			gets(update[licznikp].autor);
		puts("Podaj wartosc: ");
			cin>>update[licznikp].cena;
		
		while(getchar()!='\n')
			continue;
		
		licznikp++;
			if(licznikp<10){
				puts("Podaj nastepny tytul: ");
			}
	}
	
	
	puts("Oto lista twoich ksiazek: ");
	for(int i=0; i<licznikp; i++){
		cout<<"Tytul: "<<update[i].tytul<<" Autor: "<<update[i].autor<<" Cena: "<<update[i].cena<<endl;
	}
	pksiazki = fopen("ksiazki.txt", "w");
		
	for(int i=0; i<licznikp; i++){
		if(update[i].usun==false){
			fwrite(&update[i], rozmiar, 1, pksiazki);
		}
	fclose(pksiazki);
	
	return 0;
}
}
