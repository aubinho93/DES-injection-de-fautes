#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include"tronqueur.h"
int tronqueur(char* valAtronquer, char *retourTronc, int debut, int tailleATronquer){
    int i;
    int j;
    j=0;
    for(i=debut; i < debut+tailleATronquer; i++){
        retourTronc[j]=valAtronquer[i];
        j++;
    }
}

