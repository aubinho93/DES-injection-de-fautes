#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
int parityBitAndtrunc(char *Entree){
int i; 
int j;	
int parite;
for(i=0; i<64; i++){
	if(Entree[i]=='b'){
		parite=0;
		for(j=i; j>i-8; j--){
			if(Entree[j]=='1'){
			parite++;
			printf("%d\t", parite);
		
		if(parite%2==0){
			//Entree[i]='1'; 
			printf("Parité : %d", parite);
		}else{
			//Entree[i]='0';
		}
	}
}}
printf("\nHere   :%s", Entree);



}}

*/


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



int pc2Inverse(char *Entree, char *Sortie){
	int PC2[] = {14, 17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55, 30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};
	int i;
	for(i =0; i<48; i++){
		Sortie[PC2[i]-1] = Entree[i]; 
	}
	return 0; 
}



int pc1Inverse(char *Entree, char *Sortie){
	int i=0;
	int PcGen[] = {57,	49,	41,	33,	25,	17,	9,
1,	58,	50,	42,	34,	26,	18,
10,	2,	59,	51,	43,	35,	27,
19,	11,	3,	60,	52,	44,	36, 63,	55,	47,	39,	31,	23,	15,
7,	62,	54,	46,	38,	30,	22,
14,	6,	61,	53,	45,	37,	29,
21,	13,	5,	28,	20,	12,	4};
	for(i=0; i<56; i++){
		Sortie[PcGen[i]-1] = Entree[i];
		
	}
	return 0;
	}
	
int expansionSubKey(char *Entree, char* Sortie){
	int i;
	for(i=0; i<56; i++){
		if(Entree[i] == NULL){
		Sortie[i] ='e'; 
		}
		
	}
	return 0;
}


int ajout(char *Entree, char *Sortie){
	int i;
	int j;
	int k=0;
	
	unsigned char *AleatBin;
	AleatBin = NULL;
	AleatBin = malloc(8*sizeof(char));
	for(i=0; i<256; i++){
		k=0;
		 intToChars(i, AleatBin, 8);
		 strcpy(Sortie, Entree);
		 for(j=0; j<64; j++){
		 	if(Sortie[j]=='e'){
			 Sortie[j]=AleatBin[k];
		 	 k++;
		 	}
		 }
			
			printf("\nSortie : %s\n", Sortie);
		}
	
}



int main(){
	unsigned char* Sortie;
	int i;
	char *test;
	test=malloc(64*sizeof(char));
	Sortie = malloc(56*sizeof(char));
	
	char *Sortie1;
	Sortie1 =malloc(64*sizeof(char));
	pc2Inverse("001001000011000111010010010010111010111100000101", Sortie);
	expansionSubKey(Sortie, Sortie);

	pc1Inverse(Sortie, Sortie1);
	for(i=0; i<64; i++){ 
		//printf("%c", Sortie1[i]);
		
		if(Sortie1[i] == NULL){
			Sortie1[i]='b';
	}
	printf("%c", Sortie1[i]);
	}
	ajout("1001111b10001eeb00ee000b1110101b1000011b0100110b01e10e1b0e0e000b", test);
	//parityBitAndtrunc("1001111b1000111b0011000b1110101b1000011b0100110b0111001b0101000b");

	}
