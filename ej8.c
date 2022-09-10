#include<stdio.h>
#include<string.h>
#include<conio.h>

int main (void){

int i=0, j, aprobado=0, ingresa=0 ;
float nota1[255], nota3[255], nota2[255]  , suma[255], prom[255];
char  materia [10]= "Matematica",nombre[30][30];


printf ("ingrese a continuacion el nombre del alumno y sus 3 notas a promediar \n");

while (i < 2){
    printf ("ingrese el nombre del alumno %d: \n", i+1);
    fflush (stdin);
    scanf ("%s", nombre[i]);
    j=0;
    printf ("ingrese la nota 1: \n");
    fflush (stdin);
    scanf ("%f", &nota1[i]);
    printf ("ingrese la nota 2: \n");
    fflush (stdin);
    scanf ("%f", &nota2[i]);
    printf ("ingrese la nota 3: \n");
    fflush (stdin);
    scanf ("%f", &nota3[i]);
    suma[i]= nota1[i]+nota2[i]+nota3[i];
    prom [i] = suma[i] / 3;
    if ((int)nota3>=6){
            if ((int)prom>=6 && (int)prom<8){
                aprobado++;
            }else if ((int)prom >=8){
                ingresa++;
            }
    }
    i++;
}

i=0;
j=0;

while (i < 2){
    printf ("El alumno %d: %s\n", i+1, nombre[i]);
    printf ("Materia: %s\n", materia);
    printf ("nota 1: %.2f", nota1[i]);
    printf ("nota 1: %.2f", nota2[i]);
    printf ("nota 1: %.2f", nota3[i]);
    printf ("El promedio es: %.2f \n", prom[i]);
    i++;
}

printf ("Aprobaron: %d", aprobado);
printf ("Ingresaron: %d", ingresa);

return 0;
}
