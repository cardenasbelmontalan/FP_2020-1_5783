#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[]){
	double x, y;

	x= atof(argv[1]);
	y= atof(argv[2]);

	printf("La suma es %g\n", x+y);

	printf("La resta es %g\n", x-y);

	printf("La multiplicaci�n es %g\n", x*y);

	printf("La divisi�n es %.21f\n", x/y);

	return 0;
}
