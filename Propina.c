#include <stdio.h>
#include <conio.h>
/*Nomnre:Luis Angel Soto Santos
  Grado,Grupo: 1,B 
*/
  int main () 
      { 
      int cuenta,perso,r1,r2,r3;
        
            printf ("\n Este programa calcula  cuanto pagaras junto con la propina"); 
            printf ("\n Cuanto fue de la cuenta \n "); 
            scanf("%d", &cuenta); 
            printf ("\n Cuantas personas fueron \n "); 
            scanf("%d", &perso); 
            r1=cuenta*.10;
			r2=cuenta+r1;
			r3=r2/perso;
            printf ("\n La propina sera de:%d  ",r1); 
            printf ("\n El total a pagar es:%d  ",r2); 
            printf ("\n El total a pagar por persona es:%d  ",r3); 
          getch();
      }
