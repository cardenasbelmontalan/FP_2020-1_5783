#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
	//declaraos las variables 
	int a;
	int b;
	int c=1;
	a=atof(argu[1]);
	b=atof(argu[2]);
	//declaramos donde lo vamos a almacenar
	for(int i=0; i<b; i++){
	//declaramos que se va a guardar la operación
	c=c*a;	
	}
	//imprimimos resultado
	printf("%.2d\n", c);
	return 0;
}
