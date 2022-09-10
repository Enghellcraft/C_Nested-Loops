#include<stdio.h>

int main (void){

char ast='*';
int i=3, j=0;

for (i=0;i<6;i++){
    if (i%2){
            printf ("  ");
            while (j<6){
                printf ("%c  ", ast);
                j++;
            }
            printf ("\n");
            j=0;
            }else{
                while (j<6){
                printf ("%c  ", ast);
                j++;
            }
            printf ("\n");
            j=0;
            }
    }
return 0;
}

