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
		if ( (a == 0) && (b == 0)) {
		printf("Has no roots");
		return 0;
	}
	if (a == 0) {
		x = c * -1 / b;
		printf ("%.2f",x);
		return 0;
	}
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
	system("PAUSE");
return 0;
}
