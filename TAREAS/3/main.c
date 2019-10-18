#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[]){
	double x, y;

	x= atof(argv[1]);
	y= atof(argv[2]);

	printf("La suma es %g\n", x+y);

	printf("La resta es %g\n", x-y);

	printf("La multiplicación es %g\n", x*y);

	printf("La división es %.21f\n", x/y);

	return 0;
}
