#include<stdio.h>

int main (void){

int i=1, j=7,k, n=1;

for(k=1;k<=4;k++){
for (i=1; i<=k; i++){
    printf("%d",i);
}
printf("\n");
}
for(k=3;k>=1;k--){
for (i=1; i<=k; i++){
    printf("%d",i);
}
printf("\n");
}

    return 0;
    }

