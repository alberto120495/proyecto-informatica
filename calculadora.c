//calculadora
#include<stdio.h>
main(){
//Variables para numeros
int numeroUno;
int numeroDos;

//variables para operaciones
int suma;
int resta;
int multiplicacion;
int division;

printf("Calculadora PRO MAX\n");
//Pedir numero Uno
printf("Ingresa un numero:");
scanf("%d",&numeroUno);

//Pedir segundo numero
printf("Ingresar otro numero:");
scanf("%d",&numeroDos);

//OPERACIONES
suma = numeroUno + numeroDos;
printf("El resultado de la suma es:%d", suma);


}
