#include<stdio.h> 
#include<conio.h> 
main() 
{ 
int a,b,c,d,e,mayor,menor;

printf("Dame un numero : "); 
scanf("%d",&a); 
printf("Dame un numero : "); 
scanf("%d",&b); 
printf("Dame un numero : "); 
scanf("%d",&c); 
printf("Dame un numero : "); 
scanf("%d",&d); 
printf("Dame un numero : "); 
scanf("%d",&e); 

if(a>b)
    {
        mayor=a;
        menor=b;
    }
    else
    {
        mayor=b;
        menor=a;
    }
    if(mayor<c)
        mayor=c;
    if(mayor<d)
        mayor=d;
    if(mayor<e)
        mayor=e;
    if(menor>c)
        menor=c;
    if(menor>d)
        menor=d;
    if(menor>e)
        menor=e;

printf("\nEl numero mayor es : %d",mayor); 
printf("\nEl numero menor es : %d",menor); 
}
