#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"intToChars.h"
int intToChars(char input, char *valBinaire, int taille){
	int i;
	for (i=0; i<taille; i++) {
		char shift_byte = 0x01 <<(taille-1-i);
		if (shift_byte & input) {
				valBinaire[i]=  '1';
		} else {
			valBinaire[i] = '0';
		}
	}
return 0;
}

