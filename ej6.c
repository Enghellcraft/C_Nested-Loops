#include<stdio.h>

int main (void){

int i, j;

for (i=1; i<11; i++){
    for (j=0;j<i ;j++){
        printf ("*");
    }
    printf ("\n");
}

printf ("\n");

for (i=0; i<10; i++){
    for (j=10;j>i ;j--){
        printf ("*");
    }
    printf ("\n");
}

printf ("\n");

for (i=0; i<10; i++){
    for (j=0; j<i; j++){
        printf (" ");
    }
    for (j=10;j>i ;j--){
        printf ("*");
    }
    printf ("\n");
}

printf ("\n");

for (i=0; i<10; i++){
    for (j=10;j>i+1 ;j--){
        printf (" ");
    }
    for (j=0;j<i+1 ;j++){
        printf ("*");
    }
    printf ("\n");
}



return 0;
}
