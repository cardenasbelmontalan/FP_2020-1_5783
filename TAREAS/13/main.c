#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){ // se hace una lista de enteros
	int numeros[argc-1];//se añaden los dos indices y la variable
	int i=0, j=1, numero;
	while(i<argc-1){
		numero=atoi(argu[j]);
		numeros[i]=numero;//agregamos argu a la lista}
		i++;
		j++;
	}
	int temporal;
	for(i=1;i<argc-1; i++){
		for(j=0;j<argc-1-i;j++){
			//ordena los numeros
			if(numeros[j]>numeros[j+1]){
				temporal=numeros[j];//Se guardan las variables en temporal
				numeros[j]=numeros[j+1];
				numeros[j+1]=temporal;
			}
		}
	}
	for (int i=0; i<argc-1;i++){
		printf("%i\n",numeros[i]);//con este for imprimimos
	}
}
