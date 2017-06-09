#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"expansion.h"
int expansion(char *tab, char* tabExpand){
    int i;
    int message_expansion[] =  {32,  1,  2,  3,  4,  5,
							 4,  5,  6,  7,  8,  9,
							 8,  9, 10, 11, 12, 13,
							12, 13, 14, 15, 16, 17,
							16, 17, 18, 19, 20, 21,
							20, 21, 22, 23, 24, 25,
							24, 25, 26, 27, 28, 29,
							28, 29, 30, 31, 32,  1};

    for(i=0; i<48; i++){
        tabExpand[i]= tab[message_expansion[i]-1];
    }
    return 1;
}