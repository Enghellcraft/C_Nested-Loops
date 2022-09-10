#include<stdio.h>

int main (void){

char ast='*';
int i=3, j=0;

for (i=3; i<=9; i++){
        printf ("%d. |", i);
        while (j < i){
            printf ("%c", ast);
            j++;
        }
        i++;
        printf("\n");
        printf("  |   \n");
        j=0;
}

return 0;
}









