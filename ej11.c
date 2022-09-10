#include<stdio.h>

int main (void){

int i=0,masleg,  f=0, m=0, mayor=0, legajo[255], horast[255], sueldph[255], bruto[255], sumafem=0, sumamasc=0;
char sexo, empleado[30][30];
float neto[255], prommasc, promfem, os=0.97, jub=0.89, descos, descjub;

while (i<3){
    printf ("ingrese el nombre del empleado %d: \n", i+1);
    fflush (stdin);
    scanf ("%s", empleado[i]);
    printf ("ingrese el numero del legajo \n");
    fflush (stdin);
    scanf ("%d", &legajo[i]);
    printf ("ingrese la cantidad de horas trabajadas\n");
    fflush (stdin);
    scanf ("%d", &horast[i]);
    printf ("ingrese el pago por hora \n");
    fflush (stdin);
    scanf ("%d", &sueldph[i]);

    bruto[i]=horast[i]*sueldph[i];
    neto[i]= bruto[i] * os * jub;

    printf ("ingrese el sexo con F o M\n");
    fflush (stdin);
    scanf ("%c", &sexo);
    if (sexo == 'F'){
        sumafem = sumafem + bruto[i];
        f++;
    }else{
        sumamasc = sumamasc + bruto[i];
        m++;
        }

    descos = descos + (bruto[i]*(1-os));
    descjub = descjub + (bruto[i]*(1-jub));

    printf ("Nombre: %s\n", empleado[i]);
    printf ("Sueldo Bruto: $%i\n", bruto[i]);
    printf ("Sueldo Neto: $%f\n", neto[i]);

    if (bruto[i]>mayor){
        mayor = bruto[i];
        masleg = legajo[i];
    }
    i++;
    }
if (f!=0){
promfem = sumafem / f;}
else{ promfem = 0;}
if (m!=0){
prommasc = sumamasc / m;}
else{ prommasc = 0;}

printf ("El total pagado a femeninos es: $%d, y el de masculinos es: $%d\n", sumafem, sumamasc);
printf ("El sueldo promedio de mujeres es: $%.2f, y el de hombres es: $%.2f\n", promfem, prommasc);
printf ("El legajo con mayor ingreso fue el: %d\n", masleg);
printf ("El total descontado por obra social es: %.2f\n", descos);
printf ("El total descontado por jubilacion es: %.2f\n", descjub);

return 0;
}
