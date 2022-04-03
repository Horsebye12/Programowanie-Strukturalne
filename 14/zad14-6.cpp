#include<iostream>
#include<cstring>

using namespace std;

struct koszykarze{
	int numer;
	char imie[20];
	char nazwisko[20];
	int rzut2;
	int traf2;
	int asysta;
	int faul;
	float skutecznosc;
	bool przypisz;
};

int main(){
	int numertmp;
	char imietmp[20];
	char nazwiskotmp[20];
	int rzut2tmp;
	int traf2tmp;
	int asystatmp;
	int faultmp;
	bool dodano = false;
	
	FILE *plik;
	
	struct koszykarze zawodnik[19];
	for(int i=0; i<19; i++){
		zawodnik[i].przypisz=false;
	}
	
	if((plik = fopen("koszykarze.txt", "r"))==NULL){
		fputs("Nie mozna otworzyc pliku\n", stderr);
		exit(1);
	}
	
	while(fscanf(plik, "%d %s %s %d %d %d %d", &numertmp, imietmp, nazwiskotmp, &rzut2tmp, &traf2tmp, &asystatmp, &faultmp) == 7){
		if(zawodnik[numertmp].przypisz == false && numertmp >= 0 && numertmp <=18){
			zawodnik[numertmp].numer=numertmp;
			strcpy(zawodnik[numertmp].imie, imietmp);
			strcpy(zawodnik[numertmp].nazwisko, nazwiskotmp);
			zawodnik[numertmp].rzut2=rzut2tmp;
			zawodnik[numertmp].traf2=traf2tmp;
			zawodnik[numertmp].asysta=asystatmp;
			zawodnik[numertmp].faul=faultmp;
			zawodnik[numertmp].przypisz=true;
		}
		else{
			for(int i=0; i<19; i++){
				if(zawodnik[numertmp].przypisz == true && zawodnik[i].numer==numertmp && strcmp(zawodnik[i].imie, imietmp)==0 && strcmp(zawodnik[i].nazwisko, nazwiskotmp)==0){
					zawodnik[numertmp].rzut2=zawodnik[numertmp].rzut2+rzut2tmp;
					zawodnik[numertmp].traf2=zawodnik[numertmp].traf2+traf2tmp;
					zawodnik[numertmp].asysta=zawodnik[numertmp].asysta+asystatmp;
					zawodnik[numertmp].faul=zawodnik[numertmp].faul+faultmp;
					dodano=true;
				}
			}
			
			if(dodano == false){
				cout<<"Blad przy przepisywaniu zawodnika: "<<imietmp<<" "<<nazwiskotmp<<endl;
			}
			dodano = false;
		}
	}
	
	int x=0;
	while(x<19){
		if(zawodnik[x].przypisz==true){
			zawodnik[x].skutecznosc = ((float)zawodnik[x].traf2/zawodnik[x].rzut2)*100;
			cout<<"Zawodnik: "<<zawodnik[x].imie<<" "<<zawodnik[x].nazwisko<<" "<<zawodnik[x].numer<<endl;
			cout<<"Rzuty za 2pkt: "<<zawodnik[x].rzut2<<endl;
			cout<<"Trafienia za 2pkt: "<<zawodnik[x].traf2<<endl;
			cout<<"Asysty: "<<zawodnik[x].asysta<<endl;
			cout<<"Faule: "<<zawodnik[x].faul<<endl;
			cout<<"Skutecznosc: "<<zawodnik[x].skutecznosc<<endl;
			cout<<"---------------------------------------------"<<endl;
			cout<<endl;
		}
		x++;
	}
		
	
	return 0;
}
