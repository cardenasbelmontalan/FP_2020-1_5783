#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double RAIZ(double x, double tol, double candidato){ //declarando variables
	double division, diferencia, promedio;
	division=x/candidato;
	diferencia=fabs(division-candidato);
	while(diferencia>tol){
		division=x/candidato;
		diferencia=fabs(division-candidato);
		promedio=(candidato+division)/2;
		candidato=promedio;
	}
	return candidato;
}
int main(int argc, char*argv[]){
	double numero, tolerancia, ans, candidato;
	numero=atof(argv[1]);
	candidato=atof(argv[3]);
	tolerancia=atof(argv[2]);
	ans=RAIZ(numero, tolerancia, candidato);
	printf("%lf\n",ans);
	return 0;
}
