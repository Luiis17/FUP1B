#include <stdio.h>
#include <conio.h>
/*Nomnre:Luis Angel Soto Santos
  Grado,Grupo: 1,B 
*/
  int main () 
      { 
      int selec;
        
            printf ("\n Este programa te la el total de tu compra en una tienda"); 
			printf ("\n Tenemos estos productos cual gustas 1.refresco,2.papas,3.chicle,4.paleta,5.pan \n"); 
			scanf("%d",&selec);
			switch (selec)
			{
            case 1:
            	{
            	   printf ("\n\n Quieres un refresco su precio es de $10 "); 
				}break;
		    case 2:
            	{
            	  printf ("\n Quieres unas papas su precio es de $10 "); 
		      
				}break;      
		    case 3:
            	{
            	  printf ("\n Quieres un chicle su precio es de $1 "); 
		         
				}break;
		    case 4:
            	{
            		printf ("\n Quieres una paleta su precio es de $2 "); 
		          
				}break;
		    
		     case 5:
            	{
            		printf ("\n Quieres un pan de dulce su precio es de $3 "); 
		
				}break;
			default:
               {
               	printf ("\n no elejiste nada de la tienda ");
	           }break;
	               
        getch();
       }
      }
