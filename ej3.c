#include<stdio.h>

int main (void){

char letra='A';
int i=0, j=25,k;

for (i=0;i<26;i++){
    for(k=0; k<=j; k++){
    printf("%c", letra);
    letra++;
    }
    printf("\n"),
    j--;
    letra='A';
}
    return 0;
    }


