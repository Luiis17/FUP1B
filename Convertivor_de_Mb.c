#include <stdio.h>
#include <conio.h> 
/*Nomnre:Luis Angel Soto Santos
  Grado,Grupo: 1,B 
*/
  int main () 
      { 
        float a,bit,bytes,kb,mb,gb,tb;
            printf ("Este programa convierte MB a bytes,KB,GB,TB "); 
            printf ("\n Dame la cantidad a convertir:  "); 
            scanf("%f", &a); 
            bit = a*1024*1024*8; 
            bytes=a*1024*1024;
            kb = a*1024; 
            gb=a/1024;
            tb=a/1024/1024;
            printf ("El resultado en Bit es: %f\n",bit);
            printf ("El resultado en Bytes es: %f\n",bytes); 
            printf ("El resultado en KiloByte es: %f\n",kb); 
            printf ("El resultado en GigaByte es: %f\n",gb); 
            printf ("El resultado en TeraByte es: %f\n",tb); 
          
            getch();
      }
