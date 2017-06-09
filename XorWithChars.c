#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"XorWithChars.h"

int XOR(char *tab1, char *tab2, char *retour){
    int i;
    i=0;
    while(tab1[i] !='\0'){
        if((tab1[i]==tab2[i] && tab1[i]=='1')||(tab1[i]==tab2[i] && tab1[i]=='0')){
            retour[i] = '0';
            i++;
        }else{
            retour[i] = '1';
            i++;
        }
    }
    return 1;
}