#include<stdio.h> 
#include<conio.h> 
main() 
{ 
int a,b,i,VM,vm; //VM=VAlor Mayor, vm=Valor Menor 

printf("\nCuantos Numeros quieres : "; 
scanf("%d",&a); 

for(i=0; i<a; i++){ 

printf("Dame un numero : "; 
scanf("%d",&b); 

if(i==0){ 

VM = b;//El primer unmero que introducimos es tanto el menor como el mayor 
vm = b;//El primer unmero que introducimos es tanto el menor como el mayor 

} else { 

if(b>VM) 
VM=b; 
if(b<vm) 
vm=b; 
} 

} 
printf("\nEl numero mayor es : %d",VM); 
printf("\nEl numero menor es : %d",vm); 
}
