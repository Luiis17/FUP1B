#include <stdio.h>
#include <conio.h>
/*Nomnre:Luis Angel Soto Santos
  Grado,Grupo: 1,B 
*/
  int main () 
      { 
      int a;
        
            printf ("Este programa dice tu rango de edad"); 
            printf ("\n Dame tu edad "); 
            scanf("%d", &a); 
           if(a<=12)
           {
            printf ("Eres un niño");
            }
            else if(a<=18)
           {
            printf ("Eres un adolecente");
            }
            else if(a<=29)
           {
            printf ("Eres un joven");
            }  
			else if(a<=59)
           {
            printf ("Eres un adulto");
            }      
            else if(a>=60)
           {
            printf ("Eres un adulto mayor");
            }      
          getch();
      }
