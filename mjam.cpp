#include "jam.h"
#include <stdio.h>
#include <jam.cpp>

int main(){
	/* KAMUS */
	jam J1;
	jam J2;
	int dt=1000;

	/* Program */
	printf("Hello \n");
	ResetJam(&J1);
	TulisJam(J1);
	printf("Konversi jam ke detik : "); scanf("%d", &J1);
JamToDetik(J1);
	printf("Konversi jam ke detik : %d \n", JamToDetik(J1));
	J2=DetikToJam(dt);
	TulisJam(J1);
	return 0;
}
