#include "function.h"
#include <stdio.h>
#include <math.h>

int main ()
{
	int i;
	float x,D,a,b,c;
	printf("ax^2+bx+c=0\n");
	printf ("Vvedite znachenie a: ");
	scanf("%f",&a);
	printf("Vvedite znachenie b: ");
	scanf("%f",&b);
	printf("Vvedite znachenie c: ");
	scanf("%f",&c);
	D = Discriment(a,b,c);
	i = Proverka(D);
	switch (i) {
		case 0:
			x = Znachenie (D, a, b, c, 1);
			printf ("%.2f",x);
			break;
		case 1:
			printf("Net korney");
			break;
		case 2:
			x = Znachenie (D, a, b, c, 1);
			printf ("%.2f\n",x);
			x = Znachenie (D, a, b, c, -1);
			printf ("%.2f",x);
			break;
	}
	return 0;
}
