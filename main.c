#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"hexToBin.h"
#include"decimalTobinary.h"
#include"decimalTobinary.c"
#include"SBoxes.c"
#include"SBoxes.h"
#include"hextoBin.c"
#include"expansion.h"
#include"expansion.c"
#include"initialPermutation.h"
#include"initialPermutation.c"
#include"PermutationInverse.c"
#include"PermutationInverse.h"
#include"XorWithChars.h"
#include"XorWithChars.c"
#include"tronqueur.h"
#include"intToChars.h"
#include"intToChars.c"
#include"tronqueur.c"

int main()
{ 

    /***declaration des chiffres faux*/

 char chiffreFAux1[] = "BEABE982E1F88EA6";
 char chiffreFAux2[] = "BCBCE9C2E1F88EB6";
 char chiffreFAux3[] = "BCAEEBC2E1F98EB6";
 char chiffreFAux4[] = "BDEEE980E1F98EB6";
 char chiffreFAux5[] = "BDAEE9C6F3F88EB6"; 
 char chiffreFAux6[] = "BCBEED86F1FA8EB6"; 
 char chiffreFAux7[] = "BDBEED86E1F88CB6"; 
 char chiffreFAux8[] = "BDBEED87F1FC8EB4"; 
 char chiffreFAux9[] = "B4BEED87F1E88EB6"; 
 char chiffreFAux10[] = "BCB6E986A1E88EB6"; 
 char chiffreFAux11[] = "BCBEE186A1FC8EB6"; 
 char chiffreFAux12[] = "FCBEF98EE1AC8EB6"; 
 char chiffreFAux13[] = "FCBEF987A9F88EB7"; 
 char chiffreFAux14[] = "FCBEF986E1B08EB6"; 
 char chiffreFAux15[] = "FCBEE986E1B886B7"; 
 char chiffreFAux16[] = "BCBEF986E1F89FBF"; 
 char chiffreFAux17[] = "9CBEF986E5B88FB7"; 
 char chiffreFAux18[] = "BC9EE986E5F88FF6";
 char chiffreFAux19[] = "BCBEC986E1F89FF6"; 
 char chiffreFAux20[] = "A8BEA8A6E5F89FF6"; 
 char chiffreFAux21[] = "B8BEA886C5F88FB6"; 
 char chiffreFAux22[] = "B8BEE886E1D88EB6"; 
 char chiffreFAux23[] = "A8BEA886E1F8AEB6"; 
 char chiffreFAux24[] = "ACBEA996E0F88E96";
 char chiffreFAux25[] = "2CBEE896E0F88AB6";
 char chiffreFAux26[] = "BC3EE996E1F8CAB6"; 
 char chiffreFAux27[] = "BCBE6996E0F8CEB6"; 
 char chiffreFAux28[] = "BCBBE916E0F8CAB2"; 
 char chiffreFAux29[] = "BCBAE98660F8CAA6"; 
 char chiffreFAux30[] = "BCBAE986E1788EB2"; 
 char chiffreFAux31[] = "BCBBE986E1F80EA6"; 
 char chiffreFAux32[] = "BCAFE986E1F98E22"; 
    
       
    /**Declaration bon chiffre*/
    char chiffreVrai[]= "BCBEE986E1F88EB6"; 
    
    /*calcul de la valeur de droite*/
	unsigned char *fauxGauchePermuted;
	unsigned char *fauxDroitePermuted;
	unsigned char *vraiDroitePermuted;
	unsigned char *vraiGauchePermuted;
	unsigned char *droiteOpPermuted;
	unsigned char *XorOpdroite;
	unsigned char *valeurAcomp;
	unsigned char *valeurAcompDroite;
	unsigned char *messageVraiBin;
	unsigned char *messageFauxBin;
	
	
	
	/*pour valeur de gauche de loperation*/
	unsigned char *vraiDroiteExpanded;
	vraiDroiteExpanded =malloc(48*sizeof(char));
	unsigned char *fauxDroiteExpanded;
	fauxDroiteExpanded =malloc(48*sizeof(char));
	unsigned char *valAlea;
	valAlea = malloc(6*sizeof(char));
	unsigned char *vraiDoiteExpTronc;
	vraiDoiteExpTronc = malloc(6*sizeof(char));
	unsigned char *fauxDroiteExpTronc;
	fauxDroiteExpTronc = malloc(6*sizeof(char));
	unsigned char *XorBlocVrai;
	unsigned char *XorBlocFaux;
	XorBlocVrai = malloc(6*sizeof(char));
	XorBlocFaux = malloc(6*sizeof(char));
	int sortieBox1; 
    int sortieBox2;
    unsigned char *XorBlocVraiBin;
    unsigned char *XorBlocFauxBin;
    XorBlocVraiBin= malloc(4*sizeof(char));
    XorBlocFauxBin = malloc(4*sizeof(char));
	unsigned char *valAcompGauche;
	valAcompGauche = malloc(4*sizeof(char));
	int i;
	
	
	valeurAcomp = malloc(4*sizeof(char));
	messageVraiBin = malloc(64*sizeof(char));
    vraiGauchePermuted = malloc(32*sizeof(char));
    vraiDroitePermuted = malloc(32*sizeof(char));
    fauxDroitePermuted =malloc(32*sizeof(char));
    fauxGauchePermuted =malloc(32*sizeof(char));
    droiteOpPermuted = malloc(32*sizeof(char));
    XorOpdroite = malloc(32*sizeof(char));
    valeurAcompDroite =malloc(32*sizeof(char));
    messageFauxBin = malloc(32*sizeof(char));
    
    
    
    hexaToBin(messageVraiBin, chiffreVrai);
    initialPermutation(messageVraiBin, vraiGauchePermuted, vraiDroitePermuted);
    hexaToBin(messageFauxBin, chiffreFAux1);
    initialPermutation(messageFauxBin, fauxGauchePermuted, fauxDroitePermuted);
    XOR(fauxGauchePermuted, vraiGauchePermuted, XorOpdroite);
    permutationInv(XorOpdroite, valeurAcompDroite);
    //premier bloc
    //tronqueur(valeurAcompDroite, valeurAcomp, 0, 4);
    //deuxième bloc
    
    tronqueur(valeurAcompDroite, valeurAcomp, 0, 4);
    printf("%s", valeurAcomp);
 /*Fin calcul operande de droite*/
 
 /**debut calcul operande gauche*/
 expansion(vraiDroitePermuted, vraiDroiteExpanded);
 //premier Bloc
 //tronqueur(vraiDroiteExpanded, vraiDoiteExpTronc, 0, 6);
//deuxième bloc 
tronqueur(vraiDroiteExpanded, vraiDoiteExpTronc, 0, 6);
 expansion(fauxDroitePermuted, fauxDroiteExpanded);
//premier Bloc
 //tronqueur(fauxDroiteExpanded, fauxDroiteExpTronc, 0, 6);
//deuxième bloc
tronqueur(fauxDroiteExpanded, fauxDroiteExpTronc, 0, 6);
 for(i=0; i<64; i++){
       intToChars(i, valAlea, 6);
       XOR(valAlea, vraiDoiteExpTronc, XorBlocVrai);
       XOR(valAlea, fauxDroiteExpTronc, XorBlocFaux);
       sortieBox1 = sBoxes(1, XorBlocVrai);
       sortieBox2 = sBoxes(1, XorBlocFaux);
       intToChars(sortieBox1, XorBlocVraiBin, 4);
       intToChars(sortieBox2, XorBlocFauxBin, 4);
       
       XOR(XorBlocVraiBin, XorBlocFauxBin, valAcompGauche);
       if(strcmp(valAcompGauche, valeurAcomp)==0){
           printf("\n--%s", valAlea);
       }

 }
        
     return 0;
}
