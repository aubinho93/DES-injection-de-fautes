/*
 * Programme C de conversion de hexa vers binaire
 * retourne 1 si bonne execution sinon retourne 0
 * tab est la valeur hexadecimale
 */
#include <stdio.h>
#include <string.h>
#include "hexToBin.h"
#define MAX 1000

int hexaToBin(char tab[64], char* valeurHexa){
    int i = 0;
    while (valeurHexa[i]!='\0')
    {
        switch (valeurHexa[i])
        {
        case '0':
             strcat(tab, "0000"); break;
        case '1':
              strcat(tab,"0001"); break;
        case '2':
             strcat(tab,"0010"); break;
        case '3':
             strcat(tab,"0011"); break;
        case '4':
             strcat(tab,"0100"); break;
        case '5':
              strcat(tab,"0101"); break;
        case '6':
             strcat(tab,"0110"); break;
        case '7':
             strcat(tab,"0111"); break;
        case '8':
              strcat(tab,"1000"); break;
        case '9':
              strcat(tab,"1001"); break;
        case 'A':
             strcat(tab, "1010"); break;
        case 'B':
            strcat(tab,"1011"); break;
        case 'C':
          strcat(tab, "1100"); break;
        case 'D':
            strcat(tab, "1101"); break;
        case 'E':
            strcat(tab, "1110"); break;
        case 'F':
           strcat(tab, "1111"); break;
        case 'a':
            strcat(tab, "1010"); break;
        case 'b':
            strcat(tab, "1011"); break;
        case 'c':
            strcat(tab, "1100"); break;
        case 'd':
            strcat(tab, "1101"); break;
        case 'e':
            strcat(tab, "1110"); break;
        case 'f':
            strcat(tab,"1111"); break;
        default:
            return 0;
        }
        
        i++;
    }
    return 1;
}