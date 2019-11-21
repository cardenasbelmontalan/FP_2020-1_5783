#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
	//Declarar
	double x,y,z;
	
	//Almacenar en variable float
	x=atof(argu[1]);
	y=atof(argu[2]);
	
	//Condicionando a grados
	if(x==1){
		z=(y-32)/1.8;
		//Mostrar resultado
		printf("%.2f\n",z);
		return 0;
	}
	//Condicionando a grados F
	else
		if(x==0){
			z=32+(y*1.8);
			//Resultado
			printf("%.2f\n",z);
			return 0;
		}
	return 0;
}
