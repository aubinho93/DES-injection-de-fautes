#include<stdio.h>
#include<stdlib.h>
long decimalToBinary(int n) {
int remainder; 
long binary = 0, i = 1;

while(n != 0) {
remainder = n%2;
n = n/2;
binary= binary + (remainder*i);
i = i*10;
}

return binary;
}