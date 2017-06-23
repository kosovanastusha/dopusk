#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
	{
		int a, b, c, D, X, X1, X2;
		printf ("Application for solving the quadratic equation\n");
		printf ("ax^2+bx+c=0");
		printf ("\n==============================================\n");
		printf ("Input coefficient a\n");
		scanf ("%d", &a);
		printf ("Input coefficient b\n");
		scanf ("%d", &b);
		printf ("Input coefficient c\n");
		scanf ("%d", &c);
		printf ("Introduced equation\n");
		printf ("%dx^2+%dx+%d=0", a, b, c);
		
		if ((b*b - 4*a*c) >= 0) 
    	{
        	X1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        	printf ("\nX1 = %d", X1);
        	X2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        	printf ("\nX2 = %d", X2);
    	}
    	else
    	{
        	printf ("\nNo solutions");
    	}

		return 0;		
	}
