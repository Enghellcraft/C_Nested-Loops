#include<stdio.h>
#include<string.h>
#include<conio.h>

int main (void){

int i, j, k, l;


for (i=0; i<=4; i++){
    for (j=4;j>i; j--){
        printf ("  ");
    }
    for (j=0;j<(2*i+1); j++){
        printf ("* ");
    }
    printf ("\n");
}

for (i=0; i<=3; i++){
    for (j=0;j<(i+1); j++){
        printf ("  ");
    }
    for (j=7-i-1;j>=i; j--){
        printf ("* ");
    }

    printf ("\n");
}

    return 0;
    }

