#include<stdio.h>
#include<stdlib.h>
#include"initialPermutation.h"
int initialPermutation(char *tab, char *tabInitialPermutedG, char *tabInitialPermutedD){
 int i;
 int j=0;
int initial_message_permutation[] =	   {58, 50, 42, 34, 26, 18, 10, 2,
										60, 52, 44, 36, 28, 20, 12, 4,
										62, 54, 46, 38, 30, 22, 14, 6,
										64, 56, 48, 40, 32, 24, 16, 8,
										57, 49, 41, 33, 25, 17,  9, 1,
										59, 51, 43, 35, 27, 19, 11, 3,
										61, 53, 45, 37, 29, 21, 13, 5,
										63, 55, 47, 39, 31, 23, 15, 7};
 for(i=0; i<32; i++){
        tabInitialPermutedG[i]= tab[initial_message_permutation[i]-1];
    }
    for(i=32; i<64; i++){
        tabInitialPermutedD[j]= tab[initial_message_permutation[i]-1];
        j++;
    }
    return 1;
    
}
