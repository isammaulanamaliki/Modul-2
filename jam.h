#ifndef jam_H
#define jam_H

typedef struct{
		int HH;
		int MM;
		int SS;
		} jam;

/* prototype */
void ResetJam(jam *J);

/* Mengisi sebuah jam J dengan 00:00:00 */
void TulisJam(jam J);

/* Menulis sebuah jam */
int JamToDetik(jam J);

/* Konversi jam ke detik */
jam DetikToJam(int d);

/* Konversi dari detik menjadi jam */

#endif
