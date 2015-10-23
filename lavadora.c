#include <stdio.h>
#include <conio.h>
/*Nomnre:Luis Angel Soto Santos
  Grado,Grupo: 1,B 
*/
  int main () 
      { 
      int kilos,selec;
        
            printf ("Este programa dice el nivel a ocupar de agua y los min. a lavar "); 
            printf ("\n Dame la cantidad de ropa a lavar\n  "); 
            scanf("%d", &kilos); 
           if(kilos>=21)
           {
            printf ("No se puede lavar");
            }
            else 
          if (kilos<=10)
           {
            printf (" El nivel de agua es minimo \n");
            }
            else 
          if (kilos<=15)
           {
            printf (" El nivel de agua es medio \n");
            }
         else 
         if (kilos<=20)
           {
            printf (" El nivel de agua es maximo \n");
            } 
               printf ("\n Seleciona el tipo de ropa 1.Delicada,2.Normal,3.Sucia\n  "); 
               scanf("%d", &selec); 
               if (selec==1)
                    printf ("\nLa ropa se lavara 5 min. ");

 			else if (selec==2)
                
                    printf ("\nLa ropa se lavara 10 min. ");
               
            else if (selec==3)
                
                    printf ("\nLa ropa se lavara 20 min. ");
                else
                  printf ("\nNumero invalido ");
                           
          getch();
      }
