#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a,num1,num2;
	 i=1;
     a=0;
     printf("Dame un numero   ");
     scanf("%d",&num1);
     while(i<=num1)
     {
     	a=a+i;
     	i=i+1;
     	
     }
     printf("\n %d ",a);
	getch();
}
