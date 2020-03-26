#include "jam.h"
#include <stdio.h>

/* Body prototype */
void ResetJam(jam *J){
	/* Mengisi sebuah jam J dengan 00:00:00 */
	/* KAMUS LOKAL */
	/* Algoritma */
	(*J).HH=0;
	(*J).MM=0;
	(*J).SS=0;}

void TulisJam(jam J){
	/* Menulis sebuah jam */
	/* KAMUS LOKAL */
	/* Algoritma */
	printf("Jam : %2d:%2d:%2d \n", J.HH, J.MM, J.SS);}

int JamToDetik(jam J){
	/* Konversi jam ke detik */
	/* KAMUS */
	/* Algoritma */
	return (J.HH * 3600 + J.MM * 60 + J.SS);}

jam DetikToJam(int d){
	/* Konversi dari detik ke struktur jam */
	/* KAMUS LOKAL */
	jam J;
	int sisa;

	/* Algoritma */
	J.HH = d / 3600;
	sisa = d % 3600;
	J.MM = sisa / 60;
	J.SS = sisa % 60;
	return J;
}
