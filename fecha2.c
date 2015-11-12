#include <stdio.h>

  int main () 
      { 
      int d,d2,m,m2,i,r,r1;
            printf ("Este programa que dice los dias que pasaron de un mes a otro"); 
            printf ("\n Dame el dia             "); 
            scanf("%d", &d); 
            printf ("\n Dame el mes en numero   "); 
            scanf("%d", &m); 
            printf ("\n Dame otro dia           "); 
            scanf("%d", &d2); 
            printf ("\n Dame otro mes en numero "); 
            scanf("%d", &m2); 
          
            if (m<=m2)
            {
            r=d+d2+10;
           	r1=m2-m;
			printf ("\n Los dias pasados son %d   ",r);
			printf ("\n Los meses son %d          ",r1);
           
			}
		    if (m>m2)
			{
			 r=d+d2+10;
		     r1=m+m2-12;
			printf ("\n Los dias pasados son %d ",r);
			printf ("\n Los dias meses son %d ",r1);
			}

	    }	
