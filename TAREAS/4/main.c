#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	
	//Declarando variables
	double x=0;
	
	//Construyendo estructura de repetición 
	for(int i=1;i<argc;i++){
		double y=atof(argv[i]);
		x=y+x;
	}
	//Generando promedio
	double promedio=x/(argc-1);
	printf("%.2lf\n",promedio);
	
	return 0;
}
