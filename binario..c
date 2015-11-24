#include <conio.h> 
#include <stdio.h >
// Luis Angel Soto Santos 1 "B"
main() 
{ 
int contador,x,numero,arreglo[10]; 
arreglo[0]=0; 
printf("Conversion de decimal a binario \n" ); 
printf("dame un numero para convertir \n" ); 
scanf("%d",&numero);
for (x=0;x<10;x++) 
{ 
arreglo[x]=numero%2; 
numero=numero/2; 
if(numero==0) 
break; 
} 
for(contador=x;contador>=0;contador--) 
{ 

printf(" %d",arreglo[contador]); 

} 
getch(); 
} 
