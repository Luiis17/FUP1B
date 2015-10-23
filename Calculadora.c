#include <stdio.h>
#include <conio.h>
/*Nomnre:Luis Angel Soto Santos
  Grado,Grupo: 1,B 
*/
  int main () 
      { 
      int p1,p2,p3,p4,p5,resul;
        
            printf ("Este programa te la el total de tu compra en una tienda"); 
            printf ("\n Si quieres algo de la tienda pon la cantidad, si no lo quieres pones 0 "); 
            printf ("\n\n Quieres un refresco su precio es de $10 "); 
		    scanf("%d", &p1); 
            printf ("\n Quieres unas papas su precio es de $10 "); 
		    scanf("%d", &p2); 
		    printf ("\n Quieres un chicle su precio es de $1 "); 
		    scanf("%d", &p3); 
		    printf ("\n Quieres una paleta su precio es de $2 "); 
		    scanf("%d", &p4); 
            printf ("\n Quieres un pan de dulce su precio es de $3 "); 
		    scanf("%d", &p5); 
			resul=p1*10+p2*10+p3*1+p4*2+p5*3;
            printf ("\n El total de la compra es: %d ",resul);
        getch();
      }
